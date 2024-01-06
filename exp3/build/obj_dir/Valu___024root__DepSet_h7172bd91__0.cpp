// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu__Syms.h"
#include "Valu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval_triggers__act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((((IData)(vlSelf->big_down_mode) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__big_down_mode)) 
                                        | ((IData)(vlSelf->big_up_mode) 
                                           != (IData)(vlSelf->__Vtrigrprev__TOP__big_up_mode))) 
                                       | ((IData)(vlSelf->small_down_mode) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__small_down_mode))) 
                                      | ((IData)(vlSelf->small_up_mode) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__small_up_mode)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->result) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__result));
    vlSelf->__Vtrigrprev__TOP__big_down_mode = vlSelf->big_down_mode;
    vlSelf->__Vtrigrprev__TOP__big_up_mode = vlSelf->big_up_mode;
    vlSelf->__Vtrigrprev__TOP__small_down_mode = vlSelf->small_down_mode;
    vlSelf->__Vtrigrprev__TOP__small_up_mode = vlSelf->small_up_mode;
    vlSelf->__Vtrigrprev__TOP__result = vlSelf->result;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
