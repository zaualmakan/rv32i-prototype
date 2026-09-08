// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VEXTRACTOR__SYMS_H_
#define VERILATED_VEXTRACTOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vextractor.h"

// INCLUDE MODULE CLASSES
#include "Vextractor___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vextractor__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vextractor* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vextractor___024root           TOP;

    // CONSTRUCTORS
    Vextractor__Syms(VerilatedContext* contextp, const char* namep, Vextractor* modelp);
    ~Vextractor__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
