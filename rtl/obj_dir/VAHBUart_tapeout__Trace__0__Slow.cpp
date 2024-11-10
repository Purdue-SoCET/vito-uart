// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VAHBUart_tapeout__Syms.h"


VL_ATTR_COLD void VAHBUart_tapeout___024root__trace_init_sub__TOP__0(VAHBUart_tapeout___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("uart_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"test_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+4,0,"dummy_variable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"nRst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"cts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"rts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"rx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"rate_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"ren_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+25,0,"tx_buffer_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"rx_buffer_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"DefaultRate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"nReset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+6,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"cts",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"rts",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"tx_buffer_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"rx_buffer_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"rate_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"ren_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+3,0,"new_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+28,0,"ren_wen_nidle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+29,0,"prev_ren_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+30,0,"sync_tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+31,0,"buffer_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"rxData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"txData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+13,0,"rxErr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"rxClk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"rxDone",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"txValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"txClk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"txBusy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"txDone",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"syncReset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"fifoRx_WEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"fifoRx_REN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"fifoRx_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"fifoRx_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+22,0,"fifoRx_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"fifoRx_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"fifoRx_underrun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"fifoRx_overrun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"fifoRx_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"fifoRx_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+47,0,"fifoTx_WEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"fifoTx_REN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"fifoTx_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"fifoTx_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+25,0,"fifoTx_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"fifoTx_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"fifoTx_underrun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"fifoTx_overrun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"fifoTx_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"fifoTx_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("bg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+126,0,"MaxClockRate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+127,0,"MinBaudRate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+128,0,"Oversample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"nReset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"syncReset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"phase",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"rate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+34,0,"rxClk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"txClk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"txWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+131,0,"rxShift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+128,0,"rxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+54,0,"totalWait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+55,0,"postWait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+56,0,"preWait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+57,0,"inWait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"rxRate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+59,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+60,0,"rxCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+61,0,"txCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->pushPrefix("fifoRx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+132,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"REN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+22,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"underrun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"overrun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+62,0,"overrun_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"underrun_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"write_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+65,0,"write_ptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,0,"read_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+67,0,"read_ptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+68,0,"count_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+69,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+70,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+72,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+74,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("fifo_next", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+77,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+78,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+79,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+82,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fifoTx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+132,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"REN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+25,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"underrun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"overrun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+85,0,"overrun_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"underrun_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"write_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+88,0,"write_ptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+89,0,"read_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+90,0,"read_ptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+91,0,"count_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+92,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+94,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+95,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+96,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+98,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+99,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("fifo_next", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+100,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+101,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+102,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+105,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+106,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+107,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("synced_output", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"nReset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"async_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"sync_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+108,0,"buffer_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"buffer_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("uartRx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+128,0,"Oversample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"nReset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+14,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"sampleWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"fullSampleCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+136,0,"halfSampleCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"curState",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+15,0,"nextState",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+122,0,"rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"fall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"cmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"edgeDetect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"badSync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"reSync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"advance",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"badStop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"fastStart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"sampleCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+112,0,"readCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+113,0,"edgeCmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"readBuf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("uartTx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"nReset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+35,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"curState",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+116,0,"nextState",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+117,0,"hasData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"enterStart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"writeBuf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+120,0,"writeCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rx_external_write__Vstatic__unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"pause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("tx_external_read__Vstatic__unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"pause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VAHBUart_tapeout___024root__trace_init_top(VAHBUart_tapeout___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VAHBUart_tapeout___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAHBUart_tapeout___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void VAHBUart_tapeout___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VAHBUart_tapeout___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VAHBUart_tapeout___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VAHBUart_tapeout___024root__trace_register(VAHBUart_tapeout___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VAHBUart_tapeout___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VAHBUart_tapeout___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VAHBUart_tapeout___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VAHBUart_tapeout___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAHBUart_tapeout___024root__trace_const_0_sub_0(VAHBUart_tapeout___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VAHBUart_tapeout___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root__trace_const_0\n"); );
    // Init
    VAHBUart_tapeout___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAHBUart_tapeout___024root*>(voidSelf);
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAHBUart_tapeout___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VAHBUart_tapeout___024root__trace_const_0_sub_0(VAHBUart_tapeout___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+125,(0x1457U),20);
    bufp->fullIData(oldp+126,(0x100000U),32);
    bufp->fullIData(oldp+127,(1U),32);
    bufp->fullIData(oldp+128,(0x10U),32);
    bufp->fullBit(oldp+129,(0U));
    bufp->fullIData(oldp+130,(0x14U),32);
    bufp->fullIData(oldp+131,(4U),32);
    bufp->fullIData(oldp+132,(8U),32);
    bufp->fullIData(oldp+133,(3U),32);
    bufp->fullIData(oldp+134,(4U),32);
    bufp->fullCData(oldp+135,(0xfU),4);
    bufp->fullCData(oldp+136,(8U),4);
}

VL_ATTR_COLD void VAHBUart_tapeout___024root__trace_full_0_sub_0(VAHBUart_tapeout___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VAHBUart_tapeout___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root__trace_full_0\n"); );
    // Init
    VAHBUart_tapeout___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAHBUart_tapeout___024root*>(voidSelf);
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAHBUart_tapeout___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VAHBUart_tapeout___024root__trace_full_0_sub_0(VAHBUart_tapeout___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAHBUart_tapeout___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.uart_tb__DOT__test_num),32);
    bufp->fullCData(oldp+2,(vlSelfRef.uart_tb__DOT__rate_control),2);
    bufp->fullIData(oldp+3,(((1U == (IData)(vlSelfRef.uart_tb__DOT__rate_control))
                              ? 0xa2cU : ((2U == (IData)(vlSelfRef.uart_tb__DOT__rate_control))
                                           ? 0x516U
                                           : ((3U == (IData)(vlSelfRef.uart_tb__DOT__rate_control))
                                               ? 0x1b2U
                                               : 0x1457U)))),20);
    bufp->fullIData(oldp+4,(vlSelfRef.uart_tb__DOT__dummy_variable),32);
    bufp->fullBit(oldp+5,(vlSelfRef.uart_tb__DOT__nRst));
    bufp->fullBit(oldp+6,(vlSelfRef.uart_tb__DOT__rx));
    bufp->fullBit(oldp+7,(vlSelfRef.uart_tb__DOT__cts));
    bufp->fullCData(oldp+8,((((IData)(vlSelfRef.uart_tb__DOT__ren_wen) 
                              << 2U) | (IData)(vlSelfRef.uart_tb__DOT__rate_control))),4);
    bufp->fullCData(oldp+9,(vlSelfRef.uart_tb__DOT__tx_data),8);
    bufp->fullCData(oldp+10,(vlSelfRef.uart_tb__DOT__ren_wen),2);
    bufp->fullIData(oldp+11,(vlSelfRef.uart_tb__DOT__rx_external_write__Vstatic__unnamedblk1__DOT__pause),32);
    bufp->fullIData(oldp+12,(vlSelfRef.uart_tb__DOT__tx_external_read__Vstatic__unnamedblk3__DOT__pause),32);
    bufp->fullBit(oldp+13,((5U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__nextState))));
    bufp->fullBit(oldp+14,(vlSelfRef.uart_tb__DOT__DUT__DOT__rxDone));
    bufp->fullCData(oldp+15,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__nextState),3);
    bufp->fullBit(oldp+16,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__fall));
    bufp->fullBit(oldp+17,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeDetect));
    bufp->fullBit(oldp+18,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__badSync));
    bufp->fullBit(oldp+19,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__reSync));
    bufp->fullBit(oldp+20,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__advance));
    bufp->fullBit(oldp+21,(vlSelfRef.uart_tb__DOT__tx));
    bufp->fullBit(oldp+22,((8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count))));
    bufp->fullBit(oldp+23,(vlSelfRef.uart_tb__DOT__err));
    bufp->fullCData(oldp+24,(vlSelfRef.uart_tb__DOT__rx_data),8);
    bufp->fullBit(oldp+25,((8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))));
    bufp->fullBit(oldp+26,((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count))));
    bufp->fullIData(oldp+27,(vlSelfRef.uart_tb__DOT__DUT__DOT__rate),20);
    bufp->fullCData(oldp+28,(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle),2);
    bufp->fullCData(oldp+29,(vlSelfRef.uart_tb__DOT__DUT__DOT__prev_ren_wen),2);
    bufp->fullCData(oldp+30,(vlSelfRef.uart_tb__DOT__DUT__DOT__synced_output__DOT__buffer_2),8);
    bufp->fullBit(oldp+31,((3U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))));
    bufp->fullCData(oldp+32,(vlSelfRef.uart_tb__DOT__DUT__DOT__rxData),8);
    bufp->fullCData(oldp+33,(vlSelfRef.uart_tb__DOT__DUT__DOT__txData),8);
    bufp->fullBit(oldp+34,(vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk));
    bufp->fullBit(oldp+35,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN));
    bufp->fullBit(oldp+36,(vlSelfRef.uart_tb__DOT__DUT__DOT__txClk));
    bufp->fullBit(oldp+37,((0U != (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState))));
    bufp->fullBit(oldp+38,(((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__txClk) 
                            & (3U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState)))));
    bufp->fullBit(oldp+39,(vlSelfRef.uart_tb__DOT__DUT__DOT__syncReset));
    bufp->fullBit(oldp+40,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN));
    bufp->fullBit(oldp+41,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN));
    bufp->fullCData(oldp+42,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_wdata),8);
    bufp->fullBit(oldp+43,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_underrun));
    bufp->fullBit(oldp+44,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_overrun));
    bufp->fullCData(oldp+45,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count),4);
    bufp->fullCData(oldp+46,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                               >> (0x3fU 
                                                   & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr), 3U)))))),8);
    bufp->fullBit(oldp+47,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN));
    bufp->fullCData(oldp+48,(((1U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))
                               ? (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__synced_output__DOT__buffer_2)
                               : 0U)),8);
    bufp->fullBit(oldp+49,((0U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))));
    bufp->fullBit(oldp+50,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_underrun));
    bufp->fullBit(oldp+51,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_overrun));
    bufp->fullCData(oldp+52,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count),4);
    bufp->fullCData(oldp+53,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                               >> (0x3fU 
                                                   & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr), 3U)))))),8);
    bufp->fullIData(oldp+54,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__totalWait),20);
    bufp->fullIData(oldp+55,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__postWait),20);
    bufp->fullIData(oldp+56,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__preWait),20);
    bufp->fullBit(oldp+57,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__inWait));
    bufp->fullSData(oldp+58,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxRate),16);
    bufp->fullSData(oldp+59,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__offset),16);
    bufp->fullSData(oldp+60,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__rxCount),16);
    bufp->fullIData(oldp+61,(vlSelfRef.uart_tb__DOT__DUT__DOT__bg__DOT__txCount),20);
    bufp->fullBit(oldp+62,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__overrun_next));
    bufp->fullBit(oldp+63,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__underrun_next));
    bufp->fullCData(oldp+64,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr),3);
    bufp->fullCData(oldp+65,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__write_ptr_next),3);
    bufp->fullCData(oldp+66,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr),3);
    bufp->fullCData(oldp+67,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__read_ptr_next),3);
    bufp->fullCData(oldp+68,(((3U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))
                               ? 0U : (0xfU & ((8U 
                                                == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count))
                                                ? (
                                                   ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_count) 
                                                    - 
                                                    ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN)
                                                      ? 1U
                                                      : 0U)) 
                                                   + 
                                                   (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_REN) 
                                                     & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx_WEN))
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   (0U 
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
    bufp->fullCData(oldp+69,((0xffU & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo))),8);
    bufp->fullCData(oldp+70,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                               >> 8U)))),8);
    bufp->fullCData(oldp+71,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                               >> 0x10U)))),8);
    bufp->fullCData(oldp+72,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                               >> 0x18U)))),8);
    bufp->fullCData(oldp+73,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                               >> 0x20U)))),8);
    bufp->fullCData(oldp+74,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                               >> 0x28U)))),8);
    bufp->fullCData(oldp+75,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                               >> 0x30U)))),8);
    bufp->fullCData(oldp+76,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo 
                                               >> 0x38U)))),8);
    bufp->fullCData(oldp+77,((0xffU & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next))),8);
    bufp->fullCData(oldp+78,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                                               >> 8U)))),8);
    bufp->fullCData(oldp+79,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                                               >> 0x10U)))),8);
    bufp->fullCData(oldp+80,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                                               >> 0x18U)))),8);
    bufp->fullCData(oldp+81,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                                               >> 0x20U)))),8);
    bufp->fullCData(oldp+82,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                                               >> 0x28U)))),8);
    bufp->fullCData(oldp+83,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                                               >> 0x30U)))),8);
    bufp->fullCData(oldp+84,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoRx__DOT__fifo_next 
                                               >> 0x38U)))),8);
    bufp->fullBit(oldp+85,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__overrun_next));
    bufp->fullBit(oldp+86,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__underrun_next));
    bufp->fullCData(oldp+87,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr),3);
    bufp->fullCData(oldp+88,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__write_ptr_next),3);
    bufp->fullCData(oldp+89,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr),3);
    bufp->fullCData(oldp+90,(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__read_ptr_next),3);
    bufp->fullCData(oldp+91,(((3U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__ren_wen_nidle))
                               ? 0U : (0xfU & ((8U 
                                                == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count))
                                                ? (
                                                   ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_count) 
                                                    - 
                                                    ((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN)
                                                      ? 1U
                                                      : 0U)) 
                                                   + 
                                                   (((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_REN) 
                                                     & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx_WEN))
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   (0U 
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
    bufp->fullCData(oldp+92,((0xffU & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo))),8);
    bufp->fullCData(oldp+93,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                               >> 8U)))),8);
    bufp->fullCData(oldp+94,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                               >> 0x10U)))),8);
    bufp->fullCData(oldp+95,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                               >> 0x18U)))),8);
    bufp->fullCData(oldp+96,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                               >> 0x20U)))),8);
    bufp->fullCData(oldp+97,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                               >> 0x28U)))),8);
    bufp->fullCData(oldp+98,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                               >> 0x30U)))),8);
    bufp->fullCData(oldp+99,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo 
                                               >> 0x38U)))),8);
    bufp->fullCData(oldp+100,((0xffU & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next))),8);
    bufp->fullCData(oldp+101,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                                                >> 8U)))),8);
    bufp->fullCData(oldp+102,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                                                >> 0x10U)))),8);
    bufp->fullCData(oldp+103,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                                                >> 0x18U)))),8);
    bufp->fullCData(oldp+104,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                                                >> 0x20U)))),8);
    bufp->fullCData(oldp+105,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                                                >> 0x28U)))),8);
    bufp->fullCData(oldp+106,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                                                >> 0x30U)))),8);
    bufp->fullCData(oldp+107,((0xffU & (IData)((vlSelfRef.uart_tb__DOT__DUT__DOT__fifoTx__DOT__fifo_next 
                                                >> 0x38U)))),8);
    bufp->fullCData(oldp+108,(vlSelfRef.uart_tb__DOT__DUT__DOT__synced_output__DOT__buffer_1),8);
    bufp->fullCData(oldp+109,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__curState),3);
    bufp->fullBit(oldp+110,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__cmp));
    bufp->fullCData(oldp+111,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount),4);
    bufp->fullCData(oldp+112,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readCount),4);
    bufp->fullBit(oldp+113,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__edgeCmp));
    bufp->fullCData(oldp+114,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__readBuf),8);
    bufp->fullCData(oldp+115,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__curState),2);
    bufp->fullCData(oldp+116,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__nextState),2);
    bufp->fullBit(oldp+117,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__hasData));
    bufp->fullBit(oldp+118,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__enterStart));
    bufp->fullCData(oldp+119,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeBuf),8);
    bufp->fullCData(oldp+120,(vlSelfRef.uart_tb__DOT__DUT__DOT__uartTx__DOT__writeCount),4);
    bufp->fullBit(oldp+121,(vlSelfRef.uart_tb__DOT__clk));
    bufp->fullBit(oldp+122,(((IData)(vlSelfRef.uart_tb__DOT__rx) 
                             & (~ (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__cmp)))));
    bufp->fullBit(oldp+123,((((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk) 
                              & (~ (IData)(vlSelfRef.uart_tb__DOT__rx))) 
                             & (8U == (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount)))));
    bufp->fullBit(oldp+124,((((IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__rxClk) 
                              & (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__fall)) 
                             & (8U > (IData)(vlSelfRef.uart_tb__DOT__DUT__DOT__uartRx__DOT__sampleCount)))));
}
