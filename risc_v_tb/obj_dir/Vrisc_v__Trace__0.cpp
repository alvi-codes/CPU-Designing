// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrisc_v__Syms.h"


void Vrisc_v___024root__trace_chg_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrisc_v___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_chg_top_0\n"); );
    // Init
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrisc_v___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vrisc_v___024root__trace_chg_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgCData(oldp+2,(vlSelf->a0),4);
    bufp->chgCData(oldp+3,(vlSelf->risc_v__DOT__sreg),4);
}

void Vrisc_v___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_cleanup\n"); );
    // Init
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
