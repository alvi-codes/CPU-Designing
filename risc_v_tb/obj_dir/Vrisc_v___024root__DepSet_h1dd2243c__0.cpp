// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v.h for the primary calling header

#include "verilated.h"

#include "Vrisc_v___024root.h"

VL_INLINE_OPT void Vrisc_v___024root___sequent__TOP__0(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->risc_v__DOT__sreg = ((IData)(vlSelf->rst)
                                  ? 1U : ((0xeU & ((IData)(vlSelf->risc_v__DOT__sreg) 
                                                   << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (0xcU 
                                                               & (IData)(vlSelf->risc_v__DOT__sreg))))));
    vlSelf->a0 = vlSelf->risc_v__DOT__sreg;
}

void Vrisc_v___024root___eval(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vrisc_v___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vrisc_v___024root___eval_debug_assertions(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
