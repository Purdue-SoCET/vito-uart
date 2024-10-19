/*
        UART SV TESTBENCH
        Name: Yash Singh
        Date Modified: 10/13/2024
*/

//`ifndef __BUS_PROTOCOL_IF__
//`define __BUS_PROTOCOL_IF__

//check internal assertions using waveform dumps...
//`timescale 1ns / 1ps
module uart_tb #();

logic clk, nReset, rx, tx, cts, rts;

//declaring an instance of the UART bus if
bus_protocol_if bp(); // this is where the concrete data information is coming from

AHBUart uart_1 (
        .clk(clk),
        .nReset(nReset),
        .rx(rx),
        .tx(tx),
        .cts(cts),
        .rts(rts),
        .bp(bp.peripheral_vital)
);

always #5 clk = ~clk; // toggle the value of the clock every 5 nanoseconds..

initial begin
  //initialize the bus_protocol signals
        //$dumpfile("uart_wv.vcd");
        $dumpfile("uart_wv.fst");
        $dumpvars(0, uart_tb);
  
  clk = 1;
  nReset = 0;
  bp.addr = 0;
  bp.wen = 0;
  bp.wdata = 0;
  #10; 
  nReset = 1;
  #10;
  nReset = 0;
  //checking initial reset values
  #10; // wait 10 before reset is high
  nReset = 1;
  #10;
  nReset = 0;
  #10;
  nReset = 2;
  bp.addr = 24;
  bp.wen = 1;
  bp.wdata = 32'hccccFFFF;
  $display("Test #1 done, checked reset = 0");
  #10;
   nReset = 0;
  //bp.wen is maintained
  //baud rate is set tp 24
  #10;
  bp.wen = 0;
  #10;
  bp.addr = 20;
  bp.wen = 1;
  bp.wdata = 32'h0;
  #10;
  bp.wen = 0;
  // use for syn reset tests as well
 #10;
  nReset = 1; 
#10;
  nReset = 0;
#10;
       $display("Test completed!");
        $finish;
end
endmodule

//pasting this here to try to solve some problems
interface bus_protocol_if #(
        parameter ADDR_WIDTH = 32, 
        parameter DATA_WIDTH = 32
)(/* No I/O */);

        // Vital signals
        logic wen; // request is a data write
        logic ren; // request is a data read
        logic request_stall; // High when protocol should insert wait states in transaction
        logic [ADDR_WIDTH-1 : 0] addr; // *offset* address of request TODO: Is this good for general use?
        logic error; // Indicate error condition to bus
        logic [(DATA_WIDTH/8)-1 : 0] strobe; // byte enable for writes
        logic [DATA_WIDTH-1 : 0] wdata, rdata; // data lines -- from perspective of bus master. rdata should be data read from peripheral.

        // Hint signals
        logic is_burst;
        logic [1:0] burst_type; // WRAP, INCR
        logic [7:0] burst_length; // up to 256, would support AHB and AXI
        logic secure_transfer; // TODO: How many bits?


        modport peripheral_vital (
            input wen, ren, addr, wdata, strobe,
            output rdata, error, request_stall
        );

        modport peripheral_hint (
            input is_burst, burst_type, burst_length, secure_transfer
        );

        modport protocol (
            input rdata, error, request_stall,
            output wen, ren, addr, wdata, strobe, // vital signals
            is_burst, burst_type, burst_length, secure_transfer // hint signals
        );
endinterface
//`endif
