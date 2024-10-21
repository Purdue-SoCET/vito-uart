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

        integer test_num;
        
        logic clk;
        logic nRst, rx, tx, cts, rts;

        //declaring an instance of the UART bus if
        bus_protocol_if bp1(); // this is where the concrete data information is coming from

        
        AHBUart DUT (
                .clk(clk),
                .nReset(nRst),
                .rx(rx),
                .tx(tx),
                .cts(cts),
                .rts(rts),
                .bp(bp.peripheral_vital)
        );
        
        always #5 clk = ~clk; // toggle the value of the clock every 5 nanoseconds..

        task reset_all;
                nRst = 1;

                bp.addr = 0;
                bp.wen = 0;
                bp.ren = 0;
                bp.wdata = 0;
                bp.strobe = 0;
                
                #10;
                
                nRst = 0;
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
                rx = 0;
                cts = 0;
                #10; 
                
                //Reset test
                test_num = 0;
                
                nRst = 1;
                #10;
                nRst = 0;
                //checking initial reset values
                #10; // wait 10 before reset is high
                nRst = 1;
                #10;
                nRst = 0;
                #10;
                $display("Test #1 done, checked reset");
                
                //Configuration test
                test_num++;
                
                nRst1 = 1;
                bp.addr = 24;
                bp.wen = 1;
                bp.wdata = 32'hccccFFFF;
                #10;
                nRst = 0;
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
                nRst = 1; 
                #10;
                nRst = 0;
                #10;
                $display("Test completed!");
                $finish;
        end
endmodule
