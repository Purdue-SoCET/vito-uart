// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAHBUart_tapeout.h for the primary calling header

#include "VAHBUart_tapeout__pch.h"
#include "VAHBUart_tapeout__Syms.h"
#include "VAHBUart_tapeout___024root.h"

VL_INLINE_OPT VlCoroutine VAHBUart_tapeout___024root___eval_initial__TOP__Vtiming__0(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__2__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__2__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__3__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__3__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__4__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__4__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__5__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__5__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__6__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__6__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__7__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__7__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__8__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__8__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__9__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__9__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__10__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__10__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__10__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__10__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__11__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__11__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__11__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__11__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__12__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__12__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__12__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__12__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__13__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__13__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__13__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__13__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__14__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__14__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__14__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__14__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__15__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__15__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__15__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__15__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__16__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__16__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__16__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__16__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__17__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__17__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__17__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__17__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__18__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__18__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__18__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__18__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__19__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__19__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__19__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__19__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__20__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__20__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__20__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__20__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__21__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__21__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__21__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__21__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__22__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__22__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__22__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__22__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__23__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__23__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__23__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__23__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__24__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__24__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__24__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__24__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__25__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__25__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__25__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__25__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__26__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__26__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__27__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__27__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__28__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__28__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__29__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__29__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__30__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__30__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__31__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__31__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__32__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__32__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__33__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__33__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__35__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__35__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__35__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__35__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__36__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__36__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__36__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__36__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__37__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__37__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__37__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__37__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__38__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__38__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__38__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__38__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__39__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__39__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__39__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__39__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__40__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__40__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__41__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__41__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__42__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__42__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__43__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__43__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__44__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__44__data_to_write = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x745f7776U;
    __Vtemp_1[2U] = 0x756172U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.uart_tb__DOT__clk = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    vlSelfRef.uart_tb__DOT__cts = 0U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__rate_control = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    vlSelfRef.uart_tb__DOT__nRst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__test_num = 0U;
    vlSelfRef.uart_tb__DOT__nRst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         216);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         219);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test #1 done, checked reset\n",0);
    vlSelfRef.uart_tb__DOT__test_num = ((IData)(1U) 
                                        + vlSelfRef.uart_tb__DOT__test_num);
    vlSelfRef.uart_tb__DOT__rx = 1U;
    vlSelfRef.uart_tb__DOT__cts = 0U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__rate_control = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    vlSelfRef.uart_tb__DOT__nRst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         226);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__2__data_to_write = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__2__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__3__data_to_write = 2U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__3__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         230);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__4__data_to_write = 3U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__4__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__5__data_to_write = 4U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__5__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         234);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__6__data_to_write = 5U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__6__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         236);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__7__data_to_write = 6U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__7__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         238);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__8__data_to_write = 7U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__8__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         240);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Testing for all ones\n",0);
    __Vtask_uart_tb__DOT__tx_buffer_write__9__data_to_write = 0xffU;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__9__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         243);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test 1, writing to tx fifo buffer, complete!\n",0);
    vlSelfRef.uart_tb__DOT__test_num = ((IData)(1U) 
                                        + vlSelfRef.uart_tb__DOT__test_num);
    vlSelfRef.uart_tb__DOT__cts = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__10__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__tx_external_read__10__expected_data = 1U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__10__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__10__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__10__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__10__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__10__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__10__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__10__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__10__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__10__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__10__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__10__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__10__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__10__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__10__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__10__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__11__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__tx_external_read__11__expected_data = 2U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__11__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__11__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__11__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__11__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__11__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__11__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__11__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__11__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__11__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__11__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__11__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__11__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__11__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__11__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__11__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__12__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__tx_external_read__12__expected_data = 3U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__12__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__12__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__12__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__12__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__12__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__12__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__12__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__12__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__12__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__12__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__12__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__12__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__12__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__12__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__12__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__13__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__tx_external_read__13__expected_data = 4U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__13__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__13__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__13__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__13__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__13__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__13__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__13__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__13__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__13__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__13__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__13__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__13__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__13__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__13__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__13__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__14__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__tx_external_read__14__expected_data = 5U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__14__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__14__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__14__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__14__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__14__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__14__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__14__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__14__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__14__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__14__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__14__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__14__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__14__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__14__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__14__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__15__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__tx_external_read__15__expected_data = 6U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__15__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__15__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__15__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__15__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__15__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__15__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__15__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__15__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__15__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__15__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__15__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__15__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__15__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__15__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__15__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__16__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__tx_external_read__16__expected_data = 7U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__16__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__16__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__16__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__16__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__16__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__16__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__16__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__16__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__16__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__16__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__16__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__16__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__16__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__16__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__16__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__17__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__tx_external_read__17__expected_data = 0xffU;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__17__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__17__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__17__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__17__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__17__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__17__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__17__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__17__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__17__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__17__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__17__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__17__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__17__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__17__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__17__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         259);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test 2, reading from the tx uart, completed!\n",0);
    vlSelfRef.uart_tb__DOT__test_num = ((IData)(1U) 
                                        + vlSelfRef.uart_tb__DOT__test_num);
    __Vtask_uart_tb__DOT__rx_external_write__18__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__rx_external_write__18__data_to_send = 1U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__18__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__18__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__18__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__19__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__rx_external_write__19__data_to_send = 2U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__19__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__19__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__19__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__20__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__rx_external_write__20__data_to_send = 3U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__20__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__20__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__20__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__21__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__rx_external_write__21__data_to_send = 4U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__21__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__21__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__21__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__22__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__rx_external_write__22__data_to_send = 5U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__22__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__22__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__22__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__23__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__rx_external_write__23__data_to_send = 6U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__23__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__23__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__23__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__24__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__rx_external_write__24__data_to_send = 7U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__24__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__24__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__24__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__25__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__rx_external_write__25__data_to_send = 0xffU;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__25__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__25__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__25__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         276);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test 3, writing to the rx uart, completed!\n",0);
    vlSelfRef.uart_tb__DOT__test_num = ((IData)(1U) 
                                        + vlSelfRef.uart_tb__DOT__test_num);
    __Vtask_uart_tb__DOT__rx_buffer_read__26__expected_data = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__26__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__26__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         285);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__27__expected_data = 2U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__27__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__27__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         287);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__28__expected_data = 3U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__28__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__28__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         289);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__29__expected_data = 4U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__29__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__29__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         291);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__30__expected_data = 5U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__30__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__30__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         293);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__31__expected_data = 6U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__31__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__31__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         295);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__32__expected_data = 7U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__32__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__32__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         297);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__33__expected_data = 0xffU;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__33__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__33__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         299);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         301);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test 4, reading from the rx buffer, completed!\n",0);
    vlSelfRef.uart_tb__DOT__test_num = ((IData)(1U) 
                                        + vlSelfRef.uart_tb__DOT__test_num);
    vlSelfRef.uart_tb__DOT__rx = 1U;
    vlSelfRef.uart_tb__DOT__cts = 0U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__rate_control = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    vlSelfRef.uart_tb__DOT__nRst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__35__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__rx_external_write__35__data_to_send = 0xaU;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__35__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__35__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__35__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__36__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__rx_external_write__36__data_to_send = 0xbU;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__36__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__36__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__36__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__37__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__rx_external_write__37__data_to_send = 0xcU;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__37__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__37__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__37__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__38__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__rx_external_write__38__data_to_send = 0xdU;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__38__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__38__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__38__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__39__baud_rate = 0x2580U;
    __Vtask_uart_tb__DOT__rx_external_write__39__data_to_send = 0xeU;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__39__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__39__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__39__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__40__data_to_write = 0xaU;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__40__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         317);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__41__data_to_write = 0xbU;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__41__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         319);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__42__data_to_write = 0xcU;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__42__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         321);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__43__data_to_write = 0xdU;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__43__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         323);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__44__data_to_write = 0xeU;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__44__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         325);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 3U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         328);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         330);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test 5, clearing the buffers, completed!\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         334);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("AHBUart_tapeout_tb.sv", 337, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

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
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.uart_tb__DOT__tx)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__tx__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.uart_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0))));
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
