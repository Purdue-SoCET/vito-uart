// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAHBUart_tapeout.h for the primary calling header

#include "VAHBUart_tapeout__pch.h"
#include "VAHBUart_tapeout___024root.h"

VL_ATTR_COLD void VAHBUart_tapeout___024root___eval_static__TOP(VAHBUart_tapeout___024root* vlSelf);

VL_ATTR_COLD void VAHBUart_tapeout___024root___eval_static(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VAHBUart_tapeout___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VAHBUart_tapeout___024root___eval_static__TOP(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause = 0xcb66U;
}

VL_ATTR_COLD void VAHBUart_tapeout___024root___eval_final(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAHBUart_tapeout___024root___dump_triggers__stl(VAHBUart_tapeout___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VAHBUart_tapeout___024root___eval_phase__stl(VAHBUart_tapeout___024root* vlSelf);

VL_ATTR_COLD void VAHBUart_tapeout___024root___eval_settle(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VAHBUart_tapeout___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("AHBUart_tapeout_tb.sv", 36, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VAHBUart_tapeout___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAHBUart_tapeout___024root___dump_triggers__stl(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VAHBUart_tapeout___024root___stl_sequent__TOP__0(VAHBUart_tapeout___024root* vlSelf);

VL_ATTR_COLD void VAHBUart_tapeout___024root___eval_stl(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VAHBUart_tapeout___024root___stl_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> VAHBUart_tapeout__ConstPool__TABLE_h5f91972e_0;
extern const VlUnpacked<CData/*2:0*/, 4096> VAHBUart_tapeout__ConstPool__TABLE_hda2679cc_0;

VL_ATTR_COLD void VAHBUart_tapeout___024root___stl_sequent__TOP__0(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.uart_tb__DOT__DUT__DOT__txClk = ((1U 
                                                < vlSelfRef.uart_tb__DOT__DUT__DOT__rate) 
                                               && (0U 
                                                   == vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__txCount));
    vlSelfRef.uart_tb__DOT__rx_data = ((2U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))
                                        ? (0xffU & (IData)(
                                                           (vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr), 3U)))))
                                        : 0U);
    __Vtableidx2 = (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount) 
                     << 3U) | (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart) 
                                << 2U) | (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__curState)));
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState 
        = VAHBUart_tapeout__ConstPool__TABLE_h5f91972e_0
        [__Vtableidx2];
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN = 
        (2U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle));
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN = 
        (1U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle));
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__fall 
        = ((~ (IData)(vlSelfRef.uart_tb__DOT__rx)) 
           & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__cmp));
    vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxRate 
        = (0xffffU & (vlSelfRef.uart_tb__DOT__DUT__DOT__rate 
                      >> 4U));
    vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__offset 
        = (0xffffU & ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxRate) 
                      - ((IData)(1U) + ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxRate) 
                                        >> 1U))));
    vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__totalWait 
        = (0xfffffU & (vlSelfRef.uart_tb__DOT__DUT__DOT__rate 
                       - ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxRate) 
                          << 4U)));
    vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__preWait 
        = (0xfffffU & (vlSelfRef.uart_tb__DOT__DUT__DOT__rate 
                       - VL_SHIFTR_III(20,20,32, vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__totalWait, 1U)));
    vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__postWait 
        = (0xfffffU & (((vlSelfRef.uart_tb__DOT__DUT__DOT__rate 
                         - vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__preWait) 
                        + (1U & vlSelfRef.uart_tb__DOT__DUT__DOT__rate)) 
                       + (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__offset)));
    vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__inWait 
        = ((vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__txCount 
            > vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__preWait) 
           | (vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__txCount 
              < vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__postWait));
    vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk = ((1U 
                                                < (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxRate)) 
                                               && ((~ (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__inWait)) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxCount))));
    vlSelfRef.uart_tb__DOT__tx = (1U & ((2U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState))
                                         ? (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf)
                                         : (1U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState))));
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr_next 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr;
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr_next 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr;
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__overrun_next 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_overrun;
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__underrun_next 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_underrun;
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo;
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr_next 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr;
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr_next 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr;
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__overrun_next 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_overrun;
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__underrun_next 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_underrun;
    if ((3U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))) {
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__count_next = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr_next = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr_next = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__overrun_next = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__underrun_next = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__count_next = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr_next = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr_next = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__overrun_next = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__underrun_next = 0U;
    } else {
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__count_next 
            = (0xfU & ((8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count))
                        ? (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count) 
                            - ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN)
                                ? 1U : 0U)) + (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN) 
                                                & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN))
                                                ? 1U
                                                : 0U))
                        : ((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count))
                            ? (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count) 
                                + ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN)
                                    ? 1U : 0U)) - (
                                                   ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN) 
                                                    & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN))
                                                    ? 1U
                                                    : 0U))
                            : (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count) 
                                + ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN)
                                    ? 1U : 0U)) - ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN)
                                                    ? 1U
                                                    : 0U)))));
        if ((((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN) 
              & (8U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count))) 
             & (~ ((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count)) 
                   & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN))))) {
            vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr)));
        }
        if ((((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN) 
              & (0U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count))) 
             & (~ ((8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count)) 
                   & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN))))) {
            vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr)));
        }
        if ((1U & (~ (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN) 
                       & (8U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count))) 
                      & (~ ((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count)) 
                            & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN))))))) {
            if (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN) 
                 & (8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count)))) {
                vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__overrun_next = 1U;
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN) 
                       & (0U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count))) 
                      & (~ ((8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count)) 
                            & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN))))))) {
            if (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN) 
                 & (0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count)))) {
                vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__underrun_next = 1U;
            }
        }
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__count_next 
            = (0xfU & ((8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))
                        ? (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count) 
                            - ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN)
                                ? 1U : 0U)) + (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN) 
                                                & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN))
                                                ? 1U
                                                : 0U))
                        : ((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))
                            ? (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count) 
                                + ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN)
                                    ? 1U : 0U)) - (
                                                   ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN) 
                                                    & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN))
                                                    ? 1U
                                                    : 0U))
                            : (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count) 
                                + ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN)
                                    ? 1U : 0U)) - ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN)
                                                    ? 1U
                                                    : 0U)))));
        if ((((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN) 
              & (8U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))) 
             & (~ ((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count)) 
                   & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN))))) {
            vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr)));
        }
        if ((((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN) 
              & (0U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))) 
             & (~ ((8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count)) 
                   & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN))))) {
            vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr)));
        }
        if ((1U & (~ (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN) 
                       & (8U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))) 
                      & (~ ((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count)) 
                            & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN))))))) {
            if (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN) 
                 & (8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count)))) {
                vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__overrun_next = 1U;
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN) 
                       & (0U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))) 
                      & (~ ((8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count)) 
                            & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN))))))) {
            if (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN) 
                 & (0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count)))) {
                vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__underrun_next = 1U;
            }
        }
    }
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo;
    if ((3U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))) {
        if ((((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN) 
              & (8U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count))) 
             & (~ ((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count)) 
                   & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN))))) {
            vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                = (((~ (0xffULL << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr), 3U)))) 
                    & vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next) 
                   | ((QData)((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_wdata)) 
                      << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr), 3U))));
        }
        if ((((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN) 
              & (8U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))) 
             & (~ ((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count)) 
                   & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN))))) {
            vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                = (((~ (0xffULL << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr), 3U)))) 
                    & vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next) 
                   | ((QData)((IData)(((1U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))
                                        ? (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__synced_tx_data__DOT__buffer_2)
                                        : 0U))) << 
                      (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr), 3U))));
        }
    }
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeDetect 
        = ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk)
            ? (1U & ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__fall) 
                     | ((IData)(vlSelfRef.uart_tb__DOT__rx) 
                        & (~ (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__cmp)))))
            : 0U);
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__badSync 
        = (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeDetect) 
            & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp)) 
           & (8U <= (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount)));
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__reSync 
        = ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeDetect) 
           & (8U > (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount)));
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__advance 
        = ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__reSync) 
           | ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk) 
              & (0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount))));
    vlSelfRef.uart_tb__DOT__DUT__DOT__rxDone = ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__advance) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount)));
    __Vtableidx1 = (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__fall) 
                     << 0xbU) | (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount) 
                                  << 7U) | (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__advance) 
                                             << 6U) 
                                            | (((((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk) 
                                                  & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__fall)) 
                                                 & (8U 
                                                    > (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount))) 
                                                << 5U) 
                                               | (((((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk) 
                                                     & (~ (IData)(vlSelfRef.uart_tb__DOT__rx))) 
                                                    & (8U 
                                                       == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount))) 
                                                   << 4U) 
                                                  | (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__badSync) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__curState)))))));
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__nextState 
        = VAHBUart_tapeout__ConstPool__TABLE_hda2679cc_0
        [__Vtableidx1];
}

