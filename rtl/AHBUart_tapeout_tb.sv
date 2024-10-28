/*
        UART tapeout SV TESTBENCH
        Name: Yash Singh, Michael Li
        Date Modified: 10/13/2024
*/

//`ifndef __BUS_PROTOCOL_IF__
//`define __BUS_PROTOCOL_IF__


//configurations for ren_wen and derivatives
typedef enum logic [1:0] {
	IDLE = 0;
	to_TX = 1;
	from_RX = 2;
	BUFFER_CLEAR = 3;
} data_state_t;

//check internal assertions using waveform dumps...
//`timescale 1ns / 1ps
module uart_tb #();

	integer test_num;
	
	logic clk, nRst;
	logic rx, tx, cts, rts, err;
	logic [3:0] control;
	logic [7:0] tx_data, rx_data
	
		
	AHBUart_tapeout_wrapper DUT (
		.clk(clk),
		.nReset(nRst),
		.rx(rx),
		.tx(tx),
		.cts(cts),
		.rts(rts),
		.err(err),
		.control(control),
		.tx_data(tx_data),
		.rx_data(rx_data)
	);
			
	always #5 clk = ~clk; // toggle the value of the clock every 5 nanoseconds..

	task reset_all;
		rx = 1'b1;
		cts = 1'b0;
		control = IDLE;
		tx_data = 8'b0;
		
		nRst = 1;
		#10;

		cts = 1'b1
		
		nRst = 0;
		#10;
	endtask

	task send_rx_data;
		input logic [7:0] data_to_send;
		input integer baud_rate
    begin
		//add stuff here :)
    end
    endtask 

	task read_tx_data;
		input integer baud_rate
    begin
		//add stuff here :)
    end
    endtask 
        
	initial begin
		//initialize input signals
		//$dumpfile("uart_wv.vcd");
		$dumpfile("uart_wv.fst");
		$dumpvars(0, uart_tb);
	
		clk = 1;
	
		reset_all;
		
		//Reset test
		test_num = 0;
		
		nRst = 1;
		#10;
		nRst = 0;
		//checking initial reset values
		#10; // wait 10 before reset is high
		$display("Test #1 done, checked reset");
		
		//Configuration test
		test_num++;
		
		
		$display("Test completed!");
		$finish;
	end
endmodule
