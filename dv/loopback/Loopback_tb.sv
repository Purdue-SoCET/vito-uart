module Loopback_tb (
    input clk,
    input nReset,
    input syncReset,

    input logic [7:0] data_tx,
    input logic [15:0] txRate,
    input valid,
    output busy,
    output done_tx,

    output logic [7:0] data_rx,
    input logic [15:0] rxRate,
    output done_rx,
    output err,

    input wen,
    input ren,
    input [31:0] addr,
    input [31:0] wdata,
    input [3:0] strobe,

    output logic [31:0] rdata,
    output logic error,
    output logic request_stall
);

  logic rxClk;
  logic txClk;

  BaudRateGenVar bg (
      .phase(0),
      .*
  );

  logic inAHB;
  logic outAHB;

  UartTxEn tx (
      .en  (txClk),
      .data(data_tx),
      .out (inAHB),
      .done(done_tx),
      .*
  );

  UartRxEn rx (
      .en  (rxClk),
      .data(data_rx),
      .in  (outAHB),
      .done(done_rx),
      .*
  );

  bus_protocol_if bp ();

  always_comb begin
    bp.wen = wen;
    bp.ren = ren;
    bp.addr = addr;
    bp.wdata = wdata;
    bp.strobe = strobe;

    rdata = bp.rdata;
    error = bp.error;
    request_stall = bp.request_stall;
  end

  AHBUart uart (
      .rx(inAHB),
      .tx(outAHB),
      .*
  );

endmodule
