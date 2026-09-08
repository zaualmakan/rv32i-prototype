// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VminiRV.h for the primary calling header

#include "VminiRV__pch.h"
#include "VminiRV___024root.h"

VL_ATTR_COLD void VminiRV___024root___eval_static(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___eval_static\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void VminiRV___024root___eval_initial__TOP(VminiRV___024root* vlSelf);

VL_ATTR_COLD void VminiRV___024root___eval_initial(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___eval_initial\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VminiRV___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VminiRV___024root___eval_initial__TOP(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___eval_initial__TOP\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 4096, 0, std::string{"mem.hex"}
                 ,  &(vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VminiRV___024root___eval_final(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___eval_final\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiRV___024root___dump_triggers__stl(VminiRV___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VminiRV___024root___eval_phase__stl(VminiRV___024root* vlSelf);

VL_ATTR_COLD void VminiRV___024root___eval_settle(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___eval_settle\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VminiRV___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("miniRV.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VminiRV___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiRV___024root___dump_triggers__stl(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___dump_triggers__stl\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VminiRV___024root___stl_sequent__TOP__0(VminiRV___024root* vlSelf);

VL_ATTR_COLD void VminiRV___024root___eval_stl(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___eval_stl\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VminiRV___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> VminiRV__ConstPool__TABLE_hb9d14a42_0;
extern const VlUnpacked<CData/*0:0*/, 128> VminiRV__ConstPool__TABLE_heb6dbbbd_0;
extern const VlUnpacked<CData/*0:0*/, 128> VminiRV__ConstPool__TABLE_h7ff54604_0;
extern const VlUnpacked<CData/*0:0*/, 128> VminiRV__ConstPool__TABLE_hc98f84ba_0;
extern const VlUnpacked<CData/*0:0*/, 128> VminiRV__ConstPool__TABLE_h94d7728a_0;
extern const VlUnpacked<CData/*0:0*/, 128> VminiRV__ConstPool__TABLE_h9f740532_0;
extern const VlUnpacked<CData/*1:0*/, 128> VminiRV__ConstPool__TABLE_h96c15fee_0;
extern const VlUnpacked<CData/*2:0*/, 128> VminiRV__ConstPool__TABLE_h5e4e623f_0;

VL_ATTR_COLD void VminiRV___024root___stl_sequent__TOP__0(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___stl_sequent__TOP__0\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ miniRV__DOT__MyCPU__DOT__reg_out1;
    miniRV__DOT__MyCPU__DOT__reg_out1 = 0;
    IData/*31:0*/ miniRV__DOT__MyCPU__DOT__alu_op_b;
    miniRV__DOT__MyCPU__DOT__alu_op_b = 0;
    CData/*2:0*/ miniRV__DOT__MyCPU__DOT__imm_format;
    miniRV__DOT__MyCPU__DOT__imm_format = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __VdfgRegularize_h495687df_0_2;
    __VdfgRegularize_h495687df_0_2 = 0;
    // Body
    vlSelfRef.pc_wire = vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg;
    vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rd 
        = (0xfU & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                   [(0xfffU & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                               >> 2U))] >> 7U));
    vlSelfRef.__VdfgRegularize_h495687df_0_5 = (1U 
                                                & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                   [
                                                   (0xfffU 
                                                    & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                       >> 2U))] 
                                                   >> 0xcU));
    vlSelfRef.__VdfgRegularize_h495687df_0_6 = (1U 
                                                & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                   [
                                                   (0xfffU 
                                                    & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                       >> 2U))] 
                                                   >> 0xdU));
    vlSelfRef.__VdfgRegularize_h495687df_0_7 = (1U 
                                                & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                   [
                                                   (0xfffU 
                                                    & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                       >> 2U))] 
                                                   >> 0xeU));
    vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs1 
        = (0xfU & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                   [(0xfffU & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                               >> 2U))] >> 0xfU));
    vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs2 
        = (0xfU & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                   [(0xfffU & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                               >> 2U))] >> 0x14U));
    __VdfgRegularize_h495687df_0_2 = (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                      [(0xfffU & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                  >> 2U))] 
                                      >> 0x1fU);
    __Vtableidx1 = (0x7fU & vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                    [(0xfffU & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                >> 2U))]);
    vlSelfRef.miniRV__DOT__MyCPU__DOT__branch_en_signal 
        = VminiRV__ConstPool__TABLE_hb9d14a42_0[__Vtableidx1];
    vlSelfRef.miniRV__DOT__MyCPU__DOT__jump_en = VminiRV__ConstPool__TABLE_heb6dbbbd_0
        [__Vtableidx1];
    vlSelfRef.miniRV__DOT__mem_store_en = VminiRV__ConstPool__TABLE_h7ff54604_0
        [__Vtableidx1];
    vlSelfRef.miniRV__DOT__mem_load_en = VminiRV__ConstPool__TABLE_hc98f84ba_0
        [__Vtableidx1];
    vlSelfRef.miniRV__DOT__MyCPU__DOT__reg_write = 
        VminiRV__ConstPool__TABLE_h94d7728a_0[__Vtableidx1];
    vlSelfRef.miniRV__DOT__MyCPU__DOT__alu_src_sel 
        = VminiRV__ConstPool__TABLE_h9f740532_0[__Vtableidx1];
    vlSelfRef.miniRV__DOT__MyCPU__DOT__wb_sel = VminiRV__ConstPool__TABLE_h96c15fee_0
        [__Vtableidx1];
    miniRV__DOT__MyCPU__DOT__imm_format = VminiRV__ConstPool__TABLE_h5e4e623f_0
        [__Vtableidx1];
    miniRV__DOT__MyCPU__DOT__reg_out1 = ((0U == (IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs1))
                                          ? 0U : vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers
                                         [vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs1]);
    vlSelfRef.miniRV__DOT__store_data = ((0U == (IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs2))
                                          ? 0U : vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers
                                         [vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs2]);
    vlSelfRef.miniRV__DOT__MyCPU__DOT__imm = ((4U & (IData)(miniRV__DOT__MyCPU__DOT__imm_format))
                                               ? ((2U 
                                                   & (IData)(miniRV__DOT__MyCPU__DOT__imm_format))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(miniRV__DOT__MyCPU__DOT__imm_format))
                                                    ? 
                                                   (((- (IData)((IData)(__VdfgRegularize_h495687df_0_2))) 
                                                     << 0x14U) 
                                                    | (((0xff000U 
                                                         & vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                         [
                                                         (0xfffU 
                                                          & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                             >> 2U))]) 
                                                        | (0x800U 
                                                           & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                              [
                                                              (0xfffU 
                                                               & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                                  >> 2U))] 
                                                              >> 9U))) 
                                                       | (0x7feU 
                                                          & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                             [
                                                             (0xfffU 
                                                              & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                                 >> 2U))] 
                                                             >> 0x14U))))
                                                    : 
                                                   (0xfffff000U 
                                                    & vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                    [
                                                    (0xfffU 
                                                     & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                        >> 2U))])))
                                               : ((2U 
                                                   & (IData)(miniRV__DOT__MyCPU__DOT__imm_format))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(miniRV__DOT__MyCPU__DOT__imm_format))
                                                    ? 
                                                   (((- (IData)((IData)(__VdfgRegularize_h495687df_0_2))) 
                                                     << 0xdU) 
                                                    | ((((IData)(__VdfgRegularize_h495687df_0_2) 
                                                         << 0xcU) 
                                                        | (0x800U 
                                                           & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                              [
                                                              (0xfffU 
                                                               & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                                  >> 2U))] 
                                                              << 4U))) 
                                                       | ((0x7e0U 
                                                           & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                              [
                                                              (0xfffU 
                                                               & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                                  >> 2U))] 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                                [
                                                                (0xfffU 
                                                                 & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                                    >> 2U))] 
                                                                >> 7U)))))
                                                    : 
                                                   (((- (IData)((IData)(__VdfgRegularize_h495687df_0_2))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                           [
                                                           (0xfffU 
                                                            & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                               >> 2U))] 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                             [
                                                             (0xfffU 
                                                              & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                                 >> 2U))] 
                                                             >> 7U)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(miniRV__DOT__MyCPU__DOT__imm_format))
                                                    ? 
                                                   (((- (IData)((IData)(__VdfgRegularize_h495687df_0_2))) 
                                                     << 0xcU) 
                                                    | (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                       [
                                                       (0xfffU 
                                                        & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                           >> 2U))] 
                                                       >> 0x14U))
                                                    : 0U)));
    vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_next = ((
                                                   (((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_7)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_6)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_5)
                                                        ? 
                                                       (miniRV__DOT__MyCPU__DOT__reg_out1 
                                                        >= vlSelfRef.miniRV__DOT__store_data)
                                                        : 
                                                       (miniRV__DOT__MyCPU__DOT__reg_out1 
                                                        < vlSelfRef.miniRV__DOT__store_data))
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_5)
                                                        ? 
                                                       VL_GTES_III(32, miniRV__DOT__MyCPU__DOT__reg_out1, vlSelfRef.miniRV__DOT__store_data)
                                                        : 
                                                       VL_LTS_III(32, miniRV__DOT__MyCPU__DOT__reg_out1, vlSelfRef.miniRV__DOT__store_data)))
                                                      : 
                                                     ((~ (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_6)) 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_5)
                                                          ? 
                                                         (miniRV__DOT__MyCPU__DOT__reg_out1 
                                                          != vlSelfRef.miniRV__DOT__store_data)
                                                          : 
                                                         (miniRV__DOT__MyCPU__DOT__reg_out1 
                                                          == vlSelfRef.miniRV__DOT__store_data)))) 
                                                    & (IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__branch_en_signal)) 
                                                   | (IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__jump_en))
                                                   ? 
                                                  (vlSelfRef.miniRV__DOT__MyCPU__DOT__imm 
                                                   + vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg)
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg));
    miniRV__DOT__MyCPU__DOT__alu_op_b = ((IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__alu_src_sel)
                                          ? vlSelfRef.miniRV__DOT__MyCPU__DOT__imm
                                          : vlSelfRef.miniRV__DOT__store_data);
    vlSelfRef.miniRV__DOT__MyCPU__DOT__alu_result = 
        ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_7)
          ? ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_6)
              ? ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_5)
                  ? (miniRV__DOT__MyCPU__DOT__reg_out1 
                     & miniRV__DOT__MyCPU__DOT__alu_op_b)
                  : (miniRV__DOT__MyCPU__DOT__reg_out1 
                     | miniRV__DOT__MyCPU__DOT__alu_op_b))
              : ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_5)
                  ? (miniRV__DOT__MyCPU__DOT__reg_out1 
                     >> (0x1fU & miniRV__DOT__MyCPU__DOT__alu_op_b))
                  : (miniRV__DOT__MyCPU__DOT__reg_out1 
                     ^ miniRV__DOT__MyCPU__DOT__alu_op_b)))
          : ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_6)
              ? ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_5)
                  ? ((miniRV__DOT__MyCPU__DOT__reg_out1 
                      < miniRV__DOT__MyCPU__DOT__alu_op_b)
                      ? 1U : 0U) : (VL_LTS_III(32, miniRV__DOT__MyCPU__DOT__reg_out1, miniRV__DOT__MyCPU__DOT__alu_op_b)
                                     ? 1U : 0U)) : 
             ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_5)
               ? (miniRV__DOT__MyCPU__DOT__reg_out1 
                  << (0x1fU & miniRV__DOT__MyCPU__DOT__alu_op_b))
               : ((1U & ((~ (IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__alu_src_sel)) 
                         & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                            [(0xfffU & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                        >> 2U))] >> 0x1eU)))
                   ? (miniRV__DOT__MyCPU__DOT__reg_out1 
                      - miniRV__DOT__MyCPU__DOT__alu_op_b)
                   : (miniRV__DOT__MyCPU__DOT__reg_out1 
                      + miniRV__DOT__MyCPU__DOT__alu_op_b)))));
}

