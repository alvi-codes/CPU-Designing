// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_control_unit.h for the primary calling header

#include "verilated.h"

#include "Vtop_control_unit___024root.h"

VL_ATTR_COLD void Vtop_control_unit___024root___initial__TOP__0(Vtop_control_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root___initial__TOP__0\n"); );
    // Body
    VL_READMEM_N(true, 32, 256, 0, std::string{"test.mem"}
                 ,  &(vlSelf->top_control_unit__DOT__my_instr_mem__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop_control_unit___024root___eval_initial(Vtop_control_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root___eval_initial\n"); );
    // Body
    Vtop_control_unit___024root___initial__TOP__0(vlSelf);
}

void Vtop_control_unit___024root___combo__TOP__0(Vtop_control_unit___024root* vlSelf);

VL_ATTR_COLD void Vtop_control_unit___024root___eval_settle(Vtop_control_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root___eval_settle\n"); );
    // Body
    Vtop_control_unit___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop_control_unit___024root___final(Vtop_control_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root___final\n"); );
}

VL_ATTR_COLD void Vtop_control_unit___024root___ctor_var_reset(Vtop_control_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->PC = VL_RAND_RESET_I(8);
    vlSelf->EQ = VL_RAND_RESET_I(1);
    vlSelf->RegWrite = VL_RAND_RESET_I(1);
    vlSelf->ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
    vlSelf->rs1 = VL_RAND_RESET_I(5);
    vlSelf->rs2 = VL_RAND_RESET_I(5);
    vlSelf->rd = VL_RAND_RESET_I(5);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top_control_unit__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top_control_unit__DOT__ImmSrc = VL_RAND_RESET_I(12);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top_control_unit__DOT__my_instr_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
}
