// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAHBUart_tapeout.h for the primary calling header

#include "VAHBUart_tapeout__pch.h"
#include "VAHBUart_tapeout__Syms.h"
#include "VAHBUart_tapeout___024root.h"

void VAHBUart_tapeout___024root___ctor_var_reset(VAHBUart_tapeout___024root* vlSelf);

VAHBUart_tapeout___024root::VAHBUart_tapeout___024root(VAHBUart_tapeout__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VAHBUart_tapeout___024root___ctor_var_reset(this);
}

void VAHBUart_tapeout___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VAHBUart_tapeout___024root::~VAHBUart_tapeout___024root() {
}
