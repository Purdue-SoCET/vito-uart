// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAHBUart_tapeout.h for the primary calling header

#ifndef VERILATED_VAHBUART_TAPEOUT___024UNIT_H_
#define VERILATED_VAHBUART_TAPEOUT___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VAHBUart_tapeout__Syms;

class alignas(VL_CACHE_LINE_BYTES) VAHBUart_tapeout___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VAHBUart_tapeout__Syms* const vlSymsp;

    // CONSTRUCTORS
    VAHBUart_tapeout___024unit(VAHBUart_tapeout__Syms* symsp, const char* v__name);
    ~VAHBUart_tapeout___024unit();
    VL_UNCOPYABLE(VAHBUart_tapeout___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
