// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_unit.h for the primary calling header

#include "verilated.h"

#include "Vcontrol_unit___024root.h"

VL_INLINE_OPT void Vcontrol_unit___024root___combo__TOP__0(Vcontrol_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___combo__TOP__0\n"); );
    // Body
    if ((0x98U == ((0x3f8U & (vlSelf->instr << 3U)) 
                   | (7U & (vlSelf->instr >> 0xcU))))) {
        vlSelf->RegWrite = 1U;
        vlSelf->ALUctrl = 0U;
        vlSelf->ImmSrc = (0xfffU & (vlSelf->instr >> 0x14U));
        vlSelf->ALUsrc = 1U;
    } else {
        vlSelf->RegWrite = 0U;
        vlSelf->ALUctrl = 7U;
        vlSelf->ImmSrc = (0xfffU & ((0x319U == ((0x3f8U 
                                                 & (vlSelf->instr 
                                                    << 3U)) 
                                                | (7U 
                                                   & (vlSelf->instr 
                                                      >> 0xcU))))
                                     ? ((0x800U & (vlSelf->instr 
                                                   >> 0x14U)) 
                                        | ((0x400U 
                                            & (vlSelf->instr 
                                               << 3U)) 
                                           | ((0x3f0U 
                                               & (vlSelf->instr 
                                                  >> 0x15U)) 
                                              | (0xfU 
                                                 & (vlSelf->instr 
                                                    >> 8U)))))
                                     : (vlSelf->instr 
                                        >> 0x14U)));
        vlSelf->ALUsrc = 0U;
    }
    vlSelf->PCsrc = (((0x318U == ((0x3f8U & (vlSelf->instr 
                                             << 3U)) 
                                  | (7U & (vlSelf->instr 
                                           >> 0xcU)))) 
                      & (IData)(vlSelf->EQ)) | ((0x319U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlSelf->instr 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->instr 
                                                        >> 0xcU)))) 
                                                & (~ (IData)(vlSelf->EQ))));
}

void Vcontrol_unit___024root___eval(Vcontrol_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval\n"); );
    // Body
    Vcontrol_unit___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vcontrol_unit___024root___eval_debug_assertions(Vcontrol_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->EQ & 0xfeU))) {
        Verilated::overWidthError("EQ");}
}
#endif  // VL_DEBUG
