// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtopPC.h for the primary calling header

#include "verilated.h"

#include "VtopPC__Syms.h"
#include "VtopPC___024root.h"

void VtopPC___024root___ctor_var_reset(VtopPC___024root* vlSelf);

VtopPC___024root::VtopPC___024root(VtopPC__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VtopPC___024root___ctor_var_reset(this);
}

void VtopPC___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VtopPC___024root::~VtopPC___024root() {
}
