// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_copyB_12_DRUM_6.h for the primary calling header

#include "verilated.h"

#include "sub_DRUMs__K6.h"

VL_ATTR_COLD void sub_DRUMs__K6___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u11(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_copyB_12_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u11\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__l2 = (0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l2));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = (0x8000U | (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__U1__DOT__l2 = (0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l2));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (0x2000U 
                                             & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__U1__DOT__l2 = (0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l2));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = (0xefffU & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w));
    vlSelf->__PVT__U1__DOT__l2 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x1000U & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (0x800U 
                                             & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__U1__DOT__l2 = (0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l2));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (0x400U 
                                             & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__U1__DOT__l2 = (0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l2));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (0x200U 
                                             & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__U1__DOT__l2 = (0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l2));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (0x100U 
                                             & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__U1__DOT__l2 = (0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l2));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (0x80U 
                                             & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__U1__DOT__l2 = (0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l2));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (0x40U 
                                             & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__U1__DOT__l2 = (0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l2));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (0x20U 
                                             & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__U1__DOT__l2 = (0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l2));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (0x10U 
                                             & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__U1__DOT__l2 = (0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l2));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (8U & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__U1__DOT__l2 = (0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l2));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (4U & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__U1__DOT__l2 = (0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l2));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (2U & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__U1__DOT__l2 = (0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l2));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (1U & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__U1__DOT__l2 = (0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l2));
}

VL_ATTR_COLD void sub_DRUMs__K6___ctor_var_reset(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_copyB_12_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__a = VL_RAND_RESET_I(16);
    vlSelf->__PVT__b = VL_RAND_RESET_I(16);
    vlSelf->__PVT__r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__r_temp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__U1__DOT__k1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__U1__DOT__k2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__U1__DOT__m = VL_RAND_RESET_I(4);
    vlSelf->__PVT__U1__DOT__n = VL_RAND_RESET_I(4);
    vlSelf->__PVT__U1__DOT__l1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__U1__DOT__l2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->__PVT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->__VdfgTmp_h738ccf79__0 = 0;
}
