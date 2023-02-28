// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstr_mem.h for the primary calling header

#include "verilated.h"

#include "Vinstr_mem___024root.h"

VL_ATTR_COLD void Vinstr_mem___024root___initial__TOP__0(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___initial__TOP__0\n"); );
    // Body
    VL_READMEM_N(true, 32, 256, 0, std::string{"temp.mem"}
                 ,  &(vlSelf->instr_mem__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vinstr_mem___024root___eval_initial(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___eval_initial\n"); );
    // Body
    Vinstr_mem___024root___initial__TOP__0(vlSelf);
}

void Vinstr_mem___024root___combo__TOP__0(Vinstr_mem___024root* vlSelf);

VL_ATTR_COLD void Vinstr_mem___024root___eval_settle(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___eval_settle\n"); );
    // Body
    Vinstr_mem___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vinstr_mem___024root___final(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___final\n"); );
}

VL_ATTR_COLD void Vinstr_mem___024root___ctor_var_reset(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->A = VL_RAND_RESET_I(8);
    vlSelf->instr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->instr_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
}
