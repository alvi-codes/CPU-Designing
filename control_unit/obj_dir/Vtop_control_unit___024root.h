// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_control_unit.h for the primary calling header

#ifndef VERILATED_VTOP_CONTROL_UNIT___024ROOT_H_
#define VERILATED_VTOP_CONTROL_UNIT___024ROOT_H_  // guard

#include "verilated.h"

class Vtop_control_unit__Syms;

class Vtop_control_unit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(PC,7,0);
    VL_IN8(EQ,0,0);
    VL_OUT8(RegWrite,0,0);
    VL_OUT8(ALUctrl,2,0);
    VL_OUT8(ALUsrc,0,0);
    VL_OUT8(PCsrc,0,0);
    VL_OUT8(rs1,4,0);
    VL_OUT8(rs2,4,0);
    VL_OUT8(rd,4,0);
    SData/*11:0*/ top_control_unit__DOT__ImmSrc;
    VL_OUT(ImmOp,31,0);
    IData/*31:0*/ top_control_unit__DOT__instr;
    VlUnpacked<IData/*31:0*/, 256> top_control_unit__DOT__my_instr_mem__DOT__rom_array;

    // INTERNAL VARIABLES
    Vtop_control_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_control_unit___024root(Vtop_control_unit__Syms* symsp, const char* name);
    ~Vtop_control_unit___024root();
    VL_UNCOPYABLE(Vtop_control_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
