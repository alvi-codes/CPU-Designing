// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu_top.h for the primary calling header

#ifndef VERILATED_VALU_TOP___024ROOT_H_
#define VERILATED_VALU_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Valu_top__Syms;

class Valu_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(RegWrite,0,0);
    VL_IN8(ALUsrc,0,0);
    VL_IN8(ALUctrl,2,0);
    VL_OUT8(EQ,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(ImmOp,31,0);
    VL_IN(rs1,31,0);
    VL_IN(rs2,31,0);
    VL_IN(rd,31,0);
    VL_OUT(a0,31,0);
    IData/*31:0*/ alu_top__DOT__ALUop1;
    IData/*31:0*/ alu_top__DOT__ALUop2;
    VlUnpacked<IData/*31:0*/, 32> alu_top__DOT__reg_file__DOT__regfile;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Valu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu_top___024root(Valu_top__Syms* symsp, const char* name);
    ~Valu_top___024root();
    VL_UNCOPYABLE(Valu_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
