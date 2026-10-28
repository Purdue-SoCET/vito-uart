module AHBUart_trigger_tb;
  localparam int Rate = 217;

  localparam int RxState = 0;
  localparam int RxData = 4;
  localparam int TxState = 8;
  localparam int TxData = 12;
  localparam int Trigger = 16;

  localparam logic [23:0] RxBytes = {8'hfe, 8'h80, 8'h11};
  localparam logic [31:0] TxBytes = {8'haa, 8'h55, 8'hff, 8'h01};

  int checks = 0;
  int errors = 0;

  logic clk = 0;
  logic nReset = 0;

  logic rx, tx;
  logic rx_trigger, tx_trigger;

  logic rx_line = 1;
  logic loop = 0;

  assign rx = loop ? tx : rx_line;

  always #5 clk = ~clk;

  bus_protocol_if bp ();

  AHBUart #(.DefaultRate(Rate)) uart (.*);

  // Pulse counters
  int rx_pulses = 0;
  int tx_pulses = 0;
  logic rx_trig_last = 0;
  logic tx_trig_last = 0;

  always @(posedge clk) begin
    if (rx_trigger) begin
      rx_pulses++;
      check_val("rx_trigger width", 32'(rx_trig_last), 0);
    end
    if (tx_trigger) begin
      tx_pulses++;
      check_val("tx_trigger width", 32'(tx_trig_last), 0);
    end
    rx_trig_last = rx_trigger;
    tx_trig_last = tx_trigger;
  end

  // Baud generator watch
  int sync_resets = 0;
  int tx_clk_gap = 0;
  bit gap_check = 0;

  always @(posedge clk) begin
    if (uart.syncReset) sync_resets++;
    if (uart.txClk) begin
      if (gap_check) check_val("txClk period", tx_clk_gap, Rate);
      tx_clk_gap = 1;
    end else begin
      tx_clk_gap++;
    end
  end

  // Serial decoder on tx
  logic [7:0] tx_seen[$];

  initial begin
    logic [7:0] b;
    wait (nReset);
    forever begin
      do @(negedge clk); while (tx);
      repeat (Rate / 2) @(negedge clk);
      check_val("tx start bit", 32'(tx), 0);
      for (int i = 0; i < 8; i++) begin
        repeat (Rate) @(negedge clk);
        b[i] = tx;
      end
      repeat (Rate) @(negedge clk);
      check_val("tx stop bit", 32'(tx), 1);
      tx_seen.push_back(b);
    end
  end

  // Stimulus
  task automatic do_reset();
    bp.wen = 0;
    bp.ren = 0;
    bp.addr = 0;
    bp.wdata = 0;
    bp.strobe = 0;
    repeat (4) @(negedge clk);
    nReset = 1;
    repeat (4) @(negedge clk);
  endtask

  task automatic bus_write(input int addr, input logic [31:0] data,
                           input logic [3:0] strobe = 4'hf);
    @(negedge clk);
    bp.wen = 1;
    bp.addr = addr;
    bp.wdata = data;
    bp.strobe = strobe;
    @(negedge clk);
    bp.wen = 0;
    bp.strobe = 0;
  endtask

  task automatic bus_read(input int addr, output logic [31:0] data);
    @(negedge clk);
    bp.ren = 1;
    bp.addr = addr;
    #1 data = bp.rdata;
    @(negedge clk);
    bp.ren = 0;
  endtask

  task automatic set_trigger(input logic [31:0] en, input logic [3:0] strobe = 4'hf);
    bus_write(Trigger, en, strobe);
  endtask

  task automatic write_tx(input logic [31:0] data);
    bus_write(TxData, data);
  endtask

  task automatic send_rx(input logic [7:0] data);
    logic [9:0] frame;
    frame = {1'b1, data, 1'b0};
    @(negedge clk);
    for (int i = 0; i < 10; i++) begin
      rx_line = frame[i];
      repeat (Rate) @(negedge clk);
    end
  endtask

  task automatic wait_tx_done();
    logic [31:0] status;
    do bus_read(TxState, status); while (!status[0]);
    repeat (4) @(negedge clk);
  endtask

  task automatic wait_rx_trigger();
    do @(negedge clk); while (!rx_trigger);
  endtask

  task automatic wait_tx_trigger();
    do @(negedge clk); while (!tx_trigger);
  endtask

  task automatic clear_pulses();
    rx_pulses = 0;
    tx_pulses = 0;
  endtask

  // Checks
  task automatic check_val(input string name, input logic [31:0] got, input logic [31:0] exp);
    checks++;
    if (got !== exp) begin
      errors++;
      $display("%s at %0t: got %0h, exp %0h", name, $time, got, exp);
    end
  endtask

  task automatic check_reg(input string name, input int addr, input logic [31:0] exp,
                           input logic [31:0] mask = '1);
    logic [31:0] rd;
    bus_read(addr, rd);
    check_val(name, rd & mask, exp);
  endtask

  task automatic check_rx_byte(input string name, input logic [7:0] exp);
    check_reg(name, RxData, {8'd1, 16'd0, exp}, 32'hff00_00ff);
  endtask

  task automatic check_pulses(input string name, input int exp_rx, input int exp_tx);
    check_val({name, " rx_trigger"}, rx_pulses, exp_rx);
    check_val({name, " tx_trigger"}, tx_pulses, exp_tx);
  endtask

  task automatic check_tx_bytes(input string name, input logic [7:0] exp[$]);
    check_val({name, " count"}, tx_seen.size(), exp.size());
    if (tx_seen.size() == exp.size()) begin
      for (int i = 0; i < exp.size(); i++) begin
        check_val({name, " byte"}, 32'(tx_seen[i]), 32'(exp[i]));
      end
    end
    tx_seen.delete();
  endtask

  // Cases
  // Reset values
  task automatic reset_case();
    check_reg("TRIGGER reset", Trigger, 0);
    check_reg("TX_STATE reset", TxState, {16'(Rate), 16'd1});
    check_reg("RX_STATE reset", RxState, 0);
  endtask

  // TRIGGER register
  task automatic trigger_reg_case();
    sync_resets = 0;
    set_trigger(32'hffff_ffff);
    check_reg("TRIGGER upper bits 0", Trigger, 3);
    set_trigger(32'h0000_0002, 4'he);
    check_reg("TRIGGER without strobe 0", Trigger, 3);
    set_trigger(32'h0000_0002, 4'h1);
    check_reg("TRIGGER bit 1 only", Trigger, 2);
    set_trigger(32'h0000_0001);
    check_reg("TRIGGER bit 0 only", Trigger, 1);
    set_trigger(0);
    check_reg("TRIGGER cleared", Trigger, 0);
    check_val("TRIGGER write syncReset", sync_resets, 0);
    check_reg("TRIGGER write TX_STATE", TxState, {16'(Rate), 16'd1});
    check_pulses("idle", 0, 0);
  endtask

  // Enables off
  task automatic enables_off_case();
    clear_pulses();
    send_rx(8'ha5);
    send_rx(8'h3c);
    check_reg("RX_STATE avail", RxState, 1);
    check_reg("RX_DATA two bytes", RxData, {8'd2, 8'h00, 8'h3c, 8'ha5});
    check_reg("RX_STATE avail cleared", RxState, 0);
    check_reg("RX_DATA count cleared", RxData, 0, 32'hff00_0000);
    write_tx({8'd2, 8'h00, 8'h5a, 8'hc3});
    check_reg("TX_STATE busy", TxState, {16'(Rate), 16'd0});
    check_reg("TX_DATA readback", TxData, {8'd2, 8'h00, 8'h5a, 8'hc3});
    wait_tx_done();
    check_tx_bytes("enables off tx", '{8'hc3, 8'h5a});
    check_pulses("enables off", 0, 0);
  endtask

  // One rx_trigger per byte
  task automatic rx_trigger_case();
    set_trigger(1);
    clear_pulses();
    for (int i = 0; i < 3; i++) begin
      fork
        send_rx(RxBytes[8*i+:8]);
        begin
          wait_rx_trigger();
          check_rx_byte("RX_DATA after rx_trigger", RxBytes[8*i+:8]);
        end
      join
    end
    check_pulses("rx bytes", 3, 0);
  endtask

  // One tx_trigger per write
  task automatic tx_trigger_case();
    set_trigger(2);
    clear_pulses();
    write_tx({24'd0, TxBytes[7:0]});
    for (int i = 1; i < 4; i++) begin
      wait_tx_trigger();
      write_tx({24'd0, TxBytes[8*i+:8]});
      check_reg("TX_DATA after tx_trigger", TxState, 0, 32'h1);
    end
    wait_tx_trigger();
    repeat (2) @(negedge clk);
    check_pulses("tx stream", 0, 4);
    check_tx_bytes("tx stream", '{TxBytes[7:0], TxBytes[15:8], TxBytes[23:16], TxBytes[31:24]});
  endtask

  // Multi byte write
  task automatic multi_byte_case();
    clear_pulses();
    write_tx({8'd3, 8'h33, 8'h22, 8'h11});
    wait_tx_done();
    check_pulses("multi byte", 0, 1);
    check_tx_bytes("multi byte", '{8'h11, 8'h22, 8'h33});
  endtask

  // TRIGGER writes mid byte
  task automatic mid_byte_case();
    set_trigger(3);
    clear_pulses();
    sync_resets = 0;
    gap_check = 1;
    fork
      send_rx(8'h96);
      begin
        write_tx({24'd0, 8'h69});
        repeat (4 * Rate) @(negedge clk);
        set_trigger(0);
        set_trigger(3);
        repeat (Rate / 3) @(negedge clk);
        set_trigger(32'hffff_fffc);
        set_trigger(3);
      end
    join
    wait_tx_done();
    gap_check = 0;
    check_val("mid byte syncReset", sync_resets, 0);
    check_rx_byte("mid byte rx", 8'h96);
    check_tx_bytes("mid byte tx", '{8'h69});
    check_pulses("mid byte", 1, 1);
  endtask

  // TX_STATE write syncReset
  task automatic sync_reset_case();
    bus_write(TxState, {16'(Rate), 16'd0}, 4'hc);
    repeat (2) @(negedge clk);
    check_val("TX_STATE write syncReset", sync_resets, 1);
  endtask

  // Loopback both enabled
  task automatic loopback_case();
    loop = 1;
    clear_pulses();
    write_tx({8'd3, 8'hc0, 8'hde, 8'h42});
    wait_tx_done();
    check_reg("loopback RX_DATA", RxData, {8'd3, 8'hc0, 8'hde, 8'h42});
    check_pulses("loopback", 3, 1);
    check_tx_bytes("loopback tx", '{8'h42, 8'hde, 8'hc0});
  endtask

  task automatic do_verdict();
    if (errors == 0) $display("PASS: %0d checks, %0d mismatches", checks, errors);
    else $fatal(1, "FAIL: %0d mismatches, %0d checks", errors, checks);
    $finish;
  endtask

  // Watchdog
  initial begin
    #50_000_000;
    $fatal(1, "TIMEOUT: sim exceeded max time");
  end

  initial begin
    do_reset();
    reset_case();
    trigger_reg_case();
    enables_off_case();
    rx_trigger_case();
    tx_trigger_case();
    multi_byte_case();
    mid_byte_case();
    sync_reset_case();
    loopback_case();
    do_verdict();
  end
endmodule
