// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu___024root.h"

extern const VlUnpacked<CData/*3:0*/, 2048> Valu__ConstPool__TABLE_h88e12f3d_0;

VL_INLINE_OPT void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->B) << 7U) | (((IData)(vlSelf->A) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->alu__DOT__mode_set)));
    vlSelf->result = Valu__ConstPool__TABLE_h88e12f3d_0
        [__Vtableidx1];
}

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Valu___024root___act_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___act_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelf->big_down_mode) {
        vlSelf->alu__DOT__mode_set = (7U & ((IData)(vlSelf->alu__DOT__mode_set) 
                                            - (IData)(2U)));
    } else if (vlSelf->big_up_mode) {
        vlSelf->alu__DOT__mode_set = (7U & ((IData)(2U) 
                                            + (IData)(vlSelf->alu__DOT__mode_set)));
    } else if (vlSelf->small_up_mode) {
        vlSelf->alu__DOT__mode_set = (7U & ((IData)(1U) 
                                            + (IData)(vlSelf->alu__DOT__mode_set)));
    } else if (vlSelf->small_down_mode) {
        vlSelf->alu__DOT__mode_set = (7U & ((IData)(vlSelf->alu__DOT__mode_set) 
                                            - (IData)(1U)));
    }
    vlSelf->mode = vlSelf->alu__DOT__mode_set;
    __Vtableidx1 = (((IData)(vlSelf->B) << 7U) | (((IData)(vlSelf->A) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->alu__DOT__mode_set)));
    vlSelf->result = Valu__ConstPool__TABLE_h88e12f3d_0
        [__Vtableidx1];
}

void Valu___024root___eval_act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        Valu___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Valu___024root___nba_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (((0U == (IData)(vlSelf->alu__DOT__mode_set)) 
         | (1U == (IData)(vlSelf->alu__DOT__mode_set)))) {
        vlSelf->zf = (0U == (IData)(vlSelf->result));
        vlSelf->of = (((1U & ((IData)(vlSelf->A) >> 3U)) 
                       == (1U & ((IData)(vlSelf->B) 
                                 >> 3U))) & ((1U & 
                                              ((IData)(vlSelf->A) 
                                               >> 3U)) 
                                             != (1U 
                                                 & ((IData)(vlSelf->result) 
                                                    >> 3U))));
        vlSelf->cf = vlSelf->of;
    }
}

void Valu___024root___eval_nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Valu___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf);
#endif  // VL_DEBUG
void Valu___024root___eval_triggers__act(Valu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__nba(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Valu___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("alu.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Valu___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Valu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Valu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("alu.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Valu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("alu.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Valu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY((vlSelf->big_up_mode & 0xfeU))) {
        Verilated::overWidthError("big_up_mode");}
    if (VL_UNLIKELY((vlSelf->big_down_mode & 0xfeU))) {
        Verilated::overWidthError("big_down_mode");}
    if (VL_UNLIKELY((vlSelf->small_up_mode & 0xfeU))) {
        Verilated::overWidthError("small_up_mode");}
    if (VL_UNLIKELY((vlSelf->small_down_mode & 0xfeU))) {
        Verilated::overWidthError("small_down_mode");}
}
#endif  // VL_DEBUG
