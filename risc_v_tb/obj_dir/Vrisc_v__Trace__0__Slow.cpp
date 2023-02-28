// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrisc_v__Syms.h"


VL_ATTR_COLD void Vrisc_v___024root__trace_init_sub__TOP__0(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"a0", false,-1, 3,0);
    tracep->pushNamePrefix("risc_v ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"a0", false,-1, 3,0);
    tracep->declBus(c+4,"sreg", false,-1, 3,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vrisc_v___024root__trace_init_top(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_init_top\n"); );
    // Body
    Vrisc_v___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vrisc_v___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrisc_v___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrisc_v___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vrisc_v___024root__trace_register(Vrisc_v___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vrisc_v___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vrisc_v___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vrisc_v___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vrisc_v___024root__trace_full_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vrisc_v___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_full_top_0\n"); );
    // Init
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrisc_v___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vrisc_v___024root__trace_full_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullCData(oldp+3,(vlSelf->a0),4);
    bufp->fullCData(oldp+4,(vlSelf->risc_v__DOT__sreg),4);
}
