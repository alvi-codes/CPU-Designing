// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VtopPC.h"
#include "VtopPC__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VtopPC::VtopPC(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VtopPC__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , PCsrc{vlSymsp->TOP.PCsrc}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , pc_out{vlSymsp->TOP.pc_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VtopPC::VtopPC(const char* _vcname__)
    : VtopPC(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VtopPC::~VtopPC() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VtopPC___024root___eval_initial(VtopPC___024root* vlSelf);
void VtopPC___024root___eval_settle(VtopPC___024root* vlSelf);
void VtopPC___024root___eval(VtopPC___024root* vlSelf);
#ifdef VL_DEBUG
void VtopPC___024root___eval_debug_assertions(VtopPC___024root* vlSelf);
#endif  // VL_DEBUG
void VtopPC___024root___final(VtopPC___024root* vlSelf);

static void _eval_initial_loop(VtopPC__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VtopPC___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VtopPC___024root___eval_settle(&(vlSymsp->TOP));
        VtopPC___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VtopPC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VtopPC::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VtopPC___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VtopPC___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VtopPC::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VtopPC::final() {
    VtopPC___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VtopPC::hierName() const { return vlSymsp->name(); }
const char* VtopPC::modelName() const { return "VtopPC"; }
unsigned VtopPC::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VtopPC::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VtopPC___024root__trace_init_top(VtopPC___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VtopPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtopPC___024root*>(voidSelf);
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VtopPC___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VtopPC___024root__trace_register(VtopPC___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VtopPC::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VtopPC::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VtopPC___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
