// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAHBUart_tapeout.h for the primary calling header

#include "VAHBUart_tapeout__pch.h"
#include "VAHBUart_tapeout___024root.h"

VlCoroutine VAHBUart_tapeout___024root___eval_initial__TOP__Vtiming__0(VAHBUart_tapeout___024root* vlSelf);
VlCoroutine VAHBUart_tapeout___024root___eval_initial__TOP__Vtiming__1(VAHBUart_tapeout___024root* vlSelf);

void VAHBUart_tapeout___024root___eval_initial(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VAHBUart_tapeout___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VAHBUart_tapeout___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0 
        = vlSelfRef.uart_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__nRst__0 
        = vlSelfRef.uart_tb__DOT__nRst;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__tx__0 
        = vlSelfRef.uart_tb__DOT__tx;
}

VL_INLINE_OPT VlCoroutine VAHBUart_tapeout___024root___eval_initial__TOP__Vtiming__1(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "AHBUart_tapeout_tb.sv", 
                                             50);
        vlSelfRef.uart_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.uart_tb__DOT__clk)));
    }
}

void VAHBUart_tapeout___024root___act_comb__TOP__0(VAHBUart_tapeout___024root* vlSelf);

void VAHBUart_tapeout___024root___eval_act(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xeULL & vlSelfRef.__VactTriggered.word(0U))) {
        VAHBUart_tapeout___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 4096> VAHBUart_tapeout__ConstPool__TABLE_hda2679cc_0;

VL_INLINE_OPT void VAHBUart_tapeout___024root___act_comb__TOP__0(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_wdata 
        = ((1U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))
            ? (IData)(vlSelfRef.uart_tb__DOT__tx_data)
            : 0U);
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__fall 
        = ((~ (IData)(vlSelfRef.uart_tb__DOT__rx)) 
           & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__cmp));
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo;
    if ((3U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))) {
        if ((((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN) 
              & (8U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))) 
             & (~ ((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count)) 
                   & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN))))) {
            vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                = (((~ (0xffULL << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr), 3U)))) 
                    & vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next) 
                   | ((QData)((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_wdata)) 
                      << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr), 3U))));
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

void VAHBUart_tapeout___024root___nba_sequent__TOP__0(VAHBUart_tapeout___024root* vlSelf);
void VAHBUart_tapeout___024root___nba_comb__TOP__0(VAHBUart_tapeout___024root* vlSelf);

