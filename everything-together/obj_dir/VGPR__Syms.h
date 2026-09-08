// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VGPR__SYMS_H_
#define VERILATED_VGPR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VGPR.h"

// INCLUDE MODULE CLASSES
#include "VGPR___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VGPR__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VGPR* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VGPR___024root                 TOP;

    // CONSTRUCTORS
    VGPR__Syms(VerilatedContext* contextp, const char* namep, VGPR* modelp);
    ~VGPR__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
