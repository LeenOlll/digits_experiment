// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"

class Valu__Syms;

class Valu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(big_up_mode,0,0);
    VL_IN8(big_down_mode,0,0);
    VL_IN8(small_up_mode,0,0);
    VL_IN8(small_down_mode,0,0);
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);
    VL_OUT8(mode,2,0);
    VL_OUT8(result,3,0);
    VL_OUT8(zf,0,0);
    VL_OUT8(of,0,0);
    VL_OUT8(cf,0,0);
    CData/*2:0*/ alu__DOT__mode_set;
    CData/*0:0*/ __Vtrigrprev__TOP__big_down_mode;
    CData/*0:0*/ __Vtrigrprev__TOP__big_up_mode;
    CData/*0:0*/ __Vtrigrprev__TOP__small_down_mode;
    CData/*0:0*/ __Vtrigrprev__TOP__small_up_mode;
    CData/*3:0*/ __Vtrigrprev__TOP__result;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* v__name);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
