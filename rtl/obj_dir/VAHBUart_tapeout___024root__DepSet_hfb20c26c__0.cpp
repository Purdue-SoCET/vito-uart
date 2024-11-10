// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAHBUart_tapeout.h for the primary calling header

#include "VAHBUart_tapeout__pch.h"
#include "VAHBUart_tapeout__Syms.h"
#include "VAHBUart_tapeout___024root.h"

VlCoroutine VAHBUart_tapeout___024root___eval_initial__TOP__Vtiming__0__0(VAHBUart_tapeout___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root___eval_initial__TOP__Vtiming__0__0\n"); );
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
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__46__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__46__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__47__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__47__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__48__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__48__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__49__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__49__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__50__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__50__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__51__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__51__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__52__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__52__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__53__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__53__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__54__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__54__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__54__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__54__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__55__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__55__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__55__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__55__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__56__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__56__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__56__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__56__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__57__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__57__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__57__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__57__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__58__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__58__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__58__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__58__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__59__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__59__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__59__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__59__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__60__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__60__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__60__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__60__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__61__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__61__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__61__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__61__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__62__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__62__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__62__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__62__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__63__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__63__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__63__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__63__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__64__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__64__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__64__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__64__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__65__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__65__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__65__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__65__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__66__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__66__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__66__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__66__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__67__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__67__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__67__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__67__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__68__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__68__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__68__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__68__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__69__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__69__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__69__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__69__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__70__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__70__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__71__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__71__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__72__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__72__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__73__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__73__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__74__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__74__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__75__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__75__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__76__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__76__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__77__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__77__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__79__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__79__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__80__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__80__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__81__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__81__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__82__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__82__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__83__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__83__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__84__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__84__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__85__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__85__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__86__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__86__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__87__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__87__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__87__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__87__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__88__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__88__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__88__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__88__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__89__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__89__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__89__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__89__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__90__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__90__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__90__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__90__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__91__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__91__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__91__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__91__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__92__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__92__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__92__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__92__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__93__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__93__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__93__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__93__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_external_read__94__expected_data;
    __Vtask_uart_tb__DOT__tx_external_read__94__expected_data = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__tx_external_read__94__baud_rate;
    __Vtask_uart_tb__DOT__tx_external_read__94__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__95__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__95__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__95__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__95__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__96__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__96__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__96__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__96__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__97__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__97__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__97__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__97__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__98__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__98__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__98__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__98__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__99__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__99__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__99__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__99__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__100__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__100__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__100__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__100__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__101__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__101__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__101__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__101__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_external_write__102__data_to_send;
    __Vtask_uart_tb__DOT__rx_external_write__102__data_to_send = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__rx_external_write__102__baud_rate;
    __Vtask_uart_tb__DOT__rx_external_write__102__baud_rate = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__103__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__103__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__104__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__104__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__105__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__105__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__106__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__106__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__107__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__107__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__108__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__108__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__109__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__109__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__rx_buffer_read__110__expected_data;
    __Vtask_uart_tb__DOT__rx_buffer_read__110__expected_data = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__112__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__112__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__113__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__113__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__114__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__114__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__115__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__115__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__116__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__116__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__117__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__117__data_to_write = 0;
    CData/*7:0*/ __Vtask_uart_tb__DOT__tx_buffer_write__118__data_to_write;
    __Vtask_uart_tb__DOT__tx_buffer_write__118__data_to_write = 0;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         79);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__test_num = 0U;
    vlSelfRef.uart_tb__DOT__nRst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         216);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         219);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         79);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         226);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         230);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         234);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         236);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         238);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         240);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         243);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__10__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__10__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__10__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__11__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__11__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__11__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__12__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__12__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__12__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__13__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__13__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__13__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__14__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__14__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__14__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__15__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__15__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__15__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__16__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__16__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__16__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__17__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__17__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__17__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         259);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__18__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__19__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__20__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__21__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__22__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__23__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__24__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__25__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Test 3, writing to the rx uart, completed!\n",0);
    vlSelfRef.uart_tb__DOT__test_num = ((IData)(1U) 
                                        + vlSelfRef.uart_tb__DOT__test_num);
    __Vtask_uart_tb__DOT__rx_buffer_read__26__expected_data = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         285);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__27__expected_data = 2U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         287);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__28__expected_data = 3U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         289);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__29__expected_data = 4U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         291);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__30__expected_data = 5U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         293);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__31__expected_data = 6U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         295);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__32__expected_data = 7U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         297);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__33__expected_data = 0xffU;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         299);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         301);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         79);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__35__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__36__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__37__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__38__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__39__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         317);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         319);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         321);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         323);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         325);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 3U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         328);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         330);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Test 5, clearing the buffers, completed!\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         334);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         79);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rate_control = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__46__data_to_write = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__46__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         344);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__47__data_to_write = 2U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__47__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         346);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__48__data_to_write = 4U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__48__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         348);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__49__data_to_write = 8U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__49__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         350);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__50__data_to_write = 0x10U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__50__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         352);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__51__data_to_write = 0x20U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__51__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         354);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__52__data_to_write = 0x40U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__52__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         356);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__53__data_to_write = 0x80U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__53__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         358);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__54__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__tx_external_read__54__expected_data = 1U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__54__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__54__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__54__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__54__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__54__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__54__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__54__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__54__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__54__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__54__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__54__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__54__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__54__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__54__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__54__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__55__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__tx_external_read__55__expected_data = 2U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__55__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__55__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__55__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__55__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__55__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__55__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__55__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__55__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__55__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__55__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__55__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__55__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__55__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__55__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__55__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__56__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__tx_external_read__56__expected_data = 4U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__56__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__56__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__56__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__56__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__56__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__56__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__56__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__56__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__56__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__56__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__56__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__56__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__56__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__56__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__56__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__57__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__tx_external_read__57__expected_data = 8U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__57__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__57__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__57__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__57__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__57__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__57__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__57__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__57__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__57__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__57__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__57__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__57__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__57__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__57__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__57__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         366);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__58__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__tx_external_read__58__expected_data = 0x10U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__58__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__58__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__58__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__58__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__58__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__58__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__58__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__58__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__58__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__58__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__58__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__58__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__58__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__58__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__58__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__59__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__tx_external_read__59__expected_data = 0x20U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__59__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__59__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__59__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__59__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__59__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__59__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__59__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__59__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__59__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__59__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__59__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__59__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__59__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__59__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__59__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__60__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__tx_external_read__60__expected_data = 0x40U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__60__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__60__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__60__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__60__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__60__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__60__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__60__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__60__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__60__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__60__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__60__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__60__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__60__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__60__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__60__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__61__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__tx_external_read__61__expected_data = 0x80U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__61__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__61__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__61__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__61__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__61__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__61__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__61__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__61__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__61__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__61__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__61__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__61__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__61__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__61__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__61__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         373);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__62__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__rx_external_write__62__data_to_send = 1U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__62__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__62__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__62__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__62__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__62__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__62__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__62__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__62__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__62__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__62__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__62__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__62__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__63__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__rx_external_write__63__data_to_send = 2U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__63__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__63__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__63__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__63__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__63__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__63__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__63__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__63__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__63__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__63__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__63__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__63__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__64__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__rx_external_write__64__data_to_send = 4U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__64__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__64__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__64__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__64__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__64__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__64__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__64__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__64__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__64__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__64__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__64__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__64__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__65__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__rx_external_write__65__data_to_send = 8U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__65__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__65__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__65__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__65__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__65__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__65__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__65__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__65__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__65__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__65__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__65__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__65__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         379);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__66__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__rx_external_write__66__data_to_send = 0x10U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__66__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__66__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__66__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__66__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__66__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__66__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__66__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__66__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__66__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__66__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__66__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__66__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__67__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__rx_external_write__67__data_to_send = 0x20U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__67__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__67__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__67__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__67__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__67__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__67__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__67__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__67__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__67__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__67__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__67__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__67__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__68__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__rx_external_write__68__data_to_send = 0x40U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__68__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__68__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__68__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__68__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__68__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__68__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__68__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__68__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__68__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__68__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__68__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__68__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__69__baud_rate = 0x4b00U;
    __Vtask_uart_tb__DOT__rx_external_write__69__data_to_send = 0x80U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__69__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__69__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__69__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__69__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__69__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__69__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__69__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__69__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__69__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__69__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__69__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__69__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         384);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__70__expected_data = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__70__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__70__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         387);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__71__expected_data = 2U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__71__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__71__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         389);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__72__expected_data = 4U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__72__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__72__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         391);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__73__expected_data = 8U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__73__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__73__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         393);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__74__expected_data = 0x10U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__74__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__74__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         395);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__75__expected_data = 0x20U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__75__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__75__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         397);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__76__expected_data = 0x40U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__76__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__76__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         399);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__77__expected_data = 0x80U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__77__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__77__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         401);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Test 6, checking 19200 baud rate, completed!\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         406);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         79);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rate_control = 2U;
    __Vtask_uart_tb__DOT__tx_buffer_write__79__data_to_write = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__79__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         415);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__80__data_to_write = 2U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__80__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         417);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__81__data_to_write = 4U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__81__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         419);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__82__data_to_write = 8U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__82__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         421);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__83__data_to_write = 0x10U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__83__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         423);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__84__data_to_write = 0x20U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__84__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         425);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__85__data_to_write = 0x40U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__85__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         427);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__86__data_to_write = 0x80U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__86__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         429);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__87__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__tx_external_read__87__expected_data = 1U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__87__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__87__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__87__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__87__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__87__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__87__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__87__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__87__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__87__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__87__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__87__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__87__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__87__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__87__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__87__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__88__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__tx_external_read__88__expected_data = 2U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__88__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__88__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__88__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__88__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__88__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__88__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__88__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__88__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__88__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__88__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__88__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__88__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__88__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__88__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__88__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__89__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__tx_external_read__89__expected_data = 4U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__89__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__89__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__89__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__89__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__89__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__89__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__89__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__89__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__89__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__89__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__89__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__89__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__89__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__89__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__89__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__90__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__tx_external_read__90__expected_data = 8U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__90__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__90__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__90__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__90__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__90__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__90__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__90__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__90__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__90__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__90__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__90__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__90__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__90__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__90__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__90__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         437);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__91__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__tx_external_read__91__expected_data = 0x10U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__91__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__91__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__91__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__91__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__91__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__91__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__91__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__91__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__91__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__91__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__91__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__91__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__91__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__91__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__91__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__92__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__tx_external_read__92__expected_data = 0x20U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__92__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__92__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__92__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__92__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__92__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__92__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__92__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__92__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__92__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__92__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__92__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__92__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__92__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__92__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__92__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__93__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__tx_external_read__93__expected_data = 0x40U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__93__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__93__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__93__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__93__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__93__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__93__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__93__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__93__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__93__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__93__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__93__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__93__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__93__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__93__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__93__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_external_read__94__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__tx_external_read__94__expected_data = 0x80U;
    vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__tx_external_read__94__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__tx_external_read__94__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__tx_external_read__94__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    co_await vlSelfRef.__VtrigSched_hbd4f0004__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tb.tx)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         134);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         137);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelfRef.uart_tb__DOT__tx)) {
        VL_WRITEF_NX("Error: Invalid start bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__94__expected_data);
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = 0U;
    VL_WRITEF_NX("Expected; %x\n",0,8,__Vtask_uart_tb__DOT__tx_external_read__94__expected_data);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000000: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data))))) {
        VL_WRITEF_NX("Error: Invalid bit (          0) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__94__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & (IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000001: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data) 
                               >> 1U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          1) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__94__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data) 
                              >> 1U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000002: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data) 
                               >> 2U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          2) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__94__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data) 
                              >> 2U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000003: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data) 
                               >> 3U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          3) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__94__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data) 
                              >> 3U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000004: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data) 
                               >> 4U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          4) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__94__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data) 
                              >> 4U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000005: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data) 
                               >> 5U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          5) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__94__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data) 
                              >> 5U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000006: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data) 
                               >> 6U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          6) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__94__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data) 
                              >> 6U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Current bit is 00000007: %x\n",0,
                 1,vlSelfRef.uart_tb__DOT__tx);
    if (VL_UNLIKELY(((IData)(vlSelfRef.uart_tb__DOT__tx) 
                     != (1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data) 
                               >> 7U))))) {
        VL_WRITEF_NX("Error: Invalid bit (          7) for tx data: %x. Read %b, expected %b.\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__94__expected_data,
                     1,(IData)(vlSelfRef.uart_tb__DOT__tx),
                     1,(1U & ((IData)(__Vtask_uart_tb__DOT__tx_external_read__94__expected_data) 
                              >> 7U)));
    }
    vlSelfRef.uart_tb__DOT__dummy_variable = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__dummy_variable);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__tx))))) {
        VL_WRITEF_NX("Error: Invalid stop bit for tx data: %x\n",0,
                     8,__Vtask_uart_tb__DOT__tx_external_read__94__expected_data);
    }
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_DIVS_III(32, vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause, (IData)(2U)))), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         165);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         444);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__95__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__rx_external_write__95__data_to_send = 1U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__95__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__95__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__95__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__95__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__95__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__95__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__95__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__95__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__95__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__95__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__95__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__95__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__96__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__rx_external_write__96__data_to_send = 2U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__96__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__96__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__96__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__96__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__96__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__96__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__96__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__96__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__96__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__96__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__96__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__96__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__97__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__rx_external_write__97__data_to_send = 4U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__97__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__97__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__97__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__97__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__97__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__97__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__97__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__97__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__97__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__97__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__97__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__97__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__98__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__rx_external_write__98__data_to_send = 8U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__98__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__98__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__98__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__98__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__98__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__98__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__98__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__98__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__98__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__98__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__98__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__98__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         450);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__99__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__rx_external_write__99__data_to_send = 0x10U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__99__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__99__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__99__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__99__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__99__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__99__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__99__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__99__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__99__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__99__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__99__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__99__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__100__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__rx_external_write__100__data_to_send = 0x20U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__100__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__100__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__100__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__100__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__100__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__100__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__100__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__100__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__100__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__100__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__100__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__100__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__101__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__rx_external_write__101__data_to_send = 0x40U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__101__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__101__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__101__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__101__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__101__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__101__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__101__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__101__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__101__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__101__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__101__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__101__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_external_write__102__baud_rate = 0x9600U;
    __Vtask_uart_tb__DOT__rx_external_write__102__data_to_send = 0x80U;
    vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause 
        = ((0x4b00U == __Vtask_uart_tb__DOT__rx_external_write__102__baud_rate)
            ? 0x65b8U : ((0x9600U == __Vtask_uart_tb__DOT__rx_external_write__102__baud_rate)
                          ? 0x32dcU : ((0x1c200U == __Vtask_uart_tb__DOT__rx_external_write__102__baud_rate)
                                        ? 0x10f4U : 0xcb66U)));
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 0U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Data sent into rx:%3#\n",0,8,__Vtask_uart_tb__DOT__rx_external_write__102__data_to_send);
    vlSelfRef.uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__rx_external_write__102__data_to_send));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__102__data_to_send) 
                                        >> 1U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__102__data_to_send) 
                                        >> 2U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__102__data_to_send) 
                                        >> 3U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__102__data_to_send) 
                                        >> 4U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__102__data_to_send) 
                                        >> 5U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__102__data_to_send) 
                                        >> 6U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__rx_external_write__102__data_to_send) 
                                        >> 7U));
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rx = 1U;
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause)), 
                                         nullptr, "AHBUart_tapeout_tb.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h24b22ba6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "AHBUart_tapeout_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         455);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__103__expected_data = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__103__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__103__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         458);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__104__expected_data = 2U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__104__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__104__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         460);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__105__expected_data = 4U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__105__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__105__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         462);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__106__expected_data = 8U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__106__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__106__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         464);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__107__expected_data = 0x10U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__107__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__107__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         466);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__108__expected_data = 0x20U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__108__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__108__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         468);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__109__expected_data = 0x40U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__109__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__109__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         470);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__rx_buffer_read__110__expected_data = 0x80U;
    vlSelfRef.uart_tb__DOT__ren_wen = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         174);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelfRef.uart_tb__DOT__rx_data) == (IData)(__Vtask_uart_tb__DOT__rx_buffer_read__110__expected_data))) {
        VL_WRITEF_NX("Rx buffer read: %x\n",0,8,vlSelfRef.uart_tb__DOT__rx_data);
    } else {
        VL_WRITEF_NX("Error: Invalid Rx buffer read. Expected %x, read %x.\n",0,
                     8,__Vtask_uart_tb__DOT__rx_buffer_read__110__expected_data,
                     8,(IData)(vlSelfRef.uart_tb__DOT__rx_data));
    }
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         472);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("Test 7, checking 38400 baud rate, completed!\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         477);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__cts = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         79);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__rate_control = 3U;
    __Vtask_uart_tb__DOT__tx_buffer_write__112__data_to_write = 1U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__112__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         486);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__113__data_to_write = 2U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__113__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         488);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__114__data_to_write = 4U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__114__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         490);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__115__data_to_write = 8U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__115__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         492);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__116__data_to_write = 0x10U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__116__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         494);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__117__data_to_write = 0x20U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__117__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         496);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_uart_tb__DOT__tx_buffer_write__118__data_to_write = 0x40U;
    vlSelfRef.uart_tb__DOT__nRst = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 1U;
    vlSelfRef.uart_tb__DOT__tx_data = __Vtask_uart_tb__DOT__tx_buffer_write__118__data_to_write;
    VL_WRITEF_NX("Buffer transceiver data bus: %x,\nBuffer tx data out: %x,\n",0,
                 8,vlSelfRef.uart_tb__DOT__tx_data,
                 1,(IData)(vlSelfRef.uart_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0xbULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.uart_tb__DOT__ren_wen = 0U;
    vlSelfRef.uart_tb__DOT__tx_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(9ULL, nullptr, 
                                         "AHBUart_tapeout_tb.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}
