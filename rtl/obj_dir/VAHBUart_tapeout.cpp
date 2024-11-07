// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAHBUart_tapeout__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

VAHBUart_tapeout::VAHBUart_tapeout(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VAHBUart_tapeout__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VAHBUart_tapeout::VAHBUart_tapeout(const char* _vcname__)
    : VAHBUart_tapeout(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VAHBUart_tapeout::~VAHBUart_tapeout() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VAHBUart_tapeout___024root___eval_debug_assertions(VAHBUart_tapeout___024root* vlSelf);
#endif  // VL_DEBUG
void VAHBUart_tapeout___024root___eval_static(VAHBUart_tapeout___024root* vlSelf);
void VAHBUart_tapeout___024root___eval_initial(VAHBUart_tapeout___024root* vlSelf);
void VAHBUart_tapeout___024root___eval_settle(VAHBUart_tapeout___024root* vlSelf);
void VAHBUart_tapeout___024root___eval(VAHBUart_tapeout___024root* vlSelf);

void VAHBUart_tapeout::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAHBUart_tapeout::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAHBUart_tapeout___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VAHBUart_tapeout___024root___eval_static(&(vlSymsp->TOP));
        VAHBUart_tapeout___024root___eval_initial(&(vlSymsp->TOP));
        VAHBUart_tapeout___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VAHBUart_tapeout___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VAHBUart_tapeout::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VAHBUart_tapeout::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VAHBUart_tapeout::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VAHBUart_tapeout::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VAHBUart_tapeout::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VAHBUart_tapeout___024root___eval_final(VAHBUart_tapeout___024root* vlSelf);

VL_ATTR_COLD void VAHBUart_tapeout::final() {
    VAHBUart_tapeout___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAHBUart_tapeout::hierName() const { return vlSymsp->name(); }
const char* VAHBUart_tapeout::modelName() const { return "VAHBUart_tapeout"; }
unsigned VAHBUart_tapeout::threads() const { return 1; }
void VAHBUart_tapeout::prepareClone() const { contextp()->prepareClone(); }
void VAHBUart_tapeout::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VAHBUart_tapeout::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VAHBUart_tapeout___024root__trace_decl_types(VerilatedFst* tracep);

void VAHBUart_tapeout___024root__trace_init_top(VAHBUart_tapeout___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAHBUart_tapeout___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAHBUart_tapeout___024root*>(voidSelf);
    VAHBUart_tapeout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VAHBUart_tapeout___024root__trace_decl_types(tracep);
    VAHBUart_tapeout___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void VAHBUart_tapeout___024root__trace_register(VAHBUart_tapeout___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VAHBUart_tapeout::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VAHBUart_tapeout::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAHBUart_tapeout___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
