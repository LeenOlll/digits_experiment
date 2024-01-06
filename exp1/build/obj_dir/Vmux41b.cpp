// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux41b.h"
#include "Vmux41b__Syms.h"

//============================================================
// Constructors

Vmux41b::Vmux41b(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux41b__Syms(contextp(), _vcname__, this)}
    , Y{vlSymsp->TOP.Y}
    , F{vlSymsp->TOP.F}
    , X{vlSymsp->TOP.X}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmux41b::Vmux41b(const char* _vcname__)
    : Vmux41b(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux41b::~Vmux41b() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmux41b___024root___eval_debug_assertions(Vmux41b___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux41b___024root___eval_static(Vmux41b___024root* vlSelf);
void Vmux41b___024root___eval_initial(Vmux41b___024root* vlSelf);
void Vmux41b___024root___eval_settle(Vmux41b___024root* vlSelf);
void Vmux41b___024root___eval(Vmux41b___024root* vlSelf);

void Vmux41b::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux41b::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux41b___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmux41b___024root___eval_static(&(vlSymsp->TOP));
        Vmux41b___024root___eval_initial(&(vlSymsp->TOP));
        Vmux41b___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmux41b___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmux41b::eventsPending() { return false; }

uint64_t Vmux41b::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmux41b::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmux41b___024root___eval_final(Vmux41b___024root* vlSelf);

VL_ATTR_COLD void Vmux41b::final() {
    Vmux41b___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux41b::hierName() const { return vlSymsp->name(); }
const char* Vmux41b::modelName() const { return "Vmux41b"; }
unsigned Vmux41b::threads() const { return 1; }
