// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VminiRV.h for the primary calling header

#include "VminiRV__pch.h"
#include "VminiRV__Syms.h"
#include "VminiRV___024root.h"

void VminiRV___024root___ctor_var_reset(VminiRV___024root* vlSelf);

VminiRV___024root::VminiRV___024root(VminiRV__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VminiRV___024root___ctor_var_reset(this);
}

void VminiRV___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VminiRV___024root::~VminiRV___024root() {
}
