#include <array>
#include <cstdint>

#include <catch2/catch_test_macros.hpp>
#include <NyuTestUtil.hpp>

#include <VLoopback_tb.h>

static void reset(VLoopback_tb& lb, nyu::tracer<VLoopback_tb>& trace) {
  lb.rxRate = 324;
  lb.txRate = 5207;
  lb.wen = 0;
  lb.ren = 0;
  lb.valid = 0;
  lb.syncReset = 0;
  nyu::reset(trace);
}

static void send(auto& lb, std::uint8_t val) {
  lb.data_tx = val;
  lb.valid = 1;
  nyu::tick(lb);
  lb.valid = 0;
}

TEST_CASE("VLoopback_tb, rx") {
  auto& lb {nyu::getDUT<VLoopback_tb>()};
  nyu::tracer trace {lb, "loopback_rx.fst"};
  reset(lb, trace);

  lb.ren = 1;
  lb.addr = 0;

  send(lb, 0x11);

  while(!(lb.rdata & 1))
    nyu::tick(trace);

  lb.addr = 4;
  nyu::tick(trace);

  REQUIRE((lb.rdata & 0xFF) == 0x11);
}

union write_queue {
  std::uint32_t data;
  struct {
    std::array<std::uint8_t, 3> wBuf;
    std::uint8_t wCount;
  };
};

TEST_CASE("VLoopback_tb, tx") {
  auto& lb {nyu::getDUT<VLoopback_tb>()};
  nyu::tracer trace {lb, "loopback_tx.fst"};
  reset(lb, trace);

  write_queue q {
      .wBuf = {0xAA, 0xBB, 0xCC},
      .wCount = 3,
  };

  lb.wen = 1;
  lb.strobe = 0xF;
  lb.addr = 12;
  lb.wdata = q.data;

  nyu::tick(trace);

  lb.wen = 0;

  while(!lb.done_rx)
    nyu::tick(trace);
  REQUIRE(lb.data_rx == 0xAA);

  nyu::tick(trace);

  while(!lb.done_rx)
    nyu::tick(trace);
  REQUIRE(lb.data_rx == 0xBB);

  nyu::tick(trace);

  while(!lb.done_rx)
    nyu::tick(trace);
  REQUIRE(lb.data_rx == 0xCC);
}
