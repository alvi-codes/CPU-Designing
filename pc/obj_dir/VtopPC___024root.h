// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtopPC.h for the primary calling header

#ifndef VERILATED_VTOPPC___024ROOT_H_
#define VERILATED_VTOPPC___024ROOT_H_  // guard

#include "verilated.h"

class VtopPC__Syms;

class VtopPC___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(PCsrc,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(ImmOp,31,0);
    VL_OUT(pc_out,31,0);
    IData/*31:0*/ topPC__DOT__next_PC;
    IData/*31:0*/ topPC__DOT__pc;

    // INTERNAL VARIABLES
    VtopPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VtopPC___024root(VtopPC__Syms* symsp, const char* name);
    ~VtopPC___024root();
    VL_UNCOPYABLE(VtopPC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
