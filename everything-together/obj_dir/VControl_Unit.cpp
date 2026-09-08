// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VControl_Unit__pch.h"

//============================================================
// Constructors

VControl_Unit::VControl_Unit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VControl_Unit__Syms(contextp(), _vcname__, this)}
    , opcode{vlSymsp->TOP.opcode}
    , branch_en{vlSymsp->TOP.branch_en}
    , jump{vlSymsp->TOP.jump}
    , mem_store{vlSymsp->TOP.mem_store}
    , mem_load{vlSymsp->TOP.mem_load}
    , reg_write{vlSymsp->TOP.reg_write}
    , alu_src{vlSymsp->TOP.alu_src}
    , wb_sel{vlSymsp->TOP.wb_sel}
    , format{vlSymsp->TOP.format}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VControl_Unit::VControl_Unit(const char* _vcname__)
    : VControl_Unit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VControl_Unit::~VControl_Unit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VControl_Unit___024root___eval_debug_assertions(VControl_Unit___024root* vlSelf);
#endif  // VL_DEBUG
void VControl_Unit___024root___eval_static(VControl_Unit___024root* vlSelf);
void VControl_Unit___024root___eval_initial(VControl_Unit___024root* vlSelf);
void VControl_Unit___024root___eval_settle(VControl_Unit___024root* vlSelf);
void VControl_Unit___024root___eval(VControl_Unit___024root* vlSelf);

void VControl_Unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VControl_Unit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VControl_Unit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VControl_Unit___024root___eval_static(&(vlSymsp->TOP));
        VControl_Unit___024root___eval_initial(&(vlSymsp->TOP));
        VControl_Unit___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VControl_Unit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VControl_Unit::eventsPending() { return false; }

uint64_t VControl_Unit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VControl_Unit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VControl_Unit___024root___eval_final(VControl_Unit___024root* vlSelf);

VL_ATTR_COLD void VControl_Unit::final() {
    VControl_Unit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VControl_Unit::hierName() const { return vlSymsp->name(); }
const char* VControl_Unit::modelName() const { return "VControl_Unit"; }
unsigned VControl_Unit::threads() const { return 1; }
void VControl_Unit::prepareClone() const { contextp()->prepareClone(); }
void VControl_Unit::atClone() const {
    contextp()->threadPoolpOnClone();
}
