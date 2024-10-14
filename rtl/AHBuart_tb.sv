/*
        UART SV TESTBENCH
        Name: Yash Singh
        Date Modified: 10/13/2024
*/


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
 
finish;
end
endmodule


