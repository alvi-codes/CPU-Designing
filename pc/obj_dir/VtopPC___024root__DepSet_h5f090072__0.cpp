// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtopPC.h for the primary calling header

#include "verilated.h"

#include "VtopPC___024root.h"

VL_INLINE_OPT void VtopPC___024root___sequent__TOP__0(VtopPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__topPC__DOT__next_PC;
    // Body
    __Vdly__topPC__DOT__next_PC = vlSelf->topPC__DOT__next_PC;
    vlSelf->pc_out = vlSelf->topPC__DOT__pc;
    __Vdly__topPC__DOT__next_PC = ((IData)(vlSelf->PCsrc)
                                    ? (vlSelf->topPC__DOT__pc 
                                       + vlSelf->ImmOp)
                                    : ((IData)(4U) 
                                       + vlSelf->topPC__DOT__pc));
    vlSelf->topPC__DOT__pc = ((IData)(vlSelf->rst) ? 0U
                               : vlSelf->topPC__DOT__next_PC);
    vlSelf->topPC__DOT__next_PC = __Vdly__topPC__DOT__next_PC;
}

void VtopPC___024root___eval(VtopPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VtopPC___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VtopPC___024root___eval_debug_assertions(VtopPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->PCsrc & 0xfeU))) {
        Verilated::overWidthError("PCsrc");}
}
#endif  // VL_DEBUG
