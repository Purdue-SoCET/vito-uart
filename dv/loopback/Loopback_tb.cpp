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

TEST_CASE("VLoopback_tb") {
  auto& lb {nyu::getDUT<VLoopback_tb>()};
  nyu::tracer trace {lb, "loopback.fst"};
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