VL_ATTR_COLD void VminiRV___024root___eval_triggers__stl(VminiRV___024root* vlSelf);

VL_ATTR_COLD bool VminiRV___024root___eval_phase__stl(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___eval_phase__stl\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VminiRV___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VminiRV___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiRV___024root___dump_triggers__act(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___dump_triggers__act\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiRV___024root___dump_triggers__nba(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___dump_triggers__nba\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VminiRV___024root___ctor_var_reset(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___ctor_var_reset\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->pc_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14516268844714100710ull);
    vlSelf->miniRV__DOT__store_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17301740002263375302ull);
    vlSelf->miniRV__DOT__mem_load_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6953176650272829806ull);
    vlSelf->miniRV__DOT__mem_store_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8526002247762145046ull);
    vlSelf->miniRV__DOT__MyCPU__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10924315679946799143ull);
    vlSelf->miniRV__DOT__MyCPU__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6370517687471707887ull);
    vlSelf->miniRV__DOT__MyCPU__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14228862330300740052ull);
    vlSelf->miniRV__DOT__MyCPU__DOT__jump_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12318610747924112801ull);
    vlSelf->miniRV__DOT__MyCPU__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10493659224479359744ull);
    vlSelf->miniRV__DOT__MyCPU__DOT__alu_src_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10533301002231703187ull);
    vlSelf->miniRV__DOT__MyCPU__DOT__wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4092862835090221093ull);
    vlSelf->miniRV__DOT__MyCPU__DOT__pc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9292362053549508295ull);
    vlSelf->miniRV__DOT__MyCPU__DOT__branch_en_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12897134365717513120ull);
    vlSelf->miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11111728529557188926ull);
    vlSelf->miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5782996089672909200ull);
    vlSelf->miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rd = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 107630619101964356ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7451839420594271304ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->miniRV__DOT__PROG_ROM__DOT__rom[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17642574255212998154ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->miniRV__DOT__MAIN_RAM__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 692815346941668515ull);
    }
    vlSelf->__VdfgRegularize_h495687df_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4119050263676651847ull);
    vlSelf->__VdfgRegularize_h495687df_0_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7109853991297637045ull);
    vlSelf->__VdfgRegularize_h495687df_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13274218766982498660ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3495601893105415319ull);
}
