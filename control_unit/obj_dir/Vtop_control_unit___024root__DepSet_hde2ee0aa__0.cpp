// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_control_unit.h for the primary calling header

#include "verilated.h"

#include "Vtop_control_unit___024root.h"

VL_INLINE_OPT void Vtop_control_unit___024root___combo__TOP__0(Vtop_control_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top_control_unit__DOT__instr = vlSelf->top_control_unit__DOT__my_instr_mem__DOT__rom_array
        [vlSelf->PC];
    vlSelf->rs1 = (0x1fU & (vlSelf->top_control_unit__DOT__instr 
                            >> 0xfU));
    vlSelf->rs2 = (0x1fU & (vlSelf->top_control_unit__DOT__instr 
                            >> 0x14U));
    vlSelf->rd = (0x1fU & (vlSelf->top_control_unit__DOT__instr 
                           >> 7U));
    if ((0x98U == ((0x3f8U & (vlSelf->top_control_unit__DOT__instr 
                              << 3U)) | (7U & (vlSelf->top_control_unit__DOT__instr 
                                               >> 0xcU))))) {
        vlSelf->RegWrite = 1U;
        vlSelf->ALUctrl = 0U;
        vlSelf->top_control_unit__DOT__ImmSrc = (0xfffU 
                                                 & (vlSelf->top_control_unit__DOT__instr 
                                                    >> 0x14U));
        vlSelf->ALUsrc = 1U;
    } else {
        vlSelf->RegWrite = 0U;
        vlSelf->ALUctrl = 7U;
        vlSelf->top_control_unit__DOT__ImmSrc = (0xfffU 
                                                 & ((0x319U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->top_control_unit__DOT__instr 
                                                          << 3U)) 
                                                      | (7U 
                                                         & (vlSelf->top_control_unit__DOT__instr 
                                                            >> 0xcU))))
                                                     ? 
                                                    ((0x800U 
                                                      & (vlSelf->top_control_unit__DOT__instr 
                                                         >> 0x14U)) 
                                                     | ((0x400U 
                                                         & (vlSelf->top_control_unit__DOT__instr 
                                                            << 3U)) 
                                                        | ((0x3f0U 
                                                            & (vlSelf->top_control_unit__DOT__instr 
                                                               >> 0x15U)) 
                                                           | (0xfU 
                                                              & (vlSelf->top_control_unit__DOT__instr 
                                                                 >> 8U)))))
                                                     : 
                                                    (vlSelf->top_control_unit__DOT__instr 
                                                     >> 0x14U)));
        vlSelf->ALUsrc = 0U;
    }
    vlSelf->PCsrc = (((0x318U == ((0x3f8U & (vlSelf->top_control_unit__DOT__instr 
                                             << 3U)) 
                                  | (7U & (vlSelf->top_control_unit__DOT__instr 
                                           >> 0xcU)))) 
                      & (IData)(vlSelf->EQ)) | ((0x319U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlSelf->top_control_unit__DOT__instr 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->top_control_unit__DOT__instr 
                                                        >> 0xcU)))) 
                                                & (~ (IData)(vlSelf->EQ))));
    vlSelf->ImmOp = ((0x131U == ((0x7f0U & (vlSelf->top_control_unit__DOT__instr 
                                            << 4U)) 
                                 | ((0xeU & (vlSelf->top_control_unit__DOT__instr 
                                             >> 0xbU)) 
                                    | (1U & ((IData)(vlSelf->top_control_unit__DOT__ImmSrc) 
                                             >> 0xbU)))))
                      ? (0xfffff000U | (IData)(vlSelf->top_control_unit__DOT__ImmSrc))
                      : (IData)(vlSelf->top_control_unit__DOT__ImmSrc));
}

void Vtop_control_unit___024root___eval(Vtop_control_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root___eval\n"); );
    // Body
    Vtop_control_unit___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vtop_control_unit___024root___eval_debug_assertions(Vtop_control_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->EQ & 0xfeU))) {
        Verilated::overWidthError("EQ");}
}
#endif  // VL_DEBUG
