// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrisc_v.h for the primary calling header

#ifndef VERILATED_VRISC_V___024ROOT_H_
#define VERILATED_VRISC_V___024ROOT_H_  // guard

#include "verilated.h"

class Vrisc_v__Syms;

class Vrisc_v___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(a0,3,0);
    CData/*3:0*/ risc_v__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;

    // INTERNAL VARIABLES
    Vrisc_v__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrisc_v___024root(Vrisc_v__Syms* symsp, const char* name);
    ~Vrisc_v___024root();
    VL_UNCOPYABLE(Vrisc_v___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
