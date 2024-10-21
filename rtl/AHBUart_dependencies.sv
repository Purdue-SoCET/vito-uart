/* manually inserting the socetFIFO errors while this gets sorted out...*/
module socetlib_fifo #(
    parameter type T = logic [7:0], // total FIFO entries
    parameter DEPTH = 8,
    parameter ADDR_BITS = $clog2(DEPTH)
)(
    input CLK,
    input nRST,
    input WEN,
    input REN,
    input clear,
    input T wdata,
    output logic full,
    output logic empty,
    output logic underrun,
    output logic overrun,
    output logic [ADDR_BITS-1:0] count,
    output T rdata
);

    // Parameter checking
    //
    // Width can be any number of bits > 1, but depth must be a power-of-2 to accomodate addressing scheme
    // Address bits should not be changed by the user.
    /*generate
        if(DEPTH == 0 || (DEPTH != 0 && (DEPTH - 1) != 0)) begin
            $error("%m: DEPTH must be a power of 2 >= 1!");
        end

        if(ADDR_BITS != $clog2(DEPTH)) begin
            $error("%m: ADDR_BITS is automatically calculated, please do not override!");
        end
    endgenerate*/ //Note: the error statements is broken somehow, commented this just try to see if everything else works

    logic full_internal, full_next, empty_internal, empty_next;
    logic overrun_next, underrun_next;
    logic [ADDR_BITS-1:0] write_ptr, write_ptr_next, read_ptr, read_ptr_next;
    T [DEPTH-1:0] fifo, fifo_next;

    always_ff @(posedge CLK, negedge nRST) begin
        if(!nRST) begin
            fifo <= '{default: '0};
            write_ptr <= '0;
            read_ptr <= '0;
            full_internal <= 1'b0;
            empty_internal <= 1'b1;
            overrun <= 1'b0;
            underrun <= 1'b0;
        end else begin
            fifo <= fifo_next;
            write_ptr <= write_ptr_next;
            read_ptr <= read_ptr_next;
            full_internal <= full_next;
            empty_internal <= empty_next;
            overrun <= overrun_next;
            underrun <= underrun_next;
        end
    end

    always_comb begin
        fifo_next = fifo;
        full_next = full_internal;
        empty_next = empty_internal;
        write_ptr_next = write_ptr;
        read_ptr_next = read_ptr;
        overrun_next = overrun;
        underrun_next = underrun;

        if(clear) begin
            // No need to actually reset FIFO data,
            // changing pointers/flags to "empty" state is OK
            full_next = 1'b0;
            empty_next = 1'b1;
            write_ptr_next = '0;
            read_ptr_next = '0;
            overrun_next = 1'b0;
            underrun_next = 1'b0;
        end else begin
            if(REN && !empty) begin
                read_ptr_next = read_ptr + 1;
                full_next = 1'b0;
                empty_next = (read_ptr_next == write_ptr_next);
            end else if(REN && empty) begin
                underrun_next = 1'b1;
            end

            if(WEN && !full) begin
                write_ptr_next = write_ptr + 1;
                fifo_next[write_ptr] = wdata;
                empty_next = 1'b0;
                full_next = (write_ptr_next == read_ptr_next);
            end else if(WEN && full) begin
                overrun_next = 1'b1;
            end
        end
    end

    //assign count = (write_ptr > read_ptr) ? (write_ptr - read_ptr) : (ADDR_BITS - (read_ptr - write_ptr));
    assign count = write_ptr - read_ptr;
    assign rdata = fifo[read_ptr];

    assign full = full_internal;
    assign empty = empty_internal;


endmodule

