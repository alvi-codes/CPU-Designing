// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_top.h for the primary calling header

#include "verilated.h"

#include "Valu_top___024root.h"

VL_ATTR_COLD void Valu_top___024root___initial__TOP__0(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h4bbd9b87__0;
    // Body
    __Vtemp_h4bbd9b87__0[0U] = 0x2e6d656dU;
    __Vtemp_h4bbd9b87__0[1U] = 0x74726f6dU;
    __Vtemp_h4bbd9b87__0[2U] = 0x746573U;
    VL_READMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h4bbd9b87__0)
                 ,  &(vlSelf->alu_top__DOT__reg_file__DOT__regfile)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Valu_top___024root___eval_initial(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_initial\n"); );
    // Body
    Valu_top___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Valu_top___024root___combo__TOP__0(Valu_top___024root* vlSelf);

VL_ATTR_COLD void Valu_top___024root___eval_settle(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_settle\n"); );
    // Body
    Valu_top___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Valu_top___024root___final(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___final\n"); );
}

VL_ATTR_COLD void Valu_top___024root___ctor_var_reset(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->RegWrite = VL_RAND_RESET_I(1);
    vlSelf->ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->rs1 = VL_RAND_RESET_I(32);
    vlSelf->rs2 = VL_RAND_RESET_I(32);
    vlSelf->rd = VL_RAND_RESET_I(32);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->EQ = VL_RAND_RESET_I(1);
    vlSelf->alu_top__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->alu_top__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->alu_top__DOT__reg_file__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
