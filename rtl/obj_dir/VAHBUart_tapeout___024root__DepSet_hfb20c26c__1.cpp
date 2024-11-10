// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAHBUart_tapeout.h for the primary calling header

#include "VAHBUart_tapeout__pch.h"
#include "VAHBUart_tapeout__Syms.h"
#include "VAHBUart_tapeout___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VAHBUart_tapeout___024root___dump_triggers__act(VAHBUart_tapeout___024root* vlSelf);
#endif  // VL_DEBUG

void VAHBUart_tapeout___024root___eval_triggers__act(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (((IData)(vlSelfRef.uart_tb__DOT__clk) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0))) 
                                       | ((~ (IData)(vlSelfRef.uart_tb__DOT__nRst)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__nRst__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.uart_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.uart_tb__DOT__tx)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__tx__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0 
        = vlSelfRef.uart_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__nRst__0 
        = vlSelfRef.uart_tb__DOT__nRst;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__tx__0 
        = vlSelfRef.uart_tb__DOT__tx;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VAHBUart_tapeout___024root___dump_triggers__act(vlSelf);
    }
#endif
}
