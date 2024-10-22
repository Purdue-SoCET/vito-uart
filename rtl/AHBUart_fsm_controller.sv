module fsm_controller (
	input logic clk, nReset, bus_ren, bus_wen, bus_error,
	output [31:0] bus_wdata
);

typedef enum logic [1:0] {IDLE, TX_MODE, RX_MODE, ERROR} state_t;
state_t state, nextState;
typedef enum logic [31:0] {
      DATA_1 = 0,             // address to read Rx data // Question: would it be better to merge Rx and Tx data addresses?
      DATA_2  = 4,            // address to write Tx data
      DATA_3 = 8,            // address to see Rx buffer state
      DATA_4  = 12,          // address to see Tx buffer state
      DATA_5 = 16,          // address to change baud rate
} TX_DATA_VALS;
TX_DATA_VALS curr_data, next_data;

always @(posedge clk) begin // switching through states and data 
if (!nReset) begin
state <= IDLE;
curr_data <= DATA_1;
else begin
state <= nextState;
curr_data <= next_data;
end
end

always_comb begin
bus_wdata = curr_data;
end

always@(posedge clk) begin
	// a list of values to cycle through
  if(nextState = TX_MODE) begin
	case(curr_data)
	DATA_1: next_data = DATA_2;
	DATA_2: next_data = DATA_3;
	DATA_3: next_data = DATA_4;
	DATA_4: next_data = DATA_5;
	DATA_5: next_data = DATA_1;
	endcase
end
end

always@(posedge clk) begin
nextState = state;
case(state)
	IDLE: 
		if (bus_wen && !bus_error) begin
		nextState = TX_MODE;
		else if (bus_ren && !bus_error) begin
		nextState = RX_MODE;
		end
 	TX_MODE: (bus_wen && !bus_error)? TX_MODE: IDLE;
	RX_MODE: (bus_ren && !bus_error)? RX_MODE: IDLE;
	ERROR: nextState = IDLE;
	endcase
end

endmodule
