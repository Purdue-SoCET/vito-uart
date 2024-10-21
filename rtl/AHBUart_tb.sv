/*
        UART SV TESTBENCH
        Name: Yash Singh, Michael Li
        Date Modified: 10/13/2024
*/

//`ifndef __BUS_PROTOCOL_IF__
//`define __BUS_PROTOCOL_IF__

//check internal assertions using waveform dumps...
//`timescale 1ns / 1ps
module uart_tb #();

        logic clk;
        logic nRst1, rx1, tx1, cts1, rts1;
        logic nRst2, rx2, tx2, cts2, rts2;

        //declaring an instance of the UART bus if
        bus_protocol_if bp1(); // this is where the concrete data information is coming from
        bus_protocol_if bp2();

        
        AHBUart uart1 (
                .clk(clk),
                .nReset(nRst1),
                .rx(rx1),
                .tx(tx1),
                .cts(cts1),
                .rts(rts1),
                .bp(bp1.peripheral_vital)
        );
        
        AHBUart uart2 (
                .clk(clk),
                .nReset(nRst2),
                .rx(rx2),
                .tx(tx2),
                .cts(cts2),
                .rts(rts2),
                .bp(bp2.peripheral_vital)
        );

        always #5 clk = ~clk; // toggle the value of the clock every 5 nanoseconds..

        task reset_all;
                nRst1 = 1;
                nRst2 = 1;

                bp1.addr = 0;
                bp1.wen = 0;
                bp1.ren = 0;
                bp1.wdata = 0;
                bp1.strobe = 0;
                
                bp2.addr = 0;
                bp2.wen = 0;
                bp2.ren = 0;
                bp2.wdata = 0;
                bp2.strobe = 0;
                #10;
                
                nRst1 = 0;
                nRst2 = 0;
                #10;
        endtask
        
        initial begin
                //initialize input signals
                //$dumpfile("uart_wv.vcd");
                $dumpfile("uart_wv.fst");
                $dumpvars(0, uart_tb);
          
                clk = 1;
        
                reset_all;
        
                //note: uart modules are currently disconnected from each other
                rx1 = 0;
                rx2 = 0;
                cts1 = 0;
                cts2 = 0;
                #10; 
                
                //Reset test
                nRst1 = 1;
                nRst2 = 1;
                #10;
                nRst1 = 0;
                nRst2 = 0;
                //checking initial reset values
                #10; // wait 10 before reset is high
                nRst1 = 1;
                nRst2 = 1;
                #10;
                nRst1 = 0;
                nRst2 = 0;
                #10;
                $display("Test #1 done, checked reset");
                
                //Configuration test
                nRst1 = 1;
                bp1.addr = 24;
                bp1.wen = 1;
                bp1.wdata = 32'hccccFFFF;
                #10;
                nRst1 = 0;
                //bp.wen is maintained
                //baud rate is set tp 24
                #10;
                bp1.wen = 0;
                #10;
                bp1.addr = 20;
                bp1.wen = 1;
                bp1.wdata = 32'h0;
                #10;
                bp1.wen = 0;
                // use for syn reset tests as well
                #10;
                nRst1 = 1; 
                #10;
                nRst1 = 0;
                #10;
                $display("Test completed!");
                $finish;
        end
endmodule
