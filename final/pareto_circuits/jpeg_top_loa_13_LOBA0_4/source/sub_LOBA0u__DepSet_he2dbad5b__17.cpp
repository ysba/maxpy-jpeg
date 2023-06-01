// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_loa_13_LOBA0_4.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_loa_13_LOBA0_4__Syms.h"
#include "sub_LOBA0u.h"

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u83__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u83__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u83__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u84__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u84__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u84__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u85__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u85__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u85__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u86__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u86__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u86__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u87__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u87__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u87__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u88__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__u88__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__PVT__u88__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u86__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u86__DOT__u1__0\n"); );
    // Init
    CData/*3:0*/ __PVT__Ah;
    CData/*3:0*/ __PVT__Bh;
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u2__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 3U;
    }
    __PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xcU));
    }
    __PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 0xcU));
    }
    vlSelf->r = ((0x1fU >= (((IData)(vlSelf->__PVT__k1a) 
                             + (IData)(vlSelf->__PVT__k1b)) 
                            - (IData)(6U))) ? (((IData)(__PVT__Ah) 
                                                * (IData)(__PVT__Bh)) 
                                               << (
                                                   ((IData)(vlSelf->__PVT__k1a) 
                                                    + (IData)(vlSelf->__PVT__k1b)) 
                                                   - (IData)(6U)))
                  : 0U);
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u87__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u87__DOT__u1__0\n"); );
    // Init
    CData/*3:0*/ __PVT__Ah;
    CData/*3:0*/ __PVT__Bh;
    // Body
    vlSelf->__PVT__u2__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp))));
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 3U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    __PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u103__DOT__b_temp) 
                             >> 0xcU));
    }
    __PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xcU));
    }
    vlSelf->r = ((0x1fU >= (((IData)(vlSelf->__PVT__k1a) 
                             + (IData)(vlSelf->__PVT__k1b)) 
                            - (IData)(6U))) ? (((IData)(__PVT__Ah) 
                                                * (IData)(__PVT__Bh)) 
                                               << (
                                                   ((IData)(vlSelf->__PVT__k1a) 
                                                    + (IData)(vlSelf->__PVT__k1b)) 
                                                   - (IData)(6U)))
                  : 0U);
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u88__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u88__DOT__u1__0\n"); );
    // Init
    CData/*3:0*/ __PVT__Ah;
    CData/*3:0*/ __PVT__Bh;
    // Body
    vlSelf->__PVT__u2__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp))));
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 3U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    __PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u104__DOT__b_temp) 
                             >> 0xcU));
    }
    __PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xcU));
    }
    vlSelf->r = ((0x1fU >= (((IData)(vlSelf->__PVT__k1a) 
                             + (IData)(vlSelf->__PVT__k1b)) 
                            - (IData)(6U))) ? (((IData)(__PVT__Ah) 
                                                * (IData)(__PVT__Bh)) 
                                               << (
                                                   ((IData)(vlSelf->__PVT__k1a) 
                                                    + (IData)(vlSelf->__PVT__k1b)) 
                                                   - (IData)(6U)))
                  : 0U);
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u89__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u89__DOT__u1__0\n"); );
    // Init
    CData/*3:0*/ __PVT__Ah;
    CData/*3:0*/ __PVT__Bh;
    // Body
    vlSelf->__PVT__u2__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp))));
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 3U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    __PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u105__DOT__b_temp) 
                             >> 0xcU));
    }
    __PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xcU));
    }
    vlSelf->r = ((0x1fU >= (((IData)(vlSelf->__PVT__k1a) 
                             + (IData)(vlSelf->__PVT__k1b)) 
                            - (IData)(6U))) ? (((IData)(__PVT__Ah) 
                                                * (IData)(__PVT__Bh)) 
                                               << (
                                                   ((IData)(vlSelf->__PVT__k1a) 
                                                    + (IData)(vlSelf->__PVT__k1b)) 
                                                   - (IData)(6U)))
                  : 0U);
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u90__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u90__DOT__u1__0\n"); );
    // Init
    CData/*3:0*/ __PVT__Ah;
    CData/*3:0*/ __PVT__Bh;
    // Body
    vlSelf->__PVT__u2__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp))));
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 3U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    __PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u106__DOT__b_temp) 
                             >> 0xcU));
    }
    __PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xcU));
    }
    vlSelf->r = ((0x1fU >= (((IData)(vlSelf->__PVT__k1a) 
                             + (IData)(vlSelf->__PVT__k1b)) 
                            - (IData)(6U))) ? (((IData)(__PVT__Ah) 
                                                * (IData)(__PVT__Bh)) 
                                               << (
                                                   ((IData)(vlSelf->__PVT__k1a) 
                                                    + (IData)(vlSelf->__PVT__k1b)) 
                                                   - (IData)(6U)))
                  : 0U);
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u91__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u91__DOT__u1__0\n"); );
    // Init
    CData/*3:0*/ __PVT__Ah;
    CData/*3:0*/ __PVT__Bh;
    // Body
    vlSelf->__PVT__u2__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp))));
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 3U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    __PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u107__DOT__b_temp) 
                             >> 0xcU));
    }
    __PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xcU));
    }
    vlSelf->r = ((0x1fU >= (((IData)(vlSelf->__PVT__k1a) 
                             + (IData)(vlSelf->__PVT__k1b)) 
                            - (IData)(6U))) ? (((IData)(__PVT__Ah) 
                                                * (IData)(__PVT__Bh)) 
                                               << (
                                                   ((IData)(vlSelf->__PVT__k1a) 
                                                    + (IData)(vlSelf->__PVT__k1b)) 
                                                   - (IData)(6U)))
                  : 0U);
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u92__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u92__DOT__u1__0\n"); );
    // Init
    CData/*3:0*/ __PVT__Ah;
    CData/*3:0*/ __PVT__Bh;
    // Body
    vlSelf->__PVT__u2__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp))));
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 3U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    __PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__b_temp) 
                             >> 0xcU));
    }
    __PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xcU));
    }
    vlSelf->r = ((0x1fU >= (((IData)(vlSelf->__PVT__k1a) 
                             + (IData)(vlSelf->__PVT__k1b)) 
                            - (IData)(6U))) ? (((IData)(__PVT__Ah) 
                                                * (IData)(__PVT__Bh)) 
                                               << (
                                                   ((IData)(vlSelf->__PVT__k1a) 
                                                    + (IData)(vlSelf->__PVT__k1b)) 
                                                   - (IData)(6U)))
                  : 0U);
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u93__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u93__DOT__u1__0\n"); );
    // Init
    CData/*3:0*/ __PVT__Ah;
    CData/*3:0*/ __PVT__Bh;
    // Body
    vlSelf->__PVT__u2__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp))));
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 3U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    __PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u101__DOT__b_temp) 
                             >> 0xcU));
    }
    __PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u86__DOT__a_temp) 
                             >> 0xcU));
    }
    vlSelf->r = ((0x1fU >= (((IData)(vlSelf->__PVT__k1a) 
                             + (IData)(vlSelf->__PVT__k1b)) 
                            - (IData)(6U))) ? (((IData)(__PVT__Ah) 
                                                * (IData)(__PVT__Bh)) 
                                               << (
                                                   ((IData)(vlSelf->__PVT__k1a) 
                                                    + (IData)(vlSelf->__PVT__k1b)) 
                                                   - (IData)(6U)))
                  : 0U);
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u94__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__u94__DOT__u1__0\n"); );
    // Init
    CData/*3:0*/ __PVT__Ah;
    CData/*3:0*/ __PVT__Bh;
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp))));
    vlSelf->__PVT__u2__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobh))) {
        vlSelf->__PVT__k1b = 3U;
    }
    __PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        __PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u100__DOT__a_temp) 
                             >> 0xcU));
    }
    __PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        __PVT__Bh = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__PVT__u102__DOT__b_temp) 
                             >> 0xcU));
    }
    vlSelf->r = ((0x1fU >= (((IData)(vlSelf->__PVT__k1a) 
                             + (IData)(vlSelf->__PVT__k1b)) 
                            - (IData)(6U))) ? (((IData)(__PVT__Ah) 
                                                * (IData)(__PVT__Bh)) 
                                               << (
                                                   ((IData)(vlSelf->__PVT__k1a) 
                                                    + (IData)(vlSelf->__PVT__k1b)) 
                                                   - (IData)(6U)))
                  : 0U);
}
