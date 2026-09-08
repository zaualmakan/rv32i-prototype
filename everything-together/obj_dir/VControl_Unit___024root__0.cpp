// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VControl_Unit.h for the primary calling header

#include "VControl_Unit__pch.h"

void VControl_Unit___024root___eval_triggers_vec__ico(VControl_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___eval_triggers_vec__ico\n"); );
    VControl_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool VControl_Unit___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 128> VControl_Unit__ConstPool__TABLE_h95acb82f_0;
extern const VlUnpacked<CData/*0:0*/, 128> VControl_Unit__ConstPool__TABLE_h0c8620bb_0;
extern const VlUnpacked<CData/*0:0*/, 128> VControl_Unit__ConstPool__TABLE_h16aa4d84_0;
extern const VlUnpacked<CData/*0:0*/, 128> VControl_Unit__ConstPool__TABLE_hea3a8c46_0;
extern const VlUnpacked<CData/*0:0*/, 128> VControl_Unit__ConstPool__TABLE_h40b6f778_0;
extern const VlUnpacked<CData/*0:0*/, 128> VControl_Unit__ConstPool__TABLE_hd83e1dd0_0;
extern const VlUnpacked<CData/*1:0*/, 128> VControl_Unit__ConstPool__TABLE_h5c1acdf1_0;
extern const VlUnpacked<CData/*2:0*/, 128> VControl_Unit__ConstPool__TABLE_hcbd2fef3_0;

void VControl_Unit___024root___ico_sequent__TOP__0(VControl_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___ico_sequent__TOP__0\n"); );
    VControl_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelfRef.opcode;
    vlSelfRef.branch_en = VControl_Unit__ConstPool__TABLE_h95acb82f_0
        [__Vtableidx1];
    vlSelfRef.jump = VControl_Unit__ConstPool__TABLE_h0c8620bb_0
        [__Vtableidx1];
    vlSelfRef.mem_store = VControl_Unit__ConstPool__TABLE_h16aa4d84_0
        [__Vtableidx1];
    vlSelfRef.mem_load = VControl_Unit__ConstPool__TABLE_hea3a8c46_0
        [__Vtableidx1];
    vlSelfRef.reg_write = VControl_Unit__ConstPool__TABLE_h40b6f778_0
        [__Vtableidx1];
    vlSelfRef.alu_src = VControl_Unit__ConstPool__TABLE_hd83e1dd0_0
        [__Vtableidx1];
    vlSelfRef.wb_sel = VControl_Unit__ConstPool__TABLE_h5c1acdf1_0
        [__Vtableidx1];
    vlSelfRef.format = VControl_Unit__ConstPool__TABLE_hcbd2fef3_0
        [__Vtableidx1];
}

void VControl_Unit___024root___eval_ico(VControl_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___eval_ico\n"); );
    VControl_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vinline__ico_sequent__TOP__0___Vtableidx1;
    __Vinline__ico_sequent__TOP__0___Vtableidx1 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        __Vinline__ico_sequent__TOP__0___Vtableidx1 
            = vlSelfRef.opcode;
        vlSelfRef.branch_en = VControl_Unit__ConstPool__TABLE_h95acb82f_0
            [__Vinline__ico_sequent__TOP__0___Vtableidx1];
        vlSelfRef.jump = VControl_Unit__ConstPool__TABLE_h0c8620bb_0
            [__Vinline__ico_sequent__TOP__0___Vtableidx1];
        vlSelfRef.mem_store = VControl_Unit__ConstPool__TABLE_h16aa4d84_0
            [__Vinline__ico_sequent__TOP__0___Vtableidx1];
        vlSelfRef.mem_load = VControl_Unit__ConstPool__TABLE_hea3a8c46_0
            [__Vinline__ico_sequent__TOP__0___Vtableidx1];
        vlSelfRef.reg_write = VControl_Unit__ConstPool__TABLE_h40b6f778_0
            [__Vinline__ico_sequent__TOP__0___Vtableidx1];
        vlSelfRef.alu_src = VControl_Unit__ConstPool__TABLE_hd83e1dd0_0
            [__Vinline__ico_sequent__TOP__0___Vtableidx1];
        vlSelfRef.wb_sel = VControl_Unit__ConstPool__TABLE_h5c1acdf1_0
            [__Vinline__ico_sequent__TOP__0___Vtableidx1];
        vlSelfRef.format = VControl_Unit__ConstPool__TABLE_hcbd2fef3_0
            [__Vinline__ico_sequent__TOP__0___Vtableidx1];
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VControl_Unit___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VControl_Unit___024root___eval_phase__ico(VControl_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___eval_phase__ico\n"); );
    VControl_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    VControl_Unit___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VControl_Unit___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = VControl_Unit___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        VControl_Unit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VControl_Unit___024root___eval(VControl_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___eval\n"); );
    VControl_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VControl_Unit___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("Control_Unit.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = VControl_Unit___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
}

#ifdef VL_DEBUG
void VControl_Unit___024root___eval_debug_assertions(VControl_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___eval_debug_assertions\n"); );
    VControl_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.opcode & 0x80U)))) {
        Verilated::overWidthError("opcode");
    }
}
#endif  // VL_DEBUG
