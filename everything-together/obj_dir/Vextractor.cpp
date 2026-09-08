// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vextractor__pch.h"

//============================================================
// Constructors

Vextractor::Vextractor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vextractor__Syms(contextp(), _vcname__, this)}
    , format{vlSymsp->TOP.format}
    , Rd{vlSymsp->TOP.Rd}
    , Rs1{vlSymsp->TOP.Rs1}
    , Rs2{vlSymsp->TOP.Rs2}
    , func3{vlSymsp->TOP.func3}
    , opcode{vlSymsp->TOP.opcode}
    , bit30{vlSymsp->TOP.bit30}
    , inst_in{vlSymsp->TOP.inst_in}
    , immediate{vlSymsp->TOP.immediate}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vextractor::Vextractor(const char* _vcname__)
    : Vextractor(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vextractor::~Vextractor() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vextractor___024root___eval_debug_assertions(Vextractor___024root* vlSelf);
#endif  // VL_DEBUG
void Vextractor___024root___eval_static(Vextractor___024root* vlSelf);
void Vextractor___024root___eval_initial(Vextractor___024root* vlSelf);
void Vextractor___024root___eval_settle(Vextractor___024root* vlSelf);
void Vextractor___024root___eval(Vextractor___024root* vlSelf);

void Vextractor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vextractor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vextractor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vextractor___024root___eval_static(&(vlSymsp->TOP));
        Vextractor___024root___eval_initial(&(vlSymsp->TOP));
        Vextractor___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vextractor___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vextractor::eventsPending() { return false; }

uint64_t Vextractor::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vextractor::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vextractor___024root___eval_final(Vextractor___024root* vlSelf);

VL_ATTR_COLD void Vextractor::final() {
    Vextractor___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vextractor::hierName() const { return vlSymsp->name(); }
const char* Vextractor::modelName() const { return "Vextractor"; }
unsigned Vextractor::threads() const { return 1; }
void Vextractor::prepareClone() const { contextp()->prepareClone(); }
void Vextractor::atClone() const {
    contextp()->threadPoolpOnClone();
}
