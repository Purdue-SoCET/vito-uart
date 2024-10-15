/*
        UART SV TESTBENCH
        Name: Yash Singh
        Date Modified: 10/13/2024
*/

//`ifndef __BUS_PROTOCOL_IF__
//`define __BUS_PROTOCOL_IF__

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


//check internal assertions using waveform dumps...

module uart_tb #();

logic clk, nReset, rx, tx, cts, rts;

//declaring an instance of the UART bus if
bus_protocol_if bp(); // this is where the concrete data information is coming from

AHBuart uart_1 (
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
        $dumpfile("uart_wv.vcd");
        $dumpvars(0, uart_tb);
  
  clk = 1;
  nReset = 0;
  bp.addr = 0;
  bp.wen = 0;
  bp.wdata = 0;

  #20; // wait 20 before reset is high

  nReset = 1;
  bp.addr = 24;
  bp.wen = 1;
  bp.wdata = 8'h0F;
  #20;
  bp.wen = 0;

  #100;
 
        $finish;
end
endmodule