void VAHBUart_tapeout___024root___eval_nba(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VAHBUart_tapeout___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VAHBUart_tapeout___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> VAHBUart_tapeout__ConstPool__TABLE_h5f91972e_0;

VL_INLINE_OPT void VAHBUart_tapeout___024root___nba_sequent__TOP__0(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*15:0*/ __Vdly__uart_tb__DOT__DUT__DOT__bg__DOT__rxCount;
    __Vdly__uart_tb__DOT__DUT__DOT__bg__DOT__rxCount = 0;
    CData/*2:0*/ __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__curState;
    __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__curState = 0;
    CData/*0:0*/ __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp;
    __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp = 0;
    CData/*3:0*/ __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount;
    __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount = 0;
    CData/*3:0*/ __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount;
    __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount = 0;
    CData/*0:0*/ __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart;
    __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart = 0;
    CData/*0:0*/ __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData;
    __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData = 0;
    CData/*3:0*/ __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount;
    __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount = 0;
    CData/*7:0*/ __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf;
    __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf = 0;
    // Body
    __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf;
    __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData;
    __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount;
    __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart;
    __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount;
    __Vdly__uart_tb__DOT__DUT__DOT__bg__DOT__rxCount 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxCount;
    __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__curState 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__curState;
    __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp;
    __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount;
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN = 
        ((IData)(vlSelfRef.uart_tb__DOT__nRst) && (
                                                   ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxDone) 
                                                    & (5U 
                                                       != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__nextState))) 
                                                   && (1U 
                                                       & (~ (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_overrun)))));
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN = 
        ((IData)(vlSelfRef.uart_tb__DOT__nRst) && (
                                                   (1U 
                                                    & (~ 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count)) 
                                                        | (~ (IData)(vlSelfRef.uart_tb__DOT__cts))))) 
                                                   && ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__txClk) 
                                                       && (0U 
                                                           == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState)))));
    if (vlSelfRef.uart_tb__DOT__nRst) {
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_wdata 
            = (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxDone) 
                & (5U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__nextState)))
                ? ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_overrun)
                    ? 0U : (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxData))
                : 0U);
        vlSelfRef.uart_tb__DOT__DUT__DOT__txData = 
            ((1U & ((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count)) 
                    | (~ (IData)(vlSelfRef.uart_tb__DOT__cts))))
              ? 0U : ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__txClk)
                       ? ((0U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState))
                           ? 0U : (0xffU & (IData)(
                                                   (vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                                    >> 
                                                    (0x3fU 
                                                     & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr), 3U))))))
                       : 0U));
        if (((3U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState)) 
             | (0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState)))) {
            if (vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN) {
                __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf 
                    = vlSelfRef.uart_tb__DOT__DUT__DOT__txData;
                __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount = 8U;
                __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart 
                    = ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__txClk)
                        ? 1U : (1U & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart)));
                __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData = 1U;
            } else if (vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData) {
                __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart 
                    = ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__txClk)
                        ? 1U : (1U & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart)));
            }
        }
        if ((2U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState))) {
            if (vlSelfRef.uart_tb__DOT__DUT__DOT__txClk) {
                __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf 
                    = (0x7fU & ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf) 
                                >> 1U));
                __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount 
                    = (0xfU & ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount) 
                               - (IData)(1U)));
            } else {
                __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf 
                    = vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf;
                __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount 
                    = (0xfU & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount));
            }
        }
        vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__curState 
            = ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__txClk)
                ? (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState)
                : (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__curState));
        if ((1U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState))) {
            if (vlSelfRef.uart_tb__DOT__DUT__DOT__txClk) {
                __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData = 0U;
                __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart = 0U;
            } else {
                __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData 
                    = (1U & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData));
                __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart 
                    = (1U & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart));
            }
        }
        if ((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount))) {
            vlSelfRef.uart_tb__DOT__DUT__DOT__rxData 
                = ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk)
                    ? (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readBuf)
                    : (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxData));
        }
        if (((2U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__nextState)) 
             & (3U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__nextState)))) {
            __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount 
                = ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk)
                    ? 8U : (0xfU & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount)));
        } else if ((8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount))) {
            if (vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk) {
                __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount 
                    = (0xfU & ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount) 
                               - (IData)(1U)));
                vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readBuf 
                    = (((IData)(vlSelfRef.uart_tb__DOT__rx) 
                        << 7U) | (0x7fU & ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readBuf) 
                                           >> 1U)));
            } else {
                __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount 
                    = (0xfU & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount));
                vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readBuf 
                    = vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readBuf;
            }
        }
        if ((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxCount))) {
            __Vdly__uart_tb__DOT__DUT__DOT__bg__DOT__rxCount 
                = (0xffffU & ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxRate) 
                              - (IData)(1U)));
        } else if ((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__inWait)))) {
            __Vdly__uart_tb__DOT__DUT__DOT__bg__DOT__rxCount 
                = (0xffffU & ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxCount) 
                              - (IData)(1U)));
        }
        if (vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk) {
            __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__curState 
                = vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__nextState;
            vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__cmp 
                = vlSelfRef.uart_tb__DOT__rx;
        } else {
            __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__curState 
                = vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__curState;
        }
        if (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__curState) 
             != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__nextState))) {
            if (vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk) {
                __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp 
                    = vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeDetect;
                __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount = 0xfU;
            } else {
                __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp 
                    = vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp;
                __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount 
                    = vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount;
            }
        } else {
            __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp 
                = (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk) 
                    & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeDetect))
                    ? (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeDetect)
                    : (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp));
            __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount 
                = (0xfU & ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk)
                            ? ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount) 
                               - (IData)(1U)) : (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount)));
        }
        vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__txCount 
            = (0xfffffU & ((0U == vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__txCount)
                            ? (vlSelfRef.uart_tb__DOT__DUT__DOT__rate 
                               - (IData)(1U)) : (vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__txCount 
                                                 - (IData)(1U))));
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr 
            = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr_next;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
            = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr 
            = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr_next;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr 
            = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr_next;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count 
            = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__count_next;
        vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle 
            = (((0U != (IData)(vlSelfRef.uart_tb__DOT__ren_wen)) 
                & (0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__prev_ren_wen)))
                ? (IData)(vlSelfRef.uart_tb__DOT__ren_wen)
                : 0U);
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr 
            = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr_next;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
            = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count 
            = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__count_next;
        vlSelfRef.uart_tb__DOT__DUT__DOT__rate = ((1U 
                                                   == (IData)(vlSelfRef.uart_tb__DOT__rate_control))
                                                   ? 0xa2cU
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.uart_tb__DOT__rate_control))
                                                    ? 0x516U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.uart_tb__DOT__rate_control))
                                                     ? 0x1b2U
                                                     : 0x1457U)));
        vlSelfRef.uart_tb__DOT__DUT__DOT__prev_ren_wen 
            = vlSelfRef.uart_tb__DOT__ren_wen;
    } else {
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_wdata = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__txData = 0U;
        __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__curState = 0U;
        __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount = 8U;
        __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart = 0U;
        __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readBuf = 0U;
        __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount = 8U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__rxData = 0U;
        __Vdly__uart_tb__DOT__DUT__DOT__bg__DOT__rxCount = 0U;
        __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount = 0xfU;
        __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp = 0U;
        __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__curState = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__txCount = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo = 0ULL;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__cmp = 1U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo = 0ULL;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__rate = 0x1457U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__prev_ren_wen = 0U;
    }
    vlSelfRef.uart_tb__DOT__err = ((IData)(vlSelfRef.uart_tb__DOT__nRst) 
                                   && ((5U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__nextState)) 
                                       | (IData)(vlSelfRef.uart_tb__DOT__err)));
    vlSelfRef.uart_tb__DOT__DUT__DOT__syncReset = (1U 
                                                   & (~ (IData)(vlSelfRef.uart_tb__DOT__nRst)));
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_underrun 
        = ((IData)(vlSelfRef.uart_tb__DOT__nRst) && (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__underrun_next));
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_overrun 
        = ((IData)(vlSelfRef.uart_tb__DOT__nRst) && (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__overrun_next));
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_underrun 
        = ((IData)(vlSelfRef.uart_tb__DOT__nRst) && (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__underrun_next));
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf 
        = __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf;
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount 
        = __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount;
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData 
        = __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData;
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart 
        = __Vdly__uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart;
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount 
        = __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount;
    vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxCount 
        = __Vdly__uart_tb__DOT__DUT__DOT__bg__DOT__rxCount;
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__curState 
        = __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__curState;
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp 
        = __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp;
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount 
        = __Vdly__uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount;
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_overrun 
        = ((IData)(vlSelfRef.uart_tb__DOT__nRst) && (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__overrun_next));
    __Vtableidx2 = (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount) 
                     << 3U) | (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart) 
                                << 2U) | (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__curState)));
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState 
        = VAHBUart_tapeout__ConstPool__TABLE_h5f91972e_0
        [__Vtableidx2];
    if ((2U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))) {
        vlSelfRef.uart_tb__DOT__rx_data = (0xffU & (IData)(
                                                           (vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr), 3U)))));
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN = 1U;
    } else {
        vlSelfRef.uart_tb__DOT__rx_data = 0U;
        vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN = 0U;
    }
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN = 
        (1U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle));
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
    }
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
    vlSelfRef.uart_tb__DOT__DUT__DOT__txClk = ((1U 
                                                < vlSelfRef.uart_tb__DOT__DUT__DOT__rate) 
                                               && (0U 
                                                   == vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__txCount));
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
}

