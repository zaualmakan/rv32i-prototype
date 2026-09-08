// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONTROL_UNIT__SYMS_H_
#define VERILATED_VCONTROL_UNIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VControl_Unit.h"

// INCLUDE MODULE CLASSES
#include "VControl_Unit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VControl_Unit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VControl_Unit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VControl_Unit___024root        TOP;

    // CONSTRUCTORS
    VControl_Unit__Syms(VerilatedContext* contextp, const char* namep, VControl_Unit* modelp);
    ~VControl_Unit__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
