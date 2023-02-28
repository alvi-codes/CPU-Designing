// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsign_extend.h for the primary calling header

#include "verilated.h"

#include "Vsign_extend___024root.h"

VL_INLINE_OPT void Vsign_extend___024root___combo__TOP__0(Vsign_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->ImmOp = ((0x131U == ((0x7f0U & (vlSelf->instr 
                                            << 4U)) 
                                 | ((0xeU & (vlSelf->instr 
                                             >> 0xbU)) 
                                    | (1U & ((IData)(vlSelf->ImmSrc) 
                                             >> 0xbU)))))
                      ? (0xfffff000U | (IData)(vlSelf->ImmSrc))
                      : (IData)(vlSelf->ImmSrc));
}

void Vsign_extend___024root___eval(Vsign_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root___eval\n"); );
    // Body
    Vsign_extend___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vsign_extend___024root___eval_debug_assertions(Vsign_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ImmSrc & 0xf000U))) {
        Verilated::overWidthError("ImmSrc");}
}
#endif  // VL_DEBUG
