// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_CONTROL_UNIT__SYMS_H_
#define VERILATED_VTOP_CONTROL_UNIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_control_unit.h"

// INCLUDE MODULE CLASSES
#include "Vtop_control_unit___024root.h"

// SYMS CLASS (contains all model state)
class Vtop_control_unit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_control_unit* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_control_unit___024root    TOP;

    // CONSTRUCTORS
    Vtop_control_unit__Syms(VerilatedContext* contextp, const char* namep, Vtop_control_unit* modelp);
    ~Vtop_control_unit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
