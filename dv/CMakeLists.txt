find_package(Catch2 3 REQUIRED CONFIG)
find_package(nyu-util REQUIRED CONFIG)

add_executable(tests)

nyu_add_sv(tests bus_protocol_if.sv AHBUart_tl.sv)
nyu_link_sv(tests PRIVATE ahbuart)

target_sources(tests PRIVATE
  AHBUart.cpp
)

add_subdirectory(loopback)

nyu_target_verilate(tests
  TOP_MODULES AHBUart_tl
  ARGS COVERAGE
)
nyu_target_verilate(tests
  TOP_MODULES Loopback_tb
  ARGS COVERAGE TRACE_FST
)

target_link_libraries(tests PRIVATE Catch2::Catch2WithMain nyu::covrecorder)
target_compile_features(tests PRIVATE cxx_std_23)

include(Catch)
catch_discover_tests(tests)

add_executable(trigger_tb)

nyu_add_sv(trigger_tb bus_protocol_if.sv AHBUart_trigger_tb.sv)
nyu_link_sv(trigger_tb PRIVATE ahbuart)

nyu_target_verilate(trigger_tb
  TOP_MODULES AHBUart_trigger_tb
  ARGS VERILATOR_ARGS --timing --main
)

add_test(NAME AHBUart_trigger_tb COMMAND trigger_tb)
