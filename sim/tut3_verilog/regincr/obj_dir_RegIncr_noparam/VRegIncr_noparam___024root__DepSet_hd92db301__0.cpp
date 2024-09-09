// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegIncr_noparam.h for the primary calling header

#include "VRegIncr_noparam__pch.h"
#include "VRegIncr_noparam__Syms.h"
#include "VRegIncr_noparam___024root.h"

void VRegIncr_noparam___024root____Vdpiexp_RegIncr_noparam__DOT__v__DOT__line_trace_TOP(VRegIncr_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam___024root____Vdpiexp_RegIncr_noparam__DOT__v__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0;
    RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1;
    RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace;
    VL_ZERO_W(4096, __Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace);
    VlWide<128>/*4095:0*/ __Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str;
    VL_ZERO_W(4096, __Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.RegIncr_noparam__DOT__v__DOT__str
                  ,"%x (%x) %x",0,8,vlSymsp->TOP.in_,
                  8,(IData)(vlSymsp->TOP.RegIncr_noparam__DOT__v__DOT__reg_out),
                  8,vlSymsp->TOP.out);
    VL_ASSIGN_W(4096,__Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str, vlSymsp->TOP.RegIncr_noparam__DOT__v__DOT__str);
    VL_ASSIGN_W(4096,__Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace, trace_str);
    RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace[0U];
    RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace[0U] 
        = RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegIncr_noparam___024root___dump_triggers__act(VRegIncr_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VRegIncr_noparam___024root___eval_triggers__act(VRegIncr_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRegIncr_noparam___024root___dump_triggers__act(vlSelf);
    }
#endif
}
