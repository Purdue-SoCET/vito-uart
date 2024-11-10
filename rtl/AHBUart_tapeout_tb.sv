/*
        UART tapeout SV TESTBENCH
        Name: Yash Singh, Michael Li
        Date Modified: 10/13/2024

 	Checklist of tests
  	0. reset test - done
  	1. writing to tx buffer - done
   		- double check buffer empty/full signals are correct
   	2. reading from tx buffer to uartTx - done
		- double check baud rate in tb to make sure it correct (should be valid i think)
  		- test cts to see if it stops uartTx
	3. sending data to uartRx - done
 		- double check buffer empty/full signals are correct
 	4. reading from rx buffer - done
  		- double check buffer empty/full signals are correct
  	5. test buffer clear - please verify works
   	6. stress test buffers - not done
		- add more than buffer can fill
  		- ask for more than buffer has
   	6. try different baud rates - not done
	7. double check nidle - not done
*/


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
	integer dummy_variable; //for testing
	
	logic clk, nRst;
	logic rx, tx, cts, rts, err;
	logic [3:0] control;
	logic [7:0] tx_data, rx_data; 

	logic [1:0] rate_control, ren_wen;
	logic tx_buffer_full, rx_buffer_empty;
	assign control = {ren_wen, rate_control};
		
	always #5 clk = ~clk; // toggle the value of the clock every 5 nanoseconds..

	AHBUart_tapeout DUT (
		.clk(clk),
		.nReset(nRst),
		.rx(rx),
		.tx(tx),
		.cts(cts),
		.rts(rts),
		.err(err),
		.control(control),
		.tx_data(tx_data),
		.rx_data(rx_data),
		.tx_buffer_full(tx_buffer_full),
		.rx_buffer_empty(rx_buffer_empty)
	);

	task reset_all;
		rx = 1'b1;
		// tx = 1'b0; 
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

	//use this to write data to UartRx
	task rx_external_write;
		input logic [7:0] data_to_send;
		input integer baud_rate;
	begin
		integer pause = 5207 * 10;
		if (baud_rate == 19200) begin
			pause = 2604 * 10;
		end else if (baud_rate == 38400) begin
			pause = 1302 * 10;
		end else if (baud_rate == 115200) begin
			pause = 434 * 10;
		end else begin //baud_rate == 9600
			pause = 5207 * 10;
		end

		//wait the baud rate represents the time in 10 picoseconds between each bit???
		rx = 1'b1;
		@(posedge clk);
		rx = 1'b0;
		#(pause);
		$display("Data sent into rx:", data_to_send);
		for(int i = 0; i < 8; i++) begin
			// $display("tick: %d", i);
			rx = data_to_send[i];
			#(pause);
		end
		rx = 1'b1; // why 
		#(pause);
		@(posedge clk); //wait for clock edge to realign testbench with clock
		
	end

	endtask

	//use this to read what information UartTx is sending
	task tx_external_read;
		input logic [7:0] expected_data;
		input integer baud_rate;
	begin
		integer pause;
		if (baud_rate == 19200) begin
			pause = 2604 * 10;
		end else if (baud_rate == 38400) begin
			pause = 1302 * 10;
		end else if (baud_rate == 115200) begin
			pause = 434 * 10;
		end else begin //baud_rate == 9600
			pause = 5207 * 10;
		end

		//wait for tx to start
		@(negedge tx);
		
		//delay by half a pause to sample middle of bits
		#(pause/2);

		//check start bit
		if(tx != 0) begin
			$display("Error: Invalid start bit for tx data: %x", expected_data);
		end

		//check data bits
		dummy_variable = 0;
		$display("Expected; %x", expected_data);
		for(integer i = 0; i < 8; i++) begin
			#(pause);
			$display("Current bit is %x: %x", i, tx);
			if(tx != expected_data[i]) begin
				$display("Error: Invalid bit (%d) for tx data: %x. Read %b, expected %b.", i, expected_data, tx, expected_data[i]);
			end
			dummy_variable++;
		end

		//check stop bit
		#(pause);
		if(tx != 1) begin
			$display("Error: Invalid stop bit for tx data: %x", expected_data);
		end
			

		//realign back to clock signal
		#(pause/2);
		@(posedge clk);
		
	end
	endtask

	task rx_buffer_read;
		input logic [7:0] expected_data;
	begin
		ren_wen = from_RX;
		#5;
		if(rx_data == expected_data) begin
			$display("Rx buffer read: %x", rx_data); //cant figure out how to put this in decimal
		end else begin
			$display("Error: Invalid Rx buffer read. Expected %x, read %x.", expected_data, rx_data);
		end
		#5;
		ren_wen = IDLE;
	end
	endtask

	task tx_buffer_write;
		input logic [7:0] data_to_write;
	begin
		nRst = 1'b1;
		ren_wen = to_TX;
		// rate_control = 2'b0;
		tx_data = data_to_write;
		$display("Buffer transceiver data bus: %x,", tx_data);
		$display("Buffer tx data out: %x,", tx);
		#11;
		ren_wen = IDLE;
		tx_data = 8'b0;
		#9;
	end
	endtask

	
	initial begin
		//initialize input signals
		//$dumpfile("uart_wv.vcd");
		$dumpfile("uart_wv.fst");
		$dumpvars(0, uart_tb);
	
		clk = 1;
	
		reset_all; //this does nothing...
		
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
		cts = 1'b0;
		#10;
		tx_buffer_write(8'h1); // send in combinations of 8 bit values..
		#10; //m - note to self: is it bad that i need this delay to write data, there's already a cycle long delay in tx_buffer_write
		tx_buffer_write(8'h2); 
		#10;
		tx_buffer_write(8'h3);
		#10;
		tx_buffer_write(8'h4);
		#10;
		tx_buffer_write(8'h5);
		#10;
		tx_buffer_write(8'h6);
		#10;
		tx_buffer_write(8'h7);
		#10;
		$display("Testing for all ones");
		tx_buffer_write(8'hFF);
		#10
		$display("Test 1, writing to tx fifo buffer, complete!");
	
		#1000000;	
		//Test 2: reading from the Tx_buffer
		test_num++;
		cts = 1'b1;
		#10;
		tx_external_read(8'h1, 9600);
		tx_external_read(8'h2, 9600);
		tx_external_read(8'h3, 9600);
		tx_external_read(8'h4, 9600);
		tx_external_read(8'h5, 9600);
		tx_external_read(8'h6, 9600);
		tx_external_read(8'h7, 9600);
		tx_external_read(8'hFF, 9600);

		#100000;

		// #5000000; //this is 5 microseconds i think

		$display("Test 2, reading from the tx uart, completed!");

		//Test 3: sending data to UartRx
		test_num++;
		rx_external_write(8'd1, 9600);
		rx_external_write(8'd2, 9600);
		rx_external_write(8'd3, 9600);
		rx_external_write(8'd4, 9600);
		rx_external_write(8'd5, 9600);
		rx_external_write(8'd6, 9600);
		rx_external_write(8'd7, 9600);
		rx_external_write(8'hFF, 9600);

		#100;

		$display("Test 3, writing to the rx uart, completed!");


		//Test 4: reading from Rx buffer
		test_num++;

		rx_buffer_read(8'h1);
		#10;
		rx_buffer_read(8'h2);
		#10;
		rx_buffer_read(8'h3);
		#10;
		rx_buffer_read(8'h4);
		#10;
		rx_buffer_read(8'h5);
		#10;
		rx_buffer_read(8'h6);
		#10;
		rx_buffer_read(8'h7);
		#10;
		rx_buffer_read(8'hFF);
		#10;

		#100;

		
		$display("Test 4, reading from the rx buffer, completed!");

		//Test 5: buffer clearing
		test_num++;
		reset_all;

		rx_external_write(8'd10, 9600);
		rx_external_write(8'd11, 9600);
		rx_external_write(8'd12, 9600);
		rx_external_write(8'd13, 9600);
		rx_external_write(8'd14, 9600);

		tx_buffer_write(8'd10);
		#10;
		tx_buffer_write(8'd11);
		#10;
		tx_buffer_write(8'd12);
		#10;
		tx_buffer_write(8'd13);
		#10;
		tx_buffer_write(8'd14);
		#10;

		ren_wen = BUFFER_CLEAR;
		#10;
		ren_wen = IDLE;
		#10;

		$display("Test 5, clearing the buffers, completed!");
		
		#100;

		

		//Test 6: Checking 19200 baud rate
		test_num++;
		reset_all;
		rate_control = 2'b1; //19200 baud rate

		tx_buffer_write(8'd1);
		#10;
		tx_buffer_write(8'd2);
		#10;
		tx_buffer_write(8'd4);
		#10;
		tx_buffer_write(8'd8);
		#10;
		tx_buffer_write(8'd16);
		#10;
		tx_buffer_write(8'd32);
		#10;
		tx_buffer_write(8'd64);
		#10;
		tx_buffer_write(8'd128);
		#10;

		cts = 1'b1;
		tx_external_read(8'd1, 19200);
		tx_external_read(8'd2, 19200);
		tx_external_read(8'd4, 19200);
		tx_external_read(8'd8, 19200);
		cts = 1'b0;
		#500000;
		cts = 1'b1;
		tx_external_read(8'd16, 19200);
		tx_external_read(8'd32, 19200);
		tx_external_read(8'd64, 19200);
		tx_external_read(8'd128, 19200);
		cts = 1'b0;
		#100;

		rx_external_write(8'd1, 19200);
		rx_external_write(8'd2, 19200);
		rx_external_write(8'd4, 19200);
		rx_external_write(8'd8, 19200);
		#500000;
		rx_external_write(8'd16, 19200);
		rx_external_write(8'd32, 19200);
		rx_external_write(8'd64, 19200);
		rx_external_write(8'd128, 19200);
		#100;

		rx_buffer_read(8'd1);
		#10;
		rx_buffer_read(8'd2);
		#10;
		rx_buffer_read(8'd4);
		#10;
		rx_buffer_read(8'd8);
		#10;
		rx_buffer_read(8'd16);
		#10;
		rx_buffer_read(8'd32);
		#10;
		rx_buffer_read(8'd64);
		#10;
		rx_buffer_read(8'd128);
		#10;


		$display("Test 6, checking 19200 baud rate, completed!");
		
		#100;
		

		//Test 7: Checking 38400 baud rate
		test_num++;
		reset_all;
		rate_control = 2'd2; //38400 baud rate

		tx_buffer_write(8'd1);
		#10;
		tx_buffer_write(8'd2);
		#10;
		tx_buffer_write(8'd4);
		#10;
		tx_buffer_write(8'd8);
		#10;
		tx_buffer_write(8'd16);
		#10;
		tx_buffer_write(8'd32);
		#10;
		tx_buffer_write(8'd64);
		#10;
		tx_buffer_write(8'd128);
		#10;

		cts = 1'b1;
		tx_external_read(8'd1, 38400);
		tx_external_read(8'd2, 38400);
		tx_external_read(8'd4, 38400);
		tx_external_read(8'd8, 38400);
		cts = 1'b0;
		#500000;
		cts = 1'b1;
		tx_external_read(8'd16, 38400);
		tx_external_read(8'd32, 38400);
		tx_external_read(8'd64, 38400);
		tx_external_read(8'd128, 38400);
		cts = 1'b0;
		#100;

		rx_external_write(8'd1, 38400);
		rx_external_write(8'd2, 38400);
		rx_external_write(8'd4, 38400);
		rx_external_write(8'd8, 38400);
		#500000;
		rx_external_write(8'd16, 38400);
		rx_external_write(8'd32, 38400);
		rx_external_write(8'd64, 38400);
		rx_external_write(8'd128, 38400);
		#100;

		rx_buffer_read(8'd1);
		#10;
		rx_buffer_read(8'd2);
		#10;
		rx_buffer_read(8'd4);
		#10;
		rx_buffer_read(8'd8);
		#10;
		rx_buffer_read(8'd16);
		#10;
		rx_buffer_read(8'd32);
		#10;
		rx_buffer_read(8'd64);
		#10;
		rx_buffer_read(8'd128);
		#10;


		$display("Test 7, checking 38400 baud rate, completed!");
		
		#100;


		//Test 8: Checking 115200 baud rate
		test_num++;
		reset_all;
		rate_control = 2'd3; //115200 baud rate

		tx_buffer_write(8'd1);
		#10;
		tx_buffer_write(8'd2);
		#10;
		tx_buffer_write(8'd4);
		#10;
		tx_buffer_write(8'd8);
		#10;
		tx_buffer_write(8'd16);
		#10;
		tx_buffer_write(8'd32);
		#10;
		tx_buffer_write(8'd64);
		#10;
		tx_buffer_write(8'd128);
		#10;

		cts = 1'b1;
		tx_external_read(8'd1, 115200);
		tx_external_read(8'd2, 115200);
		tx_external_read(8'd4, 115200);
		tx_external_read(8'd8, 115200);
		cts = 1'b0;
		#500000;
		cts = 1'b1;
		tx_external_read(8'd16, 115200);
		tx_external_read(8'd32, 115200);
		tx_external_read(8'd64, 115200);
		tx_external_read(8'd128, 115200);
		cts = 1'b0;
		#100;

		rx_external_write(8'd1, 115200);
		rx_external_write(8'd2, 115200);
		rx_external_write(8'd4, 115200);
		rx_external_write(8'd8, 115200);
		#5000;
		rx_external_write(8'd16, 115200);
		rx_external_write(8'd32, 115200);
		rx_external_write(8'd64, 115200);
		rx_external_write(8'd128, 115200);
		#100;

		rx_buffer_read(8'd1);
		#10;
		rx_buffer_read(8'd2);
		#10;
		rx_buffer_read(8'd4);
		#10;
		rx_buffer_read(8'd8);
		#10;
		rx_buffer_read(8'd16);
		#10;
		rx_buffer_read(8'd32);
		#10;
		rx_buffer_read(8'd64);
		#10;
		rx_buffer_read(8'd128);
		#10;


		$display("Test 8, checking 115200 baud rate, completed!");
		
		#100;
		
		
		

		$finish;
	end
endmodule
