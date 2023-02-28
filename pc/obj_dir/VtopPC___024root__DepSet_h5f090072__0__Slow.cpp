// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtopPC.h for the primary calling header

#include "verilated.h"

#include "VtopPC___024root.h"

VL_ATTR_COLD void VtopPC___024root___eval_initial(VtopPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VtopPC___024root___eval_settle(VtopPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root___eval_settle\n"); );
}

VL_ATTR_COLD void VtopPC___024root___final(VtopPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root___final\n"); );
}

VL_ATTR_COLD void VtopPC___024root___ctor_var_reset(VtopPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
    vlSelf->pc_out = VL_RAND_RESET_I(32);
    vlSelf->topPC__DOT__next_PC = VL_RAND_RESET_I(32);
    vlSelf->topPC__DOT__pc = VL_RAND_RESET_I(32);
}
