// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void VAHBUart_tapeout___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IDLE", "START", "DATA_A", "DATA_B", "STOP", 
                                "ERROR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(1, "UartRxEn.__typeimpenum3", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "START", "DATA", "STOP"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(2, "UartTxEn.__typeimpenum4", 4, 2, __VenumItemNames, __VenumItemValues);
    }
}

void VAHBUart_tapeout___024root__trace_decl_types(VerilatedFst* tracep) {
    VAHBUart_tapeout___024root__traceDeclTypesSub0(tracep);
}
