// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrisc_v.h"
#include "Vrisc_v__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrisc_v::Vrisc_v(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrisc_v__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , a0{vlSymsp->TOP.a0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrisc_v::Vrisc_v(const char* _vcname__)
    : Vrisc_v(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrisc_v::~Vrisc_v() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vrisc_v___024root___eval_initial(Vrisc_v___024root* vlSelf);
void Vrisc_v___024root___eval_settle(Vrisc_v___024root* vlSelf);
void Vrisc_v___024root___eval(Vrisc_v___024root* vlSelf);
#ifdef VL_DEBUG
void Vrisc_v___024root___eval_debug_assertions(Vrisc_v___024root* vlSelf);
#endif  // VL_DEBUG
void Vrisc_v___024root___final(Vrisc_v___024root* vlSelf);

static void _eval_initial_loop(Vrisc_v__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vrisc_v___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vrisc_v___024root___eval_settle(&(vlSymsp->TOP));
        Vrisc_v___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vrisc_v::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrisc_v::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrisc_v___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vrisc_v___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vrisc_v::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vrisc_v::final() {
    Vrisc_v___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrisc_v::hierName() const { return vlSymsp->name(); }
const char* Vrisc_v::modelName() const { return "Vrisc_v"; }
unsigned Vrisc_v::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vrisc_v::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vrisc_v___024root__trace_init_top(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vrisc_v___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vrisc_v___024root__trace_register(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrisc_v::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vrisc_v___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
