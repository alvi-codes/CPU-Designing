// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_control_unit.h for the primary calling header

#include "verilated.h"

#include "Vtop_control_unit__Syms.h"
#include "Vtop_control_unit___024root.h"

void Vtop_control_unit___024root___ctor_var_reset(Vtop_control_unit___024root* vlSelf);

Vtop_control_unit___024root::Vtop_control_unit___024root(Vtop_control_unit__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_control_unit___024root___ctor_var_reset(this);
}

void Vtop_control_unit___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_control_unit___024root::~Vtop_control_unit___024root() {
}