//temporarily adding files here until i figure out what going on
module BaudRateGen #(
    int MaxClockRate = 100 * 10 ** 6,
    int MinBaudRate  = 9600,
    int Oversample   = 16
) (
    input clk,
    input nReset,
    input syncReset,

    input phase,
    input [txWidth-1:0] rate,

    output logic rxClk,
    output logic txClk
);

  localparam int txWidth = $clog2(MaxClockRate / MinBaudRate);
  localparam int rxShift = $clog2(Oversample);
  localparam int rxWidth = txWidth - rxShift;

  // Unreasonable to test these full-width
  /* verilator coverage_off */
  logic [txWidth-1:0] totalWait;
  logic [txWidth-1:0] postWait;
  logic [txWidth-1:0] preWait;
  /* verilator coverage_on */
  logic inWait;

  logic [rxWidth-1:0] rxRate;
  logic [rxWidth-1:0] offset;

  logic [rxWidth-1:0] rxCount;
  logic [txWidth-1:0] txCount;

  always_comb begin
    rxRate    = rate[txWidth-1:rxShift];
    offset    = rxRate - ((rxRate >> 1) + 1);

    totalWait = rate - {rxRate, 4'b0};
    preWait   = rate - (totalWait >> 1);
    postWait  = rate - preWait + txWidth'(rate[0]) + txWidth'(offset);
    inWait    = txCount > preWait || txCount < postWait;

    rxClk     = (rxRate > 1) ? (!inWait && rxCount == 0) ^ phase : phase;
    txClk     = (rate > 1) ? (txCount == 0) ^ phase : phase;
  end

  always @(posedge clk, negedge nReset) begin
    if (!nReset || syncReset || (txCount == 0)) begin
      rxCount <= rxRate - offset - 1;
    end else if (rxCount == 0) begin
      rxCount <= rxRate - 1;
    end else if (!inWait) begin
      rxCount <= rxCount - 1;
    end

    if (!nReset || syncReset || (txCount == 0)) begin
      txCount <= rate - 1;
    end else begin
      txCount <= txCount - 1;
    end
  end
endmodule

module UartRxEn #(
    int Oversample = 16
) (
    input clk,
    input nReset,

    input en,
    input in,

    output logic [7:0] data,

    output logic done,
    output logic err
);

  localparam sampleWidth = $clog2(Oversample);
  localparam fullSampleCount = sampleWidth'(Oversample - 1);
  localparam halfSampleCount = sampleWidth'(Oversample / 2);

  // verilog_format: off
  enum logic [2:0] {
    IDLE,
    START,
    DATA_A,
    DATA_B,
    STOP,
    ERROR
  } curState , nextState;
  // verilog_format: on

  logic rise, fall, cmp;

  always_ff @(posedge clk, negedge nReset) begin
    cmp <= !nReset ? 1 : en ? in : cmp;
  end

  always_comb begin
    rise = in & ~cmp;
    fall = ~in & cmp;
  end

  logic edgeDetect;
  logic badSync;
  logic reSync;
  logic advance;
  logic badStop;
  logic fastStart;

  logic [sampleWidth-1:0] sampleCount;
  logic [3:0] readCount;
  logic edgeCmp;

  always_comb begin
    edgeDetect = en ? fall || rise : 0;
    badSync = edgeDetect && edgeCmp && (sampleCount >= halfSampleCount);
    reSync = edgeDetect && (sampleCount < halfSampleCount);
    advance = reSync || (en && (sampleCount == 0));
    done = advance && (readCount == 0);
    badStop = en && in == 0 && sampleCount == halfSampleCount;
    fastStart = en && fall && sampleCount < halfSampleCount;
    err = nextState == ERROR;
  end

  always_ff @(posedge clk, negedge nReset) begin
    if (!nReset) begin
      sampleCount <= fullSampleCount;
      edgeCmp     <= 0;
      curState    <= IDLE;
    end else begin
      curState <= en ? nextState : curState;

      if (curState != nextState) begin
        edgeCmp     <= en ? edgeDetect : edgeCmp;
        sampleCount <= en ? fullSampleCount : sampleCount;
      end else begin
        edgeCmp     <= (en && edgeDetect) ? edgeDetect : edgeCmp;
        sampleCount <= en ? sampleCount - 1 : sampleCount;
      end
    end
  end

  logic [7:0] readBuf;

  always_ff @(posedge clk, negedge nReset) begin
    if (!nReset) begin
      readCount <= 8;
      data <= 0;
    end else begin

      if (readCount == 0) begin
        data <= en ? readBuf : data;
      end

      if (nextState != DATA_A && nextState != DATA_B) begin
        readCount <= en ? 8 : readCount;
      end else if (sampleCount == halfSampleCount) begin
        readCount <= en ? readCount - 1 : readCount;
        readBuf   <= en ? {in, readBuf[7:1]} : readBuf;
      end

    end
  end

  always_comb begin

    nextState = curState;

    case (curState)

      IDLE:
      if (fall) begin
        nextState = START;
      end

      START:
      if (badSync) begin
        nextState = ERROR;
      end else if (advance) begin
        nextState = DATA_A;
      end

      DATA_A:
      if (badSync) begin
        nextState = ERROR;
      end else if (advance) begin
        nextState = readCount > 0 ? DATA_B : STOP;
      end

      DATA_B:
      if (badSync) begin
        nextState = ERROR;
      end else if (advance) begin
        nextState = readCount > 0 ? DATA_A : STOP;
      end

      STOP:
      if (badSync || badStop) begin
        nextState = ERROR;
      end else if (fastStart) begin
        nextState = START;
      end else if (advance) begin
        nextState = IDLE;
      end

      // ERROR
      default: nextState = IDLE;

    endcase
  end

endmodule

module UartTxEn (
    input clk,
    input nReset,

    input en,
    input logic [7:0] data,
    input valid,

    output logic out,

    output logic busy,
    output logic done
);

  // verilog_format: off
  enum logic [1:0] {
    IDLE,
    START,
    DATA,
    STOP
  } curState, nextState;
  // verilog_format: on

  logic hasData;
  logic enterStart;

  logic [7:0] writeBuf;
  logic [3:0] writeCount;

  always_comb begin
    done = en & (nextState == STOP);
    busy = nextState != IDLE;
  end

  always_comb begin
    if (nextState == DATA) begin
      out = writeBuf[0];
    end else if (nextState == START) begin
      out = 0;
    end else begin
      out = 1;
    end
  end

  always_ff @(posedge clk, negedge nReset) begin
    if (!nReset) begin
      curState   <= IDLE;
      writeCount <= 8;
      writeBuf   <= 0;
      hasData    <= 0;
      enterStart <= 0;
    end else begin
      curState <= en ? nextState : curState;

      if (nextState == STOP || nextState == IDLE) begin
        if (valid) begin
          enterStart <= en ? 1 : enterStart;
          hasData    <= 1;
          writeCount <= 8;
          writeBuf   <= data;
        end else if (hasData) begin
          enterStart <= en ? 1 : enterStart;
        end
      end

      if (nextState == START) begin
        hasData <= en ? 0 : hasData;
        enterStart <= en ? 0 : enterStart;
      end

      if (nextState == DATA) begin
        writeCount <= en ? writeCount - 1 : writeCount;
        writeBuf   <= en ? 8'(writeBuf[7:1]) : writeBuf;
      end

    end
  end

  always_comb begin
    case (curState)
      IDLE: nextState = enterStart ? START : curState;

      START: nextState = DATA;

      DATA: nextState = |writeCount ? curState : STOP;

      STOP: nextState = enterStart ? START : IDLE;
    endcase
  end

endmodule

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
