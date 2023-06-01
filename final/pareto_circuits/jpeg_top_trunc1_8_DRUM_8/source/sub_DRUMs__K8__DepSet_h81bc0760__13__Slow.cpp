// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_trunc1_8_DRUM_8.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_trunc1_8_DRUM_8__Syms.h"
#include "sub_DRUMs__K8.h"

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u34__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u34__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z34_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z34_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z34_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u35__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u35__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z35_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z35_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z35_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u36__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u36__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z36_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z36_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z36_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u37__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u37__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z37_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z37_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z37_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u38__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u38__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z38_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z38_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z38_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u41__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u41__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z41_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z41_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z41_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u42__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u42__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z42_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z42_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z42_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u43__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u43__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z43_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z43_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z43_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u44__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u44__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z44_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z44_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z44_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u45__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u45__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z45_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z45_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z45_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u46__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u46__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z46_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z46_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z46_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u47__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u47__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z47_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z47_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z47_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u48__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u48__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z48_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z48_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z48_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u51__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u51__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z51_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z51_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z51_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u52__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u52__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z52_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z52_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z52_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u53__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u53__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z53_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z53_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z53_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u54__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u54__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z54_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z54_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z54_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u55__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u55__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z55_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z55_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z55_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u56__0(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u56__0\n"); );
    // Body
    vlSelf->__PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        vlSelf->__PVT__U1__DOT__k2 = 0U;
    }
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z56_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z56_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__Z56_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x20U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0x10U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & vlSelf->__VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (vlSelf->__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & vlSelf->__VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & vlSelf->__VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & vlSelf->__VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        vlSelf->__PVT__U1__DOT__k1 = 0U;
    }
    vlSelf->__PVT__U1__DOT__n = 0U;
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 3U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 4U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 5U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 6U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 8U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0x3fU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                              >> 9U));
    }
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}
