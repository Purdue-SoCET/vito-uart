// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VAHBUart_tapeout__Syms.h"


void VAHBUart_tapeout___024root__trace_chg_0_sub_0(VAHBUart_tapeout___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VAHBUart_tapeout___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root__trace_chg_0\n"); );
    // Init
    VAHBUart_tapeout___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAHBUart_tapeout___024root*>(voidSelf);
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VAHBUart_tapeout___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VAHBUart_tapeout___024root__trace_chg_0_sub_0(VAHBUart_tapeout___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.uart_tb__DOT__test_num),32);
        bufp->chgCData(oldp+1,(vlSelfRef.uart_tb__DOT__rate_control),2);
        bufp->chgIData(oldp+2,(((1U == (IData)(vlSelfRef.uart_tb__DOT__rate_control))
                                 ? 0xa2cU : ((2U == (IData)(vlSelfRef.uart_tb__DOT__rate_control))
                                              ? 0x516U
                                              : ((3U 
                                                  == (IData)(vlSelfRef.uart_tb__DOT__rate_control))
                                                  ? 0x1b2U
                                                  : 0x1457U)))),20);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgIData(oldp+3,(vlSelfRef.uart_tb__DOT__dummy_variable),32);
        bufp->chgBit(oldp+4,(vlSelfRef.uart_tb__DOT__nRst));
        bufp->chgBit(oldp+5,(vlSelfRef.uart_tb__DOT__rx));
        bufp->chgBit(oldp+6,(vlSelfRef.uart_tb__DOT__cts));
        bufp->chgCData(oldp+7,((((IData)(vlSelfRef.uart_tb__DOT__ren_wen) 
                                 << 2U) | (IData)(vlSelfRef.uart_tb__DOT__rate_control))),4);
        bufp->chgCData(oldp+8,(vlSelfRef.uart_tb__DOT__tx_data),8);
        bufp->chgCData(oldp+9,(vlSelfRef.uart_tb__DOT__ren_wen),2);
        bufp->chgIData(oldp+10,(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause),32);
        bufp->chgIData(oldp+11,(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [5U]))) {
        bufp->chgBit(oldp+12,((5U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__nextState))));
        bufp->chgBit(oldp+13,(vlSelfRef.uart_tb__DOT__DUT__DOT__rxDone));
        bufp->chgCData(oldp+14,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__nextState),3);
        bufp->chgBit(oldp+15,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__fall));
        bufp->chgBit(oldp+16,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeDetect));
        bufp->chgBit(oldp+17,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__badSync));
        bufp->chgBit(oldp+18,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__reSync));
        bufp->chgBit(oldp+19,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__advance));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+20,(vlSelfRef.uart_tb__DOT__tx));
        bufp->chgBit(oldp+21,((8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count))));
        bufp->chgBit(oldp+22,(vlSelfRef.uart_tb__DOT__err));
        bufp->chgCData(oldp+23,(vlSelfRef.uart_tb__DOT__rx_data),8);
        bufp->chgBit(oldp+24,((8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))));
        bufp->chgBit(oldp+25,((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count))));
        bufp->chgIData(oldp+26,(vlSelfRef.uart_tb__DOT__DUT__DOT__rate),20);
        bufp->chgCData(oldp+27,(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle),2);
        bufp->chgCData(oldp+28,(vlSelfRef.uart_tb__DOT__DUT__DOT__prev_ren_wen),2);
        bufp->chgCData(oldp+29,(vlSelfRef.uart_tb__DOT__DUT__DOT__synced_output__DOT__buffer_2),8);
        bufp->chgBit(oldp+30,((3U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))));
        bufp->chgCData(oldp+31,(vlSelfRef.uart_tb__DOT__DUT__DOT__rxData),8);
        bufp->chgCData(oldp+32,(vlSelfRef.uart_tb__DOT__DUT__DOT__txData),8);
        bufp->chgBit(oldp+33,(vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk));
        bufp->chgBit(oldp+34,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN));
        bufp->chgBit(oldp+35,(vlSelfRef.uart_tb__DOT__DUT__DOT__txClk));
        bufp->chgBit(oldp+36,((0U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState))));
        bufp->chgBit(oldp+37,(((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__txClk) 
                               & (3U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState)))));
        bufp->chgBit(oldp+38,(vlSelfRef.uart_tb__DOT__DUT__DOT__syncReset));
        bufp->chgBit(oldp+39,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN));
        bufp->chgBit(oldp+40,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN));
        bufp->chgCData(oldp+41,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_wdata),8);
        bufp->chgBit(oldp+42,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_underrun));
        bufp->chgBit(oldp+43,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_overrun));
        bufp->chgCData(oldp+44,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count),4);
        bufp->chgCData(oldp+45,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                                  >> 
                                                  (0x3fU 
                                                   & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr), 3U)))))),8);
        bufp->chgBit(oldp+46,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN));
        bufp->chgCData(oldp+47,(((1U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))
                                  ? (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__synced_output__DOT__buffer_2)
                                  : 0U)),8);
        bufp->chgBit(oldp+48,((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))));
        bufp->chgBit(oldp+49,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_underrun));
        bufp->chgBit(oldp+50,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_overrun));
        bufp->chgCData(oldp+51,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count),4);
        bufp->chgCData(oldp+52,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                                  >> 
                                                  (0x3fU 
                                                   & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr), 3U)))))),8);
        bufp->chgIData(oldp+53,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__totalWait),20);
        bufp->chgIData(oldp+54,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__postWait),20);
        bufp->chgIData(oldp+55,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__preWait),20);
        bufp->chgBit(oldp+56,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__inWait));
        bufp->chgSData(oldp+57,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxRate),16);
        bufp->chgSData(oldp+58,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__offset),16);
        bufp->chgSData(oldp+59,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxCount),16);
        bufp->chgIData(oldp+60,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__txCount),20);
        bufp->chgBit(oldp+61,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__overrun_next));
        bufp->chgBit(oldp+62,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__underrun_next));
        bufp->chgCData(oldp+63,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr),3);
        bufp->chgCData(oldp+64,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr_next),3);
        bufp->chgCData(oldp+65,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr),3);
        bufp->chgCData(oldp+66,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr_next),3);
        bufp->chgCData(oldp+67,(((3U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))
                                  ? 0U : (0xfU & ((8U 
                                                   == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count))
                                                   ? 
                                                  (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count) 
                                                    - 
                                                    ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN)
                                                      ? 1U
                                                      : 0U)) 
                                                   + 
                                                   (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN) 
                                                     & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN))
                                                     ? 1U
                                                     : 0U))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count))
                                                    ? 
                                                   (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count) 
                                                     + 
                                                     ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN)
                                                       ? 1U
                                                       : 0U)) 
                                                    - 
                                                    (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN) 
                                                      & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN))
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count) 
                                                     + 
                                                     ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN)
                                                       ? 1U
                                                       : 0U)) 
                                                    - 
                                                    ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN)
                                                      ? 1U
                                                      : 0U))))))),4);
        bufp->chgCData(oldp+68,((0xffU & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo))),8);
        bufp->chgCData(oldp+69,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                                  >> 8U)))),8);
        bufp->chgCData(oldp+70,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                                  >> 0x10U)))),8);
        bufp->chgCData(oldp+71,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                                  >> 0x18U)))),8);
        bufp->chgCData(oldp+72,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                                  >> 0x20U)))),8);
        bufp->chgCData(oldp+73,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                                  >> 0x28U)))),8);
        bufp->chgCData(oldp+74,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                                  >> 0x30U)))),8);
        bufp->chgCData(oldp+75,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                                  >> 0x38U)))),8);
        bufp->chgCData(oldp+76,((0xffU & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next))),8);
        bufp->chgCData(oldp+77,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                                                  >> 8U)))),8);
        bufp->chgCData(oldp+78,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                                                  >> 0x10U)))),8);
        bufp->chgCData(oldp+79,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                                                  >> 0x18U)))),8);
        bufp->chgCData(oldp+80,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                                                  >> 0x20U)))),8);
        bufp->chgCData(oldp+81,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                                                  >> 0x28U)))),8);
        bufp->chgCData(oldp+82,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                                                  >> 0x30U)))),8);
        bufp->chgCData(oldp+83,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                                                  >> 0x38U)))),8);
        bufp->chgBit(oldp+84,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__overrun_next));
        bufp->chgBit(oldp+85,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__underrun_next));
        bufp->chgCData(oldp+86,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr),3);
        bufp->chgCData(oldp+87,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr_next),3);
        bufp->chgCData(oldp+88,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr),3);
        bufp->chgCData(oldp+89,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr_next),3);
        bufp->chgCData(oldp+90,(((3U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))
                                  ? 0U : (0xfU & ((8U 
                                                   == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))
                                                   ? 
                                                  (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count) 
                                                    - 
                                                    ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN)
                                                      ? 1U
                                                      : 0U)) 
                                                   + 
                                                   (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN) 
                                                     & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN))
                                                     ? 1U
                                                     : 0U))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))
                                                    ? 
                                                   (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count) 
                                                     + 
                                                     ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN)
                                                       ? 1U
                                                       : 0U)) 
                                                    - 
                                                    (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN) 
                                                      & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN))
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count) 
                                                     + 
                                                     ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN)
                                                       ? 1U
                                                       : 0U)) 
                                                    - 
                                                    ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN)
                                                      ? 1U
                                                      : 0U))))))),4);
        bufp->chgCData(oldp+91,((0xffU & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo))),8);
        bufp->chgCData(oldp+92,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                                  >> 8U)))),8);
        bufp->chgCData(oldp+93,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                                  >> 0x10U)))),8);
        bufp->chgCData(oldp+94,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                                  >> 0x18U)))),8);
        bufp->chgCData(oldp+95,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                                  >> 0x20U)))),8);
        bufp->chgCData(oldp+96,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                                  >> 0x28U)))),8);
        bufp->chgCData(oldp+97,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                                  >> 0x30U)))),8);
        bufp->chgCData(oldp+98,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                                  >> 0x38U)))),8);
        bufp->chgCData(oldp+99,((0xffU & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next))),8);
        bufp->chgCData(oldp+100,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                                                   >> 8U)))),8);
        bufp->chgCData(oldp+101,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                                                   >> 0x10U)))),8);
        bufp->chgCData(oldp+102,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                                                   >> 0x18U)))),8);
        bufp->chgCData(oldp+103,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                                                   >> 0x20U)))),8);
        bufp->chgCData(oldp+104,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                                                   >> 0x28U)))),8);
        bufp->chgCData(oldp+105,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                                                   >> 0x30U)))),8);
        bufp->chgCData(oldp+106,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                                                   >> 0x38U)))),8);
        bufp->chgCData(oldp+107,(vlSelfRef.uart_tb__DOT__DUT__DOT__synced_output__DOT__buffer_1),8);
        bufp->chgCData(oldp+108,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__curState),3);
        bufp->chgBit(oldp+109,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__cmp));
        bufp->chgCData(oldp+110,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount),4);
        bufp->chgCData(oldp+111,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount),4);
        bufp->chgBit(oldp+112,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp));
        bufp->chgCData(oldp+113,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readBuf),8);
        bufp->chgCData(oldp+114,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__curState),2);
        bufp->chgCData(oldp+115,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState),2);
        bufp->chgBit(oldp+116,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData));
        bufp->chgBit(oldp+117,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart));
        bufp->chgCData(oldp+118,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf),8);
        bufp->chgCData(oldp+119,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount),4);
    }
    bufp->chgBit(oldp+120,(vlSelfRef.uart_tb__DOT__clk));
    bufp->chgBit(oldp+121,(((IData)(vlSelfRef.uart_tb__DOT__rx) 
                            & (~ (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__cmp)))));
    bufp->chgBit(oldp+122,((((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk) 
                             & (~ (IData)(vlSelfRef.uart_tb__DOT__rx))) 
                            & (8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount)))));
    bufp->chgBit(oldp+123,((((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk) 
                             & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__fall)) 
                            & (8U > (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount)))));
}

void VAHBUart_tapeout___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root__trace_cleanup\n"); );
    // Init
    VAHBUart_tapeout___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAHBUart_tapeout___024root*>(voidSelf);
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
