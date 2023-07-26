#include <catch2/catch_test_macros.hpp>
#include <NyuTestUtil.hpp>

#include <VLoopback_tb.h>

static void reset(VLoopback_tb& lb) {
  lb.rxRate = 324;
  lb.txRate = 5207;
  lb.wen = 0;
  lb.ren = 0;
  lb.valid = 0;
  lb.syncReset = 0;
  nyu::reset(lb);
}

static void send(VLoopback_tb& lb, std::uint8_t val) {
  lb.data_tx = val;
  lb.valid = 1;
  nyu::tick(lb);
  lb.valid = 0;
}

TEST_CASE("VLoopback_tb") {
  VLoopback_tb lb;
  reset(lb);

  lb.ren = 1;
  lb.addr = 0;

  send(lb, 0xAA);

  while(!(lb.rdata & 1))
    nyu::tick(lb);

  lb.addr = 4;
  nyu::tick(lb);

  REQUIRE((lb.rdata & 0xFF) == 0xAA);
}
