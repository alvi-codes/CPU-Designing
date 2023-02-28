// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VtopPC__Syms.h"


void VtopPC___024root__trace_chg_sub_0(VtopPC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VtopPC___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root__trace_chg_top_0\n"); );
    // Init
    VtopPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtopPC___024root*>(voidSelf);
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VtopPC___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VtopPC___024root__trace_chg_sub_0(VtopPC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgIData(oldp+2,(vlSelf->ImmOp),32);
    bufp->chgBit(oldp+3,(vlSelf->PCsrc));
    bufp->chgIData(oldp+4,(vlSelf->pc_out),32);
    bufp->chgIData(oldp+5,(vlSelf->topPC__DOT__next_PC),32);
    bufp->chgIData(oldp+6,(vlSelf->topPC__DOT__pc),32);
}

void VtopPC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root__trace_cleanup\n"); );
    // Init
    VtopPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtopPC___024root*>(voidSelf);
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
