// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valu_top.h"
#include "Valu_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Valu_top::Valu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Valu_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , RegWrite{vlSymsp->TOP.RegWrite}
    , ALUsrc{vlSymsp->TOP.ALUsrc}
    , ALUctrl{vlSymsp->TOP.ALUctrl}
    , EQ{vlSymsp->TOP.EQ}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , rs1{vlSymsp->TOP.rs1}
    , rs2{vlSymsp->TOP.rs2}
    , rd{vlSymsp->TOP.rd}
    , a0{vlSymsp->TOP.a0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Valu_top::Valu_top(const char* _vcname__)
    : Valu_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Valu_top::~Valu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Valu_top___024root___eval_initial(Valu_top___024root* vlSelf);
void Valu_top___024root___eval_settle(Valu_top___024root* vlSelf);
void Valu_top___024root___eval(Valu_top___024root* vlSelf);
#ifdef VL_DEBUG
void Valu_top___024root___eval_debug_assertions(Valu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Valu_top___024root___final(Valu_top___024root* vlSelf);

static void _eval_initial_loop(Valu_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Valu_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Valu_top___024root___eval_settle(&(vlSymsp->TOP));
        Valu_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Valu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Valu_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Valu_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Valu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Valu_top::final() {
    Valu_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Valu_top::hierName() const { return vlSymsp->name(); }
const char* Valu_top::modelName() const { return "Valu_top"; }
unsigned Valu_top::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Valu_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Valu_top___024root__trace_init_top(Valu_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Valu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_top___024root*>(voidSelf);
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Valu_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Valu_top___024root__trace_register(Valu_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Valu_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Valu_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
