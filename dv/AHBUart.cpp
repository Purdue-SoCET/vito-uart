#include <catch2/catch_test_macros.hpp>
#include <NyuTestUtil.hpp>

#include <VAHBUart_tl.h>

using VAHBUart = VAHBUart_tl;

TEST_CASE("AHBUart, reset") {
  VAHBUart uart;

  nyu::reset(uart);

  REQUIRE(uart.tx == 1);
}

TEST_CASE("AHBUart") {
  VAHBUart uart;
  REQUIRE(1);
}
