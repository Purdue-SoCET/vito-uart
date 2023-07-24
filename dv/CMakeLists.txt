find_package(Catch2 3 REQUIRED CONFIG)
find_package(nyu-util REQUIRED CONFIG)

add_executable(tests)
target_sources(tests PRIVATE
  AHBUart.cpp
)
nyu_add_sv(tests bus_protocol_if.sv AHBUart_tl.sv)
nyu_link_sv(tests PRIVATE ahbuart)
nyu_target_verilate(tests
  TOP_MODULES AHBUart_tl
  ARGS COVERAGE
)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain nyu::covrecorder)
target_compile_features(tests PRIVATE cxx_std_23)

include(Catch)
catch_discover_tests(tests)
