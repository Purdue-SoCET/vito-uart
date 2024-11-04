/*
        UART tapeout SV TESTBENCH
        Name: Yash Singh, Michael Li
        Date Modified: 10/13/2024
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
	
	logic clk, nRst;
	logic rx, tx, cts, rts, err;
	logic [3:0] control;
	logic [7:0] tx_data, rx_data; 

	logic [1:0] rate_control, ren_wen;
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
		.rx_data(rx_data)
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
		input longint baud_rate;
	begin
		// rx = 1'b1;
		// ren_wen = from_RX; // data from the receiver 
		// // check the data being received by the module...
		// rate_control = 2'b0;
		// cts = 1'b1; // cts enable

		pause = 10**12 / baud_rate; //Double check this calculation
		rx = 1'b1;
		@(posedge clk);
		rx = 1'b0;
		#pause;
		for(int i = 7; i >= 0; i++) begin
			rx = data_to_send[i];
			#pause;
		end
		rx = 1'b1;
		#pause;
		@(posedge clk); //wait for clock edge to realign testbench with clock
		
	end

	endtask

	//use this to read what information UartTx is sending
	task tx_external_read;
		input integer baud_rate;
	begin
		tx_data = 8'h1; // 1 bit..
		ren_wen = to_TX;
		rate_control = 2'b0;
		
	end
	endtask

	task rx_buffer_read;
		input logic data_to_receive;
	begin
		nRst = 1;
		rx = data_to_receive;
		ren_wen = from_RX;
		rate_control = 2'b0;
	        $display("Buffer rx data in: %x,", rx);
		$display("Buffer receiver data bus: %x,", rx_data);
		#10;
		ren_wen = IDLE;
	end
	endtask

	task tx_buffer_write;
		input logic [7:0] data_to_write;
	begin
		nRst = 1'b1;
		ren_wen = to_TX;
		rate_control = 2'b0;
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
		$display("Testing: %x", 8'h1);
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
		tx_buffer_write(8'h8);
		#10;
		
		$display("Test 1 complete!");
		
		//Test 2: reading from the Tx_buffer
		test_num++;
		cts = 1'b1;

		#5000000; //this is 5 microseconds i think

		$display("Test 2 completed!");

		//Test 3: sending data to UartRx
		test_num++;
		rx_external_write(8'd1, 5207);
		rx_external_write(8'd2, 5207);
		rx_external_write(8'd3, 5207);
		rx_external_write(8'd4, 5207);
		rx_external_write(8'd5, 5207);
		rx_external_write(8'd6, 5207);
		rx_external_write(8'd7, 5207);
		rx_external_write(8'd8, 5207);

		#100;
		
		// reset_all;
		// rx_buffer_read(1'b0);
		// #10;
		// rx_buffer_read(1'b0);
		// #10;
		// rx_buffer_read(1'b0);
		// #10;
		// rx_buffer_read(1'b0);
		// #10;
		// rx_buffer_read(1'b0);
		// #10;
		// rx_buffer_read(1'b0);
		// #10
		// rx_buffer_read(1'b0);
		// #10;
		// rx_buffer_read(1'b1);
		// #10'

		$finish;
	end
endmodule
