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
*   Date Created: 07/13/2023
*   Description:  AHB wrapper for PurdNyUart
*/


module AHBUart #(
    int DefaultRxRate = 324,  // Sure why not
    int DefaultTxRate = 5207  // Chosen by fair dice roll
) (
    input clk,
    input nReset,

    input  rx,
    output tx,

    bus_protocol_if.peripheral_vital bp
);
  typedef enum logic [31:0] {
    RX_STATE,
    RX_DATA,
    TX_STATE,
    TX_DATA
  } ADDRS;

  // Not meaningful in a UART context
  assign bp.error = 0;
  assign bp.request_stall = 0;

  // Uart stuff
  logic [15:0] rxRate;
  logic [ 7:0] rxData;

  logic [15:0] txRate;
  logic [ 7:0] txData;

  logic rxErr, rxClk, rxDone, rxReset;
  logic txValid, txClk, txDone, txReset;

  always_ff @(posedge clk, negedge nReset) begin
    if (bp.wen && nReset) begin
      case (bp.addr)
        RX_STATE: rxReset <= 0;
        TX_STATE: txReset <= 0;
      endcase
    end else begin
      rxReset <= 1;
      txReset <= 1;
    end
  end

  BaudRateGenVar bg (
      .phase(0),
      .*
  );

  UartRxEn uartRx (
      .nReset(rxReset & nReset),
      .en(rxClk),
      .in(rx),
      .data(rxData),
      .done(rxDone),
      .err(rxErr),
      .*
  );

  UartTxEn uartTx (
      .nReset(txReset & nReset),
      .en(txClk),
      .data(txData),
      .valid(txValid),
      .out(tx),  // verilator lint_off PINCONNECTEMPTY
      .busy(),  // verilator lint_on PINCONNECTEMPTY
      .done(txDone),
      .*
  );

  // State variables, done is handled by the transmit FIFO
  logic err, avail, done;

  always_ff @(posedge clk, negedge nReset) begin
    if (!nReset) begin
      err   <= 0;
      avail <= 0;
    end else if (bp.ren) begin
      err   <= rxErr || ((bp.addr == RX_STATE) && err);
      avail <= rxDone || ((bp.addr == RX_DATA) && avail);
    end else begin
      err   <= rxErr || err;
      avail <= rxDone || avail;
    end
  end

  logic [7:0] rFIFOCount;
  logic [7:0] rFIFO[2:0];

  always_ff @(posedge clk, negedge nReset) begin
    if (!nReset) begin
      rFIFOCount <= 0;
      rFIFO <= '{default: 0};
    end else if (bp.ren && bp.addr == RX_DATA) begin
      if (rxDone) begin
        rFIFO[0]   <= rxData;
        rFIFOCount <= 1;
      end else begin
        rFIFOCount <= 0;
      end
    end else if (rxDone) begin
      if (rFIFOCount < 3) rFIFO[2'(rFIFOCount)] <= rxData;
      rFIFOCount <= rFIFOCount + 1;
    end
  end

  logic [7:0] wFIFOCountExt;
  logic [1:0] wFIFOCount;
  logic [1:0] wIndex;
  logic [7:0] wFIFO[2:0];

  assign txData = wFIFO[wIndex];

  always_ff @(posedge clk, negedge nReset) begin
    if (!nReset) begin
      wIndex <= 0;
      txValid <= 0;
      done <= 1;
    end else if (done && bp.wen && bp.addr == TX_DATA) begin
      wIndex <= 0;
      done   <= 0;
    end else if (wIndex == 0 || (wIndex != wFIFOCount && txDone)) begin
      txValid <= 1;
      wIndex  <= wIndex + 1;
    end else begin
      if (txValid) txValid <= 0;
      if (wIndex == wFIFOCount && txDone) done <= 1;
    end
  end

  // We're only compatible with 32-bit words

  // status[31:24]: Counter LSB
  // status[23:16]: Counter MSB
  // status[15: 2]: Reserved/Do nothing
  // status[1]: err
  // status[0]: done/avail
  logic [31:0] rStatus;
  logic [31:0] wStatus;

  // Data registers are tiny FIFOs
  // data[3]:   Bytes in queue, 0 is treated the same as 1, >3 is same as 3
  // data[2-0]: FIFO, 0 is first in, 2 is last in
  logic [31:0] rData;
  logic [31:0] wData;

  logic [ 7:0] bpData  [3:0];

  always_comb begin
    rStatus = {rxRate[7:0], rxRate[15:8], 14'(0), err, avail};
    rData   = {rFIFOCount, rFIFO[2], rFIFO[1], rFIFO[0]};
    wStatus = {txRate[7:0], txRate[15:8], 15'(0), done};
    wData   = {wFIFOCountExt, wFIFO[2], wFIFO[1], wFIFO[0]};
    bpData  = {bp.wdata[31:24], bp.wdata[23:16], bp.wdata[15:8], bp.wdata[7:0]};
  end

  always_ff @(posedge clk, negedge nReset) begin
    if (!nReset) begin
      rxRate <= 16'(DefaultRxRate);
      txRate <= 16'(DefaultTxRate);
      bp.rdata <= 0;

      wFIFOCountExt <= 0;
      wFIFOCount <= 0;
      wFIFO <= '{default: 0};

    end else if (bp.ren) begin
      case (bp.addr)
        RX_STATE: bp.rdata <= rStatus;
        RX_DATA:  bp.rdata <= rData;
        TX_STATE: bp.rdata <= wStatus;
        TX_DATA:  bp.rdata <= wData;
      endcase
    end else if (bp.wen) begin
      case (bp.addr)
        RX_STATE: begin
          if (bp.strobe[3]) rxRate[7:0] <= bpData[3];
          if (bp.strobe[2]) rxRate[15:8] <= bpData[2];
        end

        TX_STATE: begin
          if (bp.strobe[3]) txRate[7:0] <= bpData[3];
          if (bp.strobe[2]) txRate[15:8] <= bpData[2];
        end

        TX_DATA:
        if (done) begin
          if (bp.strobe[3]) begin
            wFIFOCountExt <= bpData[3];
            wFIFOCount <= bpData[3] > 3 ? 3 : 2'(|bpData[3] ? bpData[3] : 8'b1);
          end
          if (bp.strobe[2]) wFIFO[2] <= bpData[2];
          if (bp.strobe[1]) wFIFO[1] <= bpData[1];
          if (bp.strobe[0]) wFIFO[0] <= bpData[0];
        end
      endcase
    end
  end
endmodule
