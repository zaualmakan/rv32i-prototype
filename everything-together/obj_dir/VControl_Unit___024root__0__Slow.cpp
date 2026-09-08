// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VControl_Unit.h for the primary calling header

#include "VControl_Unit__pch.h"

VL_ATTR_COLD void VControl_Unit___024root___eval_static(VControl_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___eval_static\n"); );
    VControl_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VControl_Unit___024root___eval_initial(VControl_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___eval_initial\n"); );
    VControl_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VControl_Unit___024root___eval_final(VControl_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___eval_final\n"); );
    VControl_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VControl_Unit___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VControl_Unit___024root___eval_phase__stl(VControl_Unit___024root* vlSelf);

VL_ATTR_COLD void VControl_Unit___024root___eval_settle(VControl_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___eval_settle\n"); );
    VControl_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VControl_Unit___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("Control_Unit.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VControl_Unit___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VControl_Unit___024root___eval_triggers_vec__stl(VControl_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___eval_triggers_vec__stl\n"); );
    VControl_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VControl_Unit___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VControl_Unit___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VControl_Unit___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VControl_Unit___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void VControl_Unit___024root___eval_stl(VControl_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___eval_stl\n"); );
    VControl_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vinline__ico_sequent__TOP__0___Vtableidx1;
    __Vinline__ico_sequent__TOP__0___Vtableidx1 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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

VL_ATTR_COLD bool VControl_Unit___024root___eval_phase__stl(VControl_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___eval_phase__stl\n"); );
    VControl_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VControl_Unit___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VControl_Unit___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VControl_Unit___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VControl_Unit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VControl_Unit___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VControl_Unit___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VControl_Unit___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VControl_Unit___024root___ctor_var_reset(VControl_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControl_Unit___024root___ctor_var_reset\n"); );
    VControl_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17409787017080135397ull);
    vlSelf->branch_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11476304438771413784ull);
    vlSelf->jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8906078629849262824ull);
    vlSelf->mem_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2518197924291329038ull);
    vlSelf->mem_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11882663955118719603ull);
    vlSelf->reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12827810274228629793ull);
    vlSelf->alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15699334139220014808ull);
    vlSelf->wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3722929165396573202ull);
    vlSelf->format = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2833833415272749956ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
}