VL_INLINE_OPT void VAHBUart_tapeout___024root___nba_comb__TOP__0(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__fall 
        = ((~ (IData)(vlSelfRef.uart_tb__DOT__rx)) 
           & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__cmp));
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_wdata 
        = ((1U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))
            ? (IData)(vlSelfRef.uart_tb__DOT__tx_data)
            : 0U);
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
    vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
        = vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo;
    if ((3U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))) {
        if ((((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN) 
              & (8U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))) 
             & (~ ((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count)) 
                   & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN))))) {
            vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                = (((~ (0xffULL << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr), 3U)))) 
                    & vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next) 
                   | ((QData)((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_wdata)) 
                      << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr), 3U))));
        }
    }
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

void VAHBUart_tapeout___024root___timing_resume(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hbd4f0004__0.resume(
                                                   "@(negedge uart_tb.tx)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h24b22ba6__0.resume(
                                                   "@(posedge uart_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VAHBUart_tapeout___024root___timing_commit(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hbd4f0004__0.commit(
                                                   "@(negedge uart_tb.tx)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h24b22ba6__0.commit(
                                                   "@(posedge uart_tb.clk)");
    }
}

void VAHBUart_tapeout___024root___eval_triggers__act(VAHBUart_tapeout___024root* vlSelf);

bool VAHBUart_tapeout___024root___eval_phase__act(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VAHBUart_tapeout___024root___eval_triggers__act(vlSelf);
    VAHBUart_tapeout___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VAHBUart_tapeout___024root___timing_resume(vlSelf);
        VAHBUart_tapeout___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VAHBUart_tapeout___024root___eval_phase__nba(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VAHBUart_tapeout___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAHBUart_tapeout___024root___dump_triggers__nba(VAHBUart_tapeout___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VAHBUart_tapeout___024root___dump_triggers__act(VAHBUart_tapeout___024root* vlSelf);
#endif  // VL_DEBUG

void VAHBUart_tapeout___024root___eval(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VAHBUart_tapeout___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("AHBUart_tapeout_tb.sv", 36, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VAHBUart_tapeout___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("AHBUart_tapeout_tb.sv", 36, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VAHBUart_tapeout___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VAHBUart_tapeout___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VAHBUart_tapeout___024root___eval_debug_assertions(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
