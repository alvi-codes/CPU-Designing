// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_control_unit__Syms.h"


void Vtop_control_unit___024root__trace_chg_sub_0(Vtop_control_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_control_unit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root__trace_chg_top_0\n"); );
    // Init
    Vtop_control_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_control_unit___024root*>(voidSelf);
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_control_unit___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_control_unit___024root__trace_chg_sub_0(Vtop_control_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->PC),8);
    bufp->chgBit(oldp+1,(vlSelf->EQ));
    bufp->chgBit(oldp+2,(vlSelf->RegWrite));
    bufp->chgCData(oldp+3,(vlSelf->ALUctrl),3);
    bufp->chgBit(oldp+4,(vlSelf->ALUsrc));
    bufp->chgBit(oldp+5,(vlSelf->PCsrc));
    bufp->chgCData(oldp+6,(vlSelf->rs1),5);
    bufp->chgCData(oldp+7,(vlSelf->rs2),5);
    bufp->chgCData(oldp+8,(vlSelf->rd),5);
    bufp->chgIData(oldp+9,(vlSelf->ImmOp),32);
    bufp->chgIData(oldp+10,(vlSelf->top_control_unit__DOT__instr),32);
    bufp->chgSData(oldp+11,(vlSelf->top_control_unit__DOT__ImmSrc),12);
}

void Vtop_control_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root__trace_cleanup\n"); );
    // Init
    Vtop_control_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_control_unit___024root*>(voidSelf);
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
