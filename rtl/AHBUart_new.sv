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
*   Modified by:  Michael Li
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
    //logic [?:?] error_state; // will implement later
    always_ff @(posedge clk) begin
        if(!nReset) begin
            rate <= DefaultRate;
            use_flow_control <= 1'b1;
            buffer_clear <= 1'b1;
        end else begin
            // set value for rate
            if(bp.addr == BAUD_RATE && bp.WEN) begin
                rate <= bp.wdata; //may have to reduce to 16 bits somehow...
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
    logic txValid, txClk, txBusy, txDone; //da fuk is txValid, ask about txDone (only on for one cycle or persist?)
  
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


  // UART - buffer signal mechanics
  assign rts = fifoRx_full;
  always_ff @(posedge clk) begin
    //UART Rx to buffer Rx
    if(rxDone && !rxErr) begin
      fifoRx_wdata <= rxData; //do i need to account for overflow, probably not?
      fifoRx_WEN <= 1'b1;
    end else begin
      fifoRx_wdata <= 8'b0;
      fifoRx_WEN <= 1'b0;
    end

    //buffer Tx to UART Tx
      if((cts || !use_flow_control) && !txBusy) begin //is txDone or txBusy for this spot?
      txData <= fifoTx_rdata; //should i account for buffer capacity, maybe not?
      txValid <= 1'b1;
      fifoTx_REN <= 1'b1;
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
            fifoTx_wdata <= bp.wdata;
            fifoTx_WEN <= 1'b1;
        end else begin
            fifoTx_wdata <= 8'b0;
            fifoTx_WEN <= 1'b0;
        end

        // Rx buffer to bus
        fifoRx_REN <= 1'b0
        if(bp.addr == RX_DATA && bp.REN) begin
            bp.rdata <= fifoRx_rdata;
            fifoRx_REN <= 1'b1;
        // Rx state to bus
        end else if (bp.addr == RX_STATE && bp.REN) begin
            bp.rdata <= fifoRx_count;
        // Tx state to bus
        end else if (bp.addr == TX_STATE && bp.REN) begin
            bp.rdata <= fifoTx_count;
        end else begin
            bp.rdata <= 8'b0;
        end
    end

    // some error cases (probably not finished)
    assign bp.error = fifoTx_overrun || fifoRx_underrun;
endmodule
