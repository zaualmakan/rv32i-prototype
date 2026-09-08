// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBRANCH_UNIT__SYMS_H_
#define VERILATED_VBRANCH_UNIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VBranch_Unit.h"

// INCLUDE MODULE CLASSES
#include "VBranch_Unit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VBranch_Unit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VBranch_Unit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VBranch_Unit___024root         TOP;

    // CONSTRUCTORS
    VBranch_Unit__Syms(VerilatedContext* contextp, const char* namep, VBranch_Unit* modelp);
    ~VBranch_Unit__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