VL_ATTR_COLD void VAHBUart_tapeout___024root___eval_triggers__stl(VAHBUart_tapeout___024root* vlSelf);

VL_ATTR_COLD bool VAHBUart_tapeout___024root___eval_phase__stl(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VAHBUart_tapeout___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VAHBUart_tapeout___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAHBUart_tapeout___024root___dump_triggers__act(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge uart_tb.clk or negedge uart_tb.nRst)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge uart_tb.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge uart_tb.tx)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VAHBUart_tapeout___024root___dump_triggers__nba(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge uart_tb.clk or negedge uart_tb.nRst)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge uart_tb.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge uart_tb.tx)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VAHBUart_tapeout___024root___ctor_var_reset(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->uart_tb__DOT__test_num = VL_RAND_RESET_I(32);
    vlSelf->uart_tb__DOT__dummy_variable = VL_RAND_RESET_I(32);
    vlSelf->uart_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__nRst = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__rx = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__tx = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__cts = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__err = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__tx_data = VL_RAND_RESET_I(8);
    vlSelf->uart_tb__DOT__rx_data = VL_RAND_RESET_I(8);
    vlSelf->uart_tb__DOT__rate_control = VL_RAND_RESET_I(2);
    vlSelf->uart_tb__DOT__ren_wen = VL_RAND_RESET_I(2);
    vlSelf->uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause = VL_RAND_RESET_I(32);
    vlSelf->uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause = VL_RAND_RESET_I(32);
    vlSelf->uart_tb__DOT__DUT__DOT__rate = VL_RAND_RESET_I(20);
    vlSelf->uart_tb__DOT__DUT__DOT__ren_wen_nidle = VL_RAND_RESET_I(2);
    vlSelf->uart_tb__DOT__DUT__DOT__prev_ren_wen = VL_RAND_RESET_I(2);
    vlSelf->uart_tb__DOT__DUT__DOT__rxData = VL_RAND_RESET_I(8);
    vlSelf->uart_tb__DOT__DUT__DOT__txData = VL_RAND_RESET_I(8);
    vlSelf->uart_tb__DOT__DUT__DOT__rxClk = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__rxDone = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__txClk = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__syncReset = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx_WEN = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx_REN = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx_wdata = VL_RAND_RESET_I(8);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx_underrun = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx_overrun = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx_count = VL_RAND_RESET_I(4);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoTx_WEN = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoTx_REN = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoTx_underrun = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoTx_overrun = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoTx_count = VL_RAND_RESET_I(4);
    vlSelf->uart_tb__DOT__DUT__DOT__sync_control_data__DOT__buffer_1 = VL_RAND_RESET_I(4);
    vlSelf->uart_tb__DOT__DUT__DOT__sync_control_data__DOT__buffer_2 = VL_RAND_RESET_I(4);
    vlSelf->uart_tb__DOT__DUT__DOT__synced_tx_data__DOT__buffer_1 = VL_RAND_RESET_I(8);
    vlSelf->uart_tb__DOT__DUT__DOT__synced_tx_data__DOT__buffer_2 = VL_RAND_RESET_I(8);
    vlSelf->uart_tb__DOT__DUT__DOT__bg__DOT__totalWait = VL_RAND_RESET_I(20);
    vlSelf->uart_tb__DOT__DUT__DOT__bg__DOT__postWait = VL_RAND_RESET_I(20);
    vlSelf->uart_tb__DOT__DUT__DOT__bg__DOT__preWait = VL_RAND_RESET_I(20);
    vlSelf->uart_tb__DOT__DUT__DOT__bg__DOT__inWait = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__bg__DOT__rxRate = VL_RAND_RESET_I(16);
    vlSelf->uart_tb__DOT__DUT__DOT__bg__DOT__offset = VL_RAND_RESET_I(16);
    vlSelf->uart_tb__DOT__DUT__DOT__bg__DOT__rxCount = VL_RAND_RESET_I(16);
    vlSelf->uart_tb__DOT__DUT__DOT__bg__DOT__txCount = VL_RAND_RESET_I(20);
    vlSelf->uart_tb__DOT__DUT__DOT__uartRx__DOT__curState = VL_RAND_RESET_I(3);
    vlSelf->uart_tb__DOT__DUT__DOT__uartRx__DOT__nextState = VL_RAND_RESET_I(3);
    vlSelf->uart_tb__DOT__DUT__DOT__uartRx__DOT__fall = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__uartRx__DOT__cmp = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeDetect = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__uartRx__DOT__badSync = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__uartRx__DOT__reSync = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__uartRx__DOT__advance = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount = VL_RAND_RESET_I(4);
    vlSelf->uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount = VL_RAND_RESET_I(4);
    vlSelf->uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__uartRx__DOT__readBuf = VL_RAND_RESET_I(8);
    vlSelf->uart_tb__DOT__DUT__DOT__uartTx__DOT__curState = VL_RAND_RESET_I(2);
    vlSelf->uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState = VL_RAND_RESET_I(2);
    vlSelf->uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf = VL_RAND_RESET_I(8);
    vlSelf->uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount = VL_RAND_RESET_I(4);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx__DOT__overrun_next = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx__DOT__underrun_next = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr = VL_RAND_RESET_I(3);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr_next = VL_RAND_RESET_I(3);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr = VL_RAND_RESET_I(3);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr_next = VL_RAND_RESET_I(3);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx__DOT__count_next = VL_RAND_RESET_I(4);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo = VL_RAND_RESET_Q(64);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next = VL_RAND_RESET_Q(64);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoTx__DOT__overrun_next = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoTx__DOT__underrun_next = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr = VL_RAND_RESET_I(3);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr_next = VL_RAND_RESET_I(3);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr = VL_RAND_RESET_I(3);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr_next = VL_RAND_RESET_I(3);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoTx__DOT__count_next = VL_RAND_RESET_I(4);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo = VL_RAND_RESET_Q(64);
    vlSelf->uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__uart_tb__DOT__DUT__DOT__sync_control_data__DOT__buffer_2 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__nRst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__tx__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
