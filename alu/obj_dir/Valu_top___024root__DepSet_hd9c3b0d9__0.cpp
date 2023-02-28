// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_top.h for the primary calling header

#include "verilated.h"

#include "Valu_top___024root.h"

VL_INLINE_OPT void Valu_top___024root___sequent__TOP__0(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__alu_top__DOT__reg_file__DOT__regfile__v0;
    IData/*31:0*/ __Vdlyvval__alu_top__DOT__reg_file__DOT__regfile__v0;
    CData/*0:0*/ __Vdlyvset__alu_top__DOT__reg_file__DOT__regfile__v0;
    // Body
    __Vdlyvset__alu_top__DOT__reg_file__DOT__regfile__v0 = 0U;
    if (vlSelf->RegWrite) {
        __Vdlyvval__alu_top__DOT__reg_file__DOT__regfile__v0 
            = ((4U & (IData)(vlSelf->ALUctrl)) ? ((2U 
                                                   & (IData)(vlSelf->ALUctrl))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ALUctrl))
                                                    ? 
                                                   ((vlSelf->alu_top__DOT__ALUop1 
                                                     < vlSelf->alu_top__DOT__ALUop2)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U))
                : ((2U & (IData)(vlSelf->ALUctrl)) ? 
                   ((1U & (IData)(vlSelf->ALUctrl))
                     ? (vlSelf->alu_top__DOT__ALUop1 
                        | vlSelf->alu_top__DOT__ALUop2)
                     : (vlSelf->alu_top__DOT__ALUop1 
                        & vlSelf->alu_top__DOT__ALUop2))
                    : ((1U & (IData)(vlSelf->ALUctrl))
                        ? (vlSelf->alu_top__DOT__ALUop1 
                           - vlSelf->alu_top__DOT__ALUop2)
                        : (vlSelf->alu_top__DOT__ALUop1 
                           + vlSelf->alu_top__DOT__ALUop2))));
        __Vdlyvset__alu_top__DOT__reg_file__DOT__regfile__v0 = 1U;
        __Vdlyvdim0__alu_top__DOT__reg_file__DOT__regfile__v0 
            = (0x1fU & vlSelf->rd);
    }
    if (__Vdlyvset__alu_top__DOT__reg_file__DOT__regfile__v0) {
        vlSelf->alu_top__DOT__reg_file__DOT__regfile[__Vdlyvdim0__alu_top__DOT__reg_file__DOT__regfile__v0] 
            = __Vdlyvval__alu_top__DOT__reg_file__DOT__regfile__v0;
    }
}

VL_INLINE_OPT void Valu_top___024root___combo__TOP__0(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->alu_top__DOT__reg_file__DOT__regfile
        [(0x1fU & vlSelf->rd)];
    vlSelf->alu_top__DOT__ALUop1 = vlSelf->alu_top__DOT__reg_file__DOT__regfile
        [(0x1fU & vlSelf->rs1)];
    vlSelf->alu_top__DOT__ALUop2 = ((IData)(vlSelf->ALUsrc)
                                     ? vlSelf->ImmOp
                                     : vlSelf->alu_top__DOT__reg_file__DOT__regfile
                                    [(0x1fU & vlSelf->rs2)]);
    vlSelf->EQ = (vlSelf->alu_top__DOT__ALUop1 == vlSelf->alu_top__DOT__ALUop2);
}

void Valu_top___024root___eval(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Valu_top___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Valu_top___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Valu_top___024root___eval_debug_assertions(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->RegWrite & 0xfeU))) {
        Verilated::overWidthError("RegWrite");}
    if (VL_UNLIKELY((vlSelf->ALUsrc & 0xfeU))) {
        Verilated::overWidthError("ALUsrc");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->ALUctrl & 0xf8U))) {
        Verilated::overWidthError("ALUctrl");}
}
#endif  // VL_DEBUG
