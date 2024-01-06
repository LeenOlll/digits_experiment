// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux41b.h for the primary calling header

#ifndef VERILATED_VMUX41B___024ROOT_H_
#define VERILATED_VMUX41B___024ROOT_H_  // guard

#include "verilated.h"

class Vmux41b__Syms;

class Vmux41b___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(Y,1,0);
    VL_OUT8(F,1,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_IN8(X[4],1,0);
    VlUnpacked<CData/*1:0*/, 4> mux41b__DOT__m1__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*1:0*/, 4> mux41b__DOT__m1__DOT__i0__DOT__data_list;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux41b__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux41b___024root(Vmux41b__Syms* symsp, const char* v__name);
    ~Vmux41b___024root();
    VL_UNCOPYABLE(Vmux41b___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
