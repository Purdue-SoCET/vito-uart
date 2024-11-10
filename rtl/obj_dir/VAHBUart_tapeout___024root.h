// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAHBUart_tapeout.h for the primary calling header

#ifndef VERILATED_VAHBUART_TAPEOUT___024ROOT_H_
#define VERILATED_VAHBUART_TAPEOUT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VAHBUart_tapeout__Syms;

class alignas(VL_CACHE_LINE_BYTES) VAHBUart_tapeout___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ uart_tb__DOT__clk;
        CData/*0:0*/ uart_tb__DOT__nRst;
        CData/*0:0*/ uart_tb__DOT__tx;
        CData/*0:0*/ uart_tb__DOT__rx;
        CData/*0:0*/ uart_tb__DOT__cts;
        CData/*0:0*/ uart_tb__DOT__err;
        CData/*7:0*/ uart_tb__DOT__tx_data;
        CData/*7:0*/ uart_tb__DOT__rx_data;
        CData/*1:0*/ uart_tb__DOT__rate_control;
        CData/*1:0*/ uart_tb__DOT__ren_wen;
        CData/*1:0*/ uart_tb__DOT__DUT__DOT__ren_wen_nidle;
        CData/*1:0*/ uart_tb__DOT__DUT__DOT__prev_ren_wen;
        CData/*7:0*/ uart_tb__DOT__DUT__DOT__rxData;
        CData/*7:0*/ uart_tb__DOT__DUT__DOT__txData;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__rxClk;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__rxDone;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__txClk;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__syncReset;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__fifoRx_WEN;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__fifoRx_REN;
        CData/*7:0*/ uart_tb__DOT__DUT__DOT__fifoRx_wdata;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__fifoRx_underrun;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__fifoRx_overrun;
        CData/*3:0*/ uart_tb__DOT__DUT__DOT__fifoRx_count;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__fifoTx_WEN;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__fifoTx_REN;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__fifoTx_underrun;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__fifoTx_overrun;
        CData/*3:0*/ uart_tb__DOT__DUT__DOT__fifoTx_count;
        CData/*3:0*/ uart_tb__DOT__DUT__DOT__sync_control_data__DOT__buffer_1;
        CData/*3:0*/ uart_tb__DOT__DUT__DOT__sync_control_data__DOT__buffer_2;
        CData/*7:0*/ uart_tb__DOT__DUT__DOT__synced_tx_data__DOT__buffer_1;
        CData/*7:0*/ uart_tb__DOT__DUT__DOT__synced_tx_data__DOT__buffer_2;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__bg__DOT__inWait;
        CData/*2:0*/ uart_tb__DOT__DUT__DOT__uartRx__DOT__curState;
        CData/*2:0*/ uart_tb__DOT__DUT__DOT__uartRx__DOT__nextState;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__uartRx__DOT__fall;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__uartRx__DOT__cmp;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeDetect;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__uartRx__DOT__badSync;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__uartRx__DOT__reSync;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__uartRx__DOT__advance;
        CData/*3:0*/ uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount;
        CData/*3:0*/ uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp;
        CData/*7:0*/ uart_tb__DOT__DUT__DOT__uartRx__DOT__readBuf;
        CData/*1:0*/ uart_tb__DOT__DUT__DOT__uartTx__DOT__curState;
        CData/*1:0*/ uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart;
        CData/*7:0*/ uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf;
        CData/*3:0*/ uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__fifoRx__DOT__overrun_next;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__fifoRx__DOT__underrun_next;
        CData/*2:0*/ uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr;
        CData/*2:0*/ uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr_next;
        CData/*2:0*/ uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr;
        CData/*2:0*/ uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr_next;
        CData/*3:0*/ uart_tb__DOT__DUT__DOT__fifoRx__DOT__count_next;
        QData/*63:0*/ uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo;
        QData/*63:0*/ uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__fifoTx__DOT__overrun_next;
        CData/*0:0*/ uart_tb__DOT__DUT__DOT__fifoTx__DOT__underrun_next;
        CData/*2:0*/ uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr;
    };
    struct {
        CData/*2:0*/ uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr_next;
        CData/*2:0*/ uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr;
        CData/*2:0*/ uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr_next;
        CData/*3:0*/ uart_tb__DOT__DUT__DOT__fifoTx__DOT__count_next;
        QData/*63:0*/ uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo;
        QData/*63:0*/ uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next;
        CData/*3:0*/ __Vdly__uart_tb__DOT__DUT__DOT__sync_control_data__DOT__buffer_2;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tb__DOT__nRst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tb__DOT__tx__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ uart_tb__DOT__DUT__DOT__bg__DOT__rxRate;
        SData/*15:0*/ uart_tb__DOT__DUT__DOT__bg__DOT__offset;
        SData/*15:0*/ uart_tb__DOT__DUT__DOT__bg__DOT__rxCount;
        IData/*31:0*/ uart_tb__DOT__test_num;
        IData/*31:0*/ uart_tb__DOT__dummy_variable;
        IData/*31:0*/ uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause;
        IData/*31:0*/ uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause;
        IData/*19:0*/ uart_tb__DOT__DUT__DOT__rate;
        IData/*19:0*/ uart_tb__DOT__DUT__DOT__bg__DOT__totalWait;
        IData/*19:0*/ uart_tb__DOT__DUT__DOT__bg__DOT__postWait;
        IData/*19:0*/ uart_tb__DOT__DUT__DOT__bg__DOT__preWait;
        IData/*19:0*/ uart_tb__DOT__DUT__DOT__bg__DOT__txCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hbd4f0004__0;
    VlTriggerScheduler __VtrigSched_h24b22ba6__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    VAHBUart_tapeout__Syms* const vlSymsp;

    // CONSTRUCTORS
    VAHBUart_tapeout___024root(VAHBUart_tapeout__Syms* symsp, const char* v__name);
    ~VAHBUart_tapeout___024root();
    VL_UNCOPYABLE(VAHBUart_tapeout___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
