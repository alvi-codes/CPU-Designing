// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v.h for the primary calling header

#include "verilated.h"

#include "Vrisc_v___024root.h"

VL_ATTR_COLD void Vrisc_v___024root___settle__TOP__0(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->risc_v__DOT__sreg;
}

VL_ATTR_COLD void Vrisc_v___024root___eval_initial(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vrisc_v___024root___eval_settle(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_settle\n"); );
    // Body
    Vrisc_v___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vrisc_v___024root___final(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___final\n"); );
}

VL_ATTR_COLD void Vrisc_v___024root___ctor_var_reset(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(4);
    vlSelf->risc_v__DOT__sreg = VL_RAND_RESET_I(4);
}
