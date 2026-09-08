// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBranch_Unit__pch.h"

//============================================================
// Constructors

VBranch_Unit::VBranch_Unit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBranch_Unit__Syms(contextp(), _vcname__, this)}
    , func3{vlSymsp->TOP.func3}
    , branch{vlSymsp->TOP.branch}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VBranch_Unit::VBranch_Unit(const char* _vcname__)
    : VBranch_Unit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBranch_Unit::~VBranch_Unit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VBranch_Unit___024root___eval_debug_assertions(VBranch_Unit___024root* vlSelf);
#endif  // VL_DEBUG
void VBranch_Unit___024root___eval_static(VBranch_Unit___024root* vlSelf);
void VBranch_Unit___024root___eval_initial(VBranch_Unit___024root* vlSelf);
void VBranch_Unit___024root___eval_settle(VBranch_Unit___024root* vlSelf);
void VBranch_Unit___024root___eval(VBranch_Unit___024root* vlSelf);

void VBranch_Unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBranch_Unit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBranch_Unit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VBranch_Unit___024root___eval_static(&(vlSymsp->TOP));
        VBranch_Unit___024root___eval_initial(&(vlSymsp->TOP));
        VBranch_Unit___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VBranch_Unit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VBranch_Unit::eventsPending() { return false; }

uint64_t VBranch_Unit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VBranch_Unit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VBranch_Unit___024root___eval_final(VBranch_Unit___024root* vlSelf);

VL_ATTR_COLD void VBranch_Unit::final() {
    VBranch_Unit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBranch_Unit::hierName() const { return vlSymsp->name(); }
const char* VBranch_Unit::modelName() const { return "VBranch_Unit"; }
unsigned VBranch_Unit::threads() const { return 1; }
void VBranch_Unit::prepareClone() const { contextp()->prepareClone(); }
void VBranch_Unit::atClone() const {
    contextp()->threadPoolpOnClone();
}
