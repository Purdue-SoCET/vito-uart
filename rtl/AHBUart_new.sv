/*
*   Copyright 2023 Purdue University
*
*   Licensed under the Apache License, Version 2.0 (the "License");
*   you may not use this file except in compliance with the License.
*   You may obtain a copy of the License at
*
*       http://www.apache.org/licenses/LICENSE-2.0
*
*   Unless required by applicable law or agreed to in writing, software
*   distributed under the License is distributed on an "AS IS" BASIS,
*   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*   See the License for the specific language governing permissions and
*   limitations under the License.
*
*
*   Filename:     AHBUart.sv
*
*   Created by:   Vito Gamberini
*   Email:        vito@gamberini.email
*   Modified by:  Michael Li, Yash Singh 
*   Date Created: 9/21/2024
*   Description:  Modification of AHB wrapper for PurdNyUart
*/

module AHBUart #(
    int DefaultRate = 5207  // Chosen by fair dice roll
) (
    input clk,
    input nReset,

    input  rx,
    output tx,

    input cts,
    output rts,

    bus_protocol_if.peripheral_vital bp
);
    // bp address types
    typedef enum logic [31:0] {
      RX_DATA = 0,             // address to read Rx data // Question: would it be better to merge Rx and Tx data addresses?
      TX_DATA  = 4,            // address to write Tx data
      RX_STATE = 8,            // address to see Rx buffer state
      TX_STATE  = 12,          // address to see Tx buffer state
      BAUD_RATE = 16,          // address to change baud rate
      BUFFER_CLEAR = 20,       // address to clear Rx and Tx buffers
      USE_FLOW_CONTROL = 24    // address to turn flow control on or off
      //PAUSE = , //consider implementing later
      //ERROR_STATE =  //consider implementing later
    } ADDRS;
    
    // configuration bits
    logic [15:0] rate;
    logic use_flow_control;
    logic buffer_clear;
    //logic [?:?] error_state; // might implement later
    always_ff @(posedge clk) begin
        if(!nReset) begin
            rate <= DefaultRate;
            use_flow_control <= 1'b1;
            buffer_clear <= 1'b1;
        end else begin
            // set value for rate 
            if(bp.addr == BAUD_RATE && bp.WEN) begin
                rate <= bp.wdata[15:0]; // setting the bus protocol write data = first 16 bits? 0x0F ex.
            end else begin
                rate <= 16'b0; 
            end
            // set value for use_flow_control
            if(bp.addr == USE_FLOW_CONTROL && bp.WEN) begin
                use_flow_control <= |bp.wdata;
            end else begin
                use_flow_control <= use_flow_control;
            end

            // set value for buffer_clear
            if(bp.addr == BUFFER_CLEAR && bp.WEN && |bp.wdata) begin
                buffer_clear = 1'b1;
            end else begin
                //only hold buffer clear for one cycle if possible
                buffer_clear = 1'b0;
            end
        end
    end
    
    

    // UART signal
    logic [7:0] rxData;
    logic [7:0] txData;
    logic rxErr, rxClk, rxDone;
    logic txValid, txClk, txBusy, txDone; 
  
    // Params set "clock rate" to 2**16, and "min baud rate" to 1
    // This is equivalent to "please give me 16-bit counters"
    BaudRateGen #(2 ** 16, 1) bg (
        .phase(1'b0),
        .*
    );

    UartRxEn uartRx (
        .en  (rxClk),
        .in  (rx),
        .data(rxData),
        .done(rxDone),
        .err (rxErr),
        .*
    );
  
    UartTxEn uartTx (
        .en   (txClk),
        .data (txData),
        .valid(txValid),
        .out  (tx),  // verilator lint_off PINCONNECTEMPTY
        .busy (txBusy),  // verilator lint_on PINCONNECTEMPTY
        .done (txDone),
        .*
    );

    //fifoRx signals
    logic fifoRx_WEN, fifoRx_REN, fifoRx_clear;
    logic [7:0] fifoRx_wdata;
    logic fifoRx_full, fifoRx_empty, fifoRx_underrun, fifoRx_overrun;
    logic [$clog2(8)-1:0] fifoRx_count; //current buffer capacity is 8
    logic [7:0] fifoRx_rdata;
  
    socetlib_fifo fifoRx (
      .CLK(clk),
      .nRST(nReset),
      .WEN(fifoRx_WEN), //input
      .REN(fifoRx_REN), //input
      .clear(fifoRx_clear), //input
      .wdata(fifoRx_wdata), //input
      .full(fifoRx_full), //output
      .empty(fifoRx_empty), //output
      .underrun(fifoRx_underrun), //ouput
      .overrun(fifoRx_overrun), //output
      .count(fifoRx_count), //output
      .rdata(fifoRx_rdata) //output
    );

    //fifoTx signals
    logic fifoTx_WEN, fifoTx_REN, fifoTx_clear;
    logic [7:0] fifoTx_wdata;
    logic fifoTx_full, fifoTx_empty, fifoTx_underrun, fifoTx_overrun;
    logic [$clog2(8)-1:0] fifoTx_count; //current buffer capacity is 8
    logic [7:0] fifoTx_rdata;
  
    socetlib_fifo fifoTx (
      .CLK(clk),
      .nRST(nReset),
      .WEN(fifoTx_WEN), //input
      .REN(fifoTx_REN), //input
      .clear(fifoTx_clear), //input
      .wdata(fifoTx_wdata), //input
      .full(fifoTx_full), //output
      .empty(fifoTx_empty), //output
      .underrun(fifoTx_underrun), //ouput
      .overrun(fifoTx_overrun), //output
      .count(fifoTx_count), //output
      .rdata(fifoTx_rdata) //output
    );

    //buffer clearing
    assign fifoRx_clear = buffer_clear;
    assign fifoTx_clear = buffer_clear;

  // UART - buffer signal mechanics
  assign rts = fifoRx_full;
  always_ff @(posedge clk) begin
    //UART Rx to buffer Rx
    if(rxDone && !rxErr) begin
        if (fifoRx_overrun) begin
         fifoRx_wdata <= fifoRx_wdata;
         fifoRx_WEN <= 1'b0;
        // do we want to keep or flush out the old data in the fifo register if its full and the rx wants to send in more data?         
        end else begin
        // alt, check with fifo clear
      fifoRx_wdata <= rxData; //do i need to account for overflow, probably not?
      fifoRx_WEN <= 1'b1;
        end
    end else begin
      fifoRx_wdata <= 8'b0; // clear out the data in the fifo and disable writing into it
      fifoRx_WEN <= 1'b0;
    end

    //buffer Tx to UART Tx
      if((cts || !use_flow_control) && !txBusy && txDone) begin //is txDone or txBusy for this spot?? A: either signal should be fine, they are the converse of each other and I don't think its meaningful when
                                                                  //both are high
        if (fifoTx_underrun) begin
        txData <= fifoTx_rdata;
        txValid <= 1'b0;
        fifoRx_REN < 1'b1;
        end else begin
        txData <= fifoTx_rdata; //should i account for buffer capacity, maybe not? // should be fine, both are 8 bits...
        txValid <= 1'b1; // the ts signal is valid
        fifoTx_REN <= 1'b1;
        end
    end else begin
      txData <= 8'b0;
      txValid <= 1'b0;
      fifoTx_REN <= 1'b0;
    end
  end

    
    // bus signal mechanics
    always_ff @(posedge clk) begin
        // bus to Tx buffer
        if(bp.addr == TX_DATA && bp.WEN) begin
            fifoTx_wdata <= bp.wdata[7:0]; // assume we r sending it through the first byte at a time right now
            fifoTx_WEN <= 1'b1; 
        end 
        else begin
            fifoTx_wdata <= 8'b0; // else writing nothing into the TX from the bus
            fifoTx_WEN <= 1'b0; // write signal is disabled
        end
        // Rx buffer to bus
        if(bp.addr == RX_DATA && bp.REN) begin
            bp.rdata <= {24'b0, fifoRx_rdata};
            fifoRx_REN <= 1'b1;
        // Rx state to bus
        end else if (bp.addr == RX_STATE && bp.REN) begin
            bp.rdata <= {27'b0, err, avail, fifoRx_count}; // include rr signal to state whether its a receiver error explicitly or not
        // Tx state to bus
        end else if (bp.addr == TX_STATE && bp.REN) begin
            bp.rdata <= {13'b0, rate, txDone, fifoTx_count};
        end else begin
            bp.rdata <= 32'b0;
        end
    end
    
 assign bp.error = fifoRx_overrun || fifoTx_underrun;
 logic err, avail;
    
 always_ff @(posedge clk) begin
    if (!nReset) begin
      err   <= 0;
      avail <= 0;
    end else if (bp.ren) begin
      err   <= rxErr || ((bp.addr != RX_STATE) && err);
      avail <= rxDone || ((bp.addr != RX_DATA) && avail);
    end else begin
      err   <= rxErr || err; // if there is an exisiting error it persists
      avail <= rxDone || avail;
    end
  end
endmodule