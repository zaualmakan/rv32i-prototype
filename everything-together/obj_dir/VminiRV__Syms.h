// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMINIRV__SYMS_H_
#define VERILATED_VMINIRV__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VminiRV.h"

// INCLUDE MODULE CLASSES
#include "VminiRV___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VminiRV__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VminiRV* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VminiRV___024root              TOP;

    // CONSTRUCTORS
    VminiRV__Syms(VerilatedContext* contextp, const char* namep, VminiRV* modelp);
    ~VminiRV__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
