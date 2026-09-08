// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VGPR__pch.h"

//============================================================
// Constructors

VGPR::VGPR(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VGPR__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , write{vlSymsp->TOP.write}
    , Rd{vlSymsp->TOP.Rd}
    , Rs1{vlSymsp->TOP.Rs1}
    , Rs2{vlSymsp->TOP.Rs2}
    , wdata{vlSymsp->TOP.wdata}
    , out1{vlSymsp->TOP.out1}
    , out2{vlSymsp->TOP.out2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VGPR::VGPR(const char* _vcname__)
    : VGPR(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VGPR::~VGPR() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VGPR___024root___eval_debug_assertions(VGPR___024root* vlSelf);
#endif  // VL_DEBUG
void VGPR___024root___eval_static(VGPR___024root* vlSelf);
void VGPR___024root___eval_initial(VGPR___024root* vlSelf);
void VGPR___024root___eval_settle(VGPR___024root* vlSelf);
void VGPR___024root___eval(VGPR___024root* vlSelf);

void VGPR::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VGPR::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VGPR___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VGPR___024root___eval_static(&(vlSymsp->TOP));
        VGPR___024root___eval_initial(&(vlSymsp->TOP));
        VGPR___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VGPR___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VGPR::eventsPending() { return false; }

uint64_t VGPR::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VGPR::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VGPR___024root___eval_final(VGPR___024root* vlSelf);

VL_ATTR_COLD void VGPR::final() {
    VGPR___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VGPR::hierName() const { return vlSymsp->name(); }
const char* VGPR::modelName() const { return "VGPR"; }
unsigned VGPR::threads() const { return 1; }
void VGPR::prepareClone() const { contextp()->prepareClone(); }
void VGPR::atClone() const {
    contextp()->threadPoolpOnClone();
}
