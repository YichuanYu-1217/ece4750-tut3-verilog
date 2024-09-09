// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegIncr_noparam__pch.h"

//============================================================
// Constructors

VRegIncr_noparam::VRegIncr_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRegIncr_noparam__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , in_{vlSymsp->TOP.in_}
    , out{vlSymsp->TOP.out}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRegIncr_noparam::VRegIncr_noparam(const char* _vcname__)
    : VRegIncr_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRegIncr_noparam::~VRegIncr_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRegIncr_noparam___024root___eval_debug_assertions(VRegIncr_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VRegIncr_noparam___024root___eval_static(VRegIncr_noparam___024root* vlSelf);
void VRegIncr_noparam___024root___eval_initial(VRegIncr_noparam___024root* vlSelf);
void VRegIncr_noparam___024root___eval_settle(VRegIncr_noparam___024root* vlSelf);
void VRegIncr_noparam___024root___eval(VRegIncr_noparam___024root* vlSelf);

void VRegIncr_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegIncr_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegIncr_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRegIncr_noparam___024root___eval_static(&(vlSymsp->TOP));
        VRegIncr_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VRegIncr_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRegIncr_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRegIncr_noparam::eventsPending() { return false; }

uint64_t VRegIncr_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRegIncr_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRegIncr_noparam___024root___eval_final(VRegIncr_noparam___024root* vlSelf);

VL_ATTR_COLD void VRegIncr_noparam::final() {
    VRegIncr_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRegIncr_noparam::hierName() const { return vlSymsp->name(); }
const char* VRegIncr_noparam::modelName() const { return "VRegIncr_noparam"; }
unsigned VRegIncr_noparam::threads() const { return 1; }
void VRegIncr_noparam::prepareClone() const { contextp()->prepareClone(); }
void VRegIncr_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}
