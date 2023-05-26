// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_eta1_9.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_eta1_9__Syms.h"
#include "sub___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__act(sub___024root* vlSelf);
#endif  // VL_DEBUG

void sub___024root___eval_triggers__act(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT__genblk1__DOT__SET_CMD) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT__genblk1__DOT__SET_CMD));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT__genblk1__DOT__SET_CMD) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT__genblk1__DOT__SET_CMD));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT__genblk1__DOT__SET_CMD) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT__genblk1__DOT__SET_CMD));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u3__DOT__genblk1__DOT__SET_CMD) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u3__DOT__genblk1__DOT__SET_CMD));
    vlSelf->__VactTriggered.at(4U) = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT__genblk1__DOT__SET_CMD) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT__genblk1__DOT__SET_CMD));
    vlSelf->__VactTriggered.at(5U) = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT__genblk1__DOT__SET_CMD) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT__genblk1__DOT__SET_CMD));
    vlSelf->__VactTriggered.at(6U) = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT__genblk1__DOT__SET_CMD) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT__genblk1__DOT__SET_CMD));
    vlSelf->__VactTriggered.at(7U) = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u6__DOT__genblk1__DOT__SET_CMD) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u6__DOT__genblk1__DOT__SET_CMD));
    vlSelf->__VactTriggered.at(8U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT__genblk1__DOT__SET_CMD 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT__genblk1__DOT__SET_CMD;
    vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT__genblk1__DOT__SET_CMD 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT__genblk1__DOT__SET_CMD;
    vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT__genblk1__DOT__SET_CMD 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT__genblk1__DOT__SET_CMD;
    vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u3__DOT__genblk1__DOT__SET_CMD 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u3__DOT__genblk1__DOT__SET_CMD;
    vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT__genblk1__DOT__SET_CMD 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT__genblk1__DOT__SET_CMD;
    vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT__genblk1__DOT__SET_CMD 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT__genblk1__DOT__SET_CMD;
    vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT__genblk1__DOT__SET_CMD 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT__genblk1__DOT__SET_CMD;
    vlSelf->__Vtrigrprev__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u6__DOT__genblk1__DOT__SET_CMD 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u6__DOT__genblk1__DOT__SET_CMD;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
        vlSelf->__VactTriggered.at(4U) = 1U;
        vlSelf->__VactTriggered.at(5U) = 1U;
        vlSelf->__VactTriggered.at(6U) = 1U;
        vlSelf->__VactTriggered.at(7U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        sub___024root___dump_triggers__act(vlSelf);
    }
#endif
}
