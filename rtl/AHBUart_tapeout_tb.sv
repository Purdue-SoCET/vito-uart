/*
        UART tapeout SV TESTBENCH
        Name: Yash Singh, Michael Li
        Date Modified: 10/13/2024
*/

//`ifndef __BUS_PROTOCOL_IF__
//`define __BUS_PROTOCOL_IF__


//configurations for ren_wen and derivatives
typedef enum logic [1:0] {
	IDLE = 0,
	to_TX = 1,
	from_RX = 2,
	BUFFER_CLEAR = 3
} data_state_t;

//check internal assertions using waveform dumps...
//`timescale 1ns / 1ps
module uart_tb #();

	integer test_num;
	
	logic clk, nRst;
	logic rx, tx, cts, rts, err;
	logic [3:0] control;
	logic [7:0] tx_data, rx_data;

	logic [1:0] rate_control, ren_wen;
	assign control = {ren_wen, rate_control}; 
	
		
	AHBUart_tapeout_fpga_wrapper DUT (
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
		ren_wen = IDLE;
		rate_control = 2'b0;
		tx_data = 8'b0;
		
		nRst = 1'b0;
		#10;

		cts = 1'b1;
		
		nRst = 1'b1;
		#10;
	endtask

	task rx_external_read;
		input logic [7:0] data_to_send;
		input integer baud_rate;
	begin
		//add stuff here :)
	end
	endtask

	task tx_external_write;
		input integer baud_rate;
	begin
		//add stuff here :)
	end
	endtask

	task rx_buffer_read;
	begin
		$display("Buffer read: %x", rx_data);
		ren_wen = from_RX;
		#10;
		ren_wen = IDLE;
	end
	endtask

	task tx_buffer_write;
		input logic [7:0] data_to_write;
	begin
		ren_wen = to_TX;
		tx_data = data_to_write;
		#10;
		ren_wen = IDLE;
		tx_data = 8'b0;
	end
	endtask

	
	initial begin
		//initialize input signals
		//$dumpfile("uart_wv.vcd");
		$dumpfile("uart_wv.fst");
		$dumpvars(0, uart_tb);
	
		clk = 1;
	
		reset_all;
		
		//Test 0: Reset test
		test_num = 0;
		
		nRst = 0;
		#10;
		nRst = 1;
		//checking initial reset values
		#10; // wait 10 before reset is high
		$display("Test #1 done, checked reset");
		
		//Test 1: writing to Tx_buffer
		test_num++;
		reset_all;
		tx_buffer_write(8'h1);
		#10;
		tx_buffer_write(8'h2);
		#10;
		tx_buffer_write(8'h3);
		#10;
		tx_buffer_write(8'h4);
		#10;
		tx_buffer_write(8'h5);
		#10;
		tx_buffer_write(8'h6);
		#10
		tx_buffer_write(8'h7);
		#10;
		tx_buffer_write(8'h8);
		#10;
		
		
		
		$display("Test completed!");
		$finish;
	end
endmodule
