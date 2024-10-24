/*Copyright 2023 Purdue University
*   uodated
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
*   Description:  Modification of AHB wrapper for Tape out Nov 10 testing.
*/

//uart implementation

module AHBUart_tapeout_wrapper #(
    logic [15:0] DefaultRate = 5207  // Chosen by fair dice roll
) (
    input clk,
    input nReset,
    input [4:0] control,
    inout [7:0] data, 
    
    input  rx,
    output tx,

    input cts,
    output rts,

);

  logic [2:0] rate_control;
  logic [1:0] ren_wen;
  assign ren_wen = control[4:3];
  assign rate_control = control[2:0];
  
    always_ff @(posedge clk) begin
        if(!nReset) begin
            rate <= DefaultRate;
        end else begin
            if(|rate_control) begin
              case(rate_control) begin
                3'b001: rate = 16384;
                3'b010: rate = 22528; // 22,528
                3'b011: rate = 28672; // 28,672
                3'b100: rate = 34816;
                3'b101: rate = 40960;
                3'b110: rate = 47104;
                3'b111: rate = 53248;
                default: rate = DefaultRate;
              endcase
            end else begin
                rate <= 16'b0;
            end
                
            if((ren_wen == 2'b11) && |data) begin
                buffer_clear <= 1'b1;
            end else begin
                buffer_clear <= 1'b0;
            end
        end
    end

    // UART signal
    logic [7:0] rxData;
    logic [7:0] txData;
    logic rxErr, rxClk, rxDone;
    logic txValid, txClk, txBusy, txDone;
    logic syncReset;

    always_ff @(posedge clk) begin
    if (!nReset) begin
      syncReset <= 1;
    end else if (ren_wen) begin
      case (ren_wen)
        2'b01, 2'b10: syncReset <= 1;
      endcase
    end else begin
      syncReset <= 0;
    end
    end

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
      if(cts && !txBusy && txDone) begin //is txDone or txBusy for this spot?? A: either signal should be fine, they are the converse of each other and I don't think its meaningful when
                                                                  //both are high
        if (fifoTx_underrun) begin
        txData <= fifoTx_rdata;
        txValid <= 1'b0;
        fifoRx_REN <= 1'b1;
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
      if((ren_wen == 2'b01) && |data ) begin
            fifoTx_wdata <= data; // assume we r sending it through the first byte at a time right now
            fifoTx_WEN <= 1'b1;
        end
        else begin
            fifoTx_wdata <= 8'b0; // else writing nothing into the TX from the bus
            fifoTx_WEN <= 1'b0; // write signal is disabled
        end
        // Rx buffer to bus
      if((ren_wen == 2'b10) && ~|data) begin
            data <= fifoRx_rdata;
            fifoRx_REN <= 1'b1;
        end else begin
            data <= 8'b0;
            fifoRx_REN <= 1'b0;
        end
      end

endmodule
