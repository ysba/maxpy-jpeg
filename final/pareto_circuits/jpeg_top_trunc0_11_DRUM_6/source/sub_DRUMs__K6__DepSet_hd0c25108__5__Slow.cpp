// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_trunc0_11_DRUM_6.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_trunc0_11_DRUM_6__Syms.h"
#include "sub_DRUMs__K6.h"

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u17__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u17__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z17_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z17_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z17_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u18__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u18__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z18_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z18_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z18_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u21__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u21__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z21_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z21_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z21_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u22__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u22__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z22_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z22_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z22_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u23__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u23__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z23_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z23_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z23_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u24__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u24__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z24_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z24_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z24_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u25__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u25__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z25_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z25_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z25_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u26__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u26__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z26_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z26_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z26_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u27__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u27__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z27_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z27_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z27_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u28__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u28__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z28_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z28_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z28_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u31__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u31__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z31_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z31_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z31_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u32__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u32__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z32_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z32_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z32_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u33__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u33__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z33_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z33_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z33_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u34__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u34__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z34_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z34_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z34_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u35__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u35__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z35_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z35_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z35_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u36__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u36__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z36_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z36_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z36_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u37__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u37__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z37_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z37_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z37_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u38__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u38__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z38_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z38_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z38_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}

VL_ATTR_COLD void sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u41__0(sub_DRUMs__K6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_11_DRUM_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K6___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u41__0\n"); );
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
    vlSelf->__VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z41_int)
                                       ? ((IData)(1U) 
                                          + (~ (0xffffU 
                                                & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z41_int)))
                                       : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__Z41_int));
    vlSelf->__PVT__U1__DOT__m = 0U;
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 0U;
    }
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
        vlSelf->__PVT__U1__DOT__m = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k2))) {
        vlSelf->__PVT__U1__DOT__m = 2U;
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
    if ((6U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 3U));
    }
    if ((8U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 4U));
    }
    if ((9U == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 5U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 6U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 7U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 8U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 9U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__U1__DOT__k1))) {
        vlSelf->__PVT__U1__DOT__n = (0xfU & (vlSelf->__VdfgTmp_h738ccf79__0 
                                             >> 0xbU));
    }
    vlSelf->__PVT__r_temp = ((0xfffU & ((0x3fU & ((5U 
                                                   < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                   ? 
                                                  (0x21U 
                                                   | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                      << 1U))
                                                   : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                        * ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0x21U 
                                               | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                  << 1U))
                                            : 0U))) 
                             << (0x1fU & (((5U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(5U)))
                                            : 0U) + 
                                          ((5U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(5U)))
                                            : 0U))));
}
