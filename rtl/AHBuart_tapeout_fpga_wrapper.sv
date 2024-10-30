/*
 * AHBUart FPGA Wrapper
* Modified by Yash Singh
 */ 

module synchronizer_input (
	input clk,
	input nReset,
	input async_signal,
	output sync_signal
};

reg buffer_1, buffer_2;

always@(posedge clk) begin
if (!nReset) begin
	buffer_1 <= 0;
	buffer_2 <= 0;
end else begin
	buffer_1 <= async_signal;
	buffer_2 <= buffer_2;
end
end

assign sync_signal = buffer_2;

endmodule

module AHBUart_fpga_wrapper (
	// Multiple Clock Sourecs
	input CLOCK_50,
	input CLOCK2_50,
	input CLOCK3_50,
	// Miscellaneous I/O Interfaces
	input  [17:0] SW,
	input  [3:0]  KEY,  // Active-low
	output [8:0]  LEDG,
	output [17:0] LEDR,
	// Seven-Segment Interface
	output [6:0] HEX0,
	output [6:0] HEX1,
	output [6:0] HEX2,
	output [6:0] HEX3,
	output [6:0] HEX4,
	output [6:0] HEX5,
	output [6:0] HEX6,
	output [6:0] HEX7,
	// LCD Interface
	output       LCD_BLON,
	inout  [7:0] LCD_DATA,
	output       LCD_EN,
	output       LCD_ON,
	output       LCD_RS,
	output       LCD_RW,
	// RS232 Interface
	input  UART_CTS,
	output UART_RTS,
	input  UART_RXD,
	output UART_TXD
);
	logic [7:0] gbio, gso, gss;
	logic rx, tx, pwd0, tb0, tso, tss, roo, osnOE, sda, scl,
		ss, sck, mosi, miso;
	logic [18:0] osea;
	logic [3:0] osWEo, osnWEo;
	logic [31:0] oseb;
);

bus_protocol_if bp(); // instantiating the bus
logic ren, wen, error;
logic [31:0] write_data;

fsm_controller fsm_cont (
	.clk(CLOCK_50),
	.nReset(SW[0]),
	.bus_ren(bp.ren),
	.bus_wen(bp.wen), 	
	.bus_error(bp.error),
	.bus_wdata(bp.wdata),
);

AHBUart ahbuart (
	.clk(CLOCK_50),
	.nReset(SW[0]),
	.rx(UART_RXD),
	.tx(UART_TXD),
	.cts(UART_CTS),
	.rts(UART_RTS)
);

endmodule
