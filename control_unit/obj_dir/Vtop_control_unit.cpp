// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_control_unit.h"
#include "Vtop_control_unit__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop_control_unit::Vtop_control_unit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_control_unit__Syms(contextp(), _vcname__, this)}
    , PC{vlSymsp->TOP.PC}
    , EQ{vlSymsp->TOP.EQ}
    , RegWrite{vlSymsp->TOP.RegWrite}
    , ALUctrl{vlSymsp->TOP.ALUctrl}
    , ALUsrc{vlSymsp->TOP.ALUsrc}
    , PCsrc{vlSymsp->TOP.PCsrc}
    , rs1{vlSymsp->TOP.rs1}
    , rs2{vlSymsp->TOP.rs2}
    , rd{vlSymsp->TOP.rd}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_control_unit::Vtop_control_unit(const char* _vcname__)
    : Vtop_control_unit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_control_unit::~Vtop_control_unit() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtop_control_unit___024root___eval_initial(Vtop_control_unit___024root* vlSelf);
void Vtop_control_unit___024root___eval_settle(Vtop_control_unit___024root* vlSelf);
void Vtop_control_unit___024root___eval(Vtop_control_unit___024root* vlSelf);
#ifdef VL_DEBUG
void Vtop_control_unit___024root___eval_debug_assertions(Vtop_control_unit___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_control_unit___024root___final(Vtop_control_unit___024root* vlSelf);

static void _eval_initial_loop(Vtop_control_unit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtop_control_unit___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtop_control_unit___024root___eval_settle(&(vlSymsp->TOP));
        Vtop_control_unit___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtop_control_unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_control_unit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_control_unit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtop_control_unit___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtop_control_unit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtop_control_unit::final() {
    Vtop_control_unit___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_control_unit::hierName() const { return vlSymsp->name(); }
const char* Vtop_control_unit::modelName() const { return "Vtop_control_unit"; }
unsigned Vtop_control_unit::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtop_control_unit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop_control_unit___024root__trace_init_top(Vtop_control_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_control_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_control_unit___024root*>(voidSelf);
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtop_control_unit___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtop_control_unit___024root__trace_register(Vtop_control_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_control_unit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop_control_unit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
