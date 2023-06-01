// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_loa_8_LOBA2_4.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_loa_8_LOBA2_4__Syms.h"
#include "sub_LOBA2u.h"

VL_ATTR_COLD void sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u9__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u9__0\n"); );
    // Body
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
    vlSelf->__PVT__u2__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = (0x8000U | 
                                          (0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x2000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x800U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x400U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x200U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x100U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((8U & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((4U & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((2U & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((1U & vlSymsp->TOP.data_in)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 3U;
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 1U;
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 8U;
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 4U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 2U;
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 9U;
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xcU;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 6U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 3U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 9U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 4U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 2U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 1U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = 0x1323U;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x1323U | 
                                         (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x1323U | 
                                         (0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x1323U | 
                                         (0xe000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x323U | (0xf000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x323U | (0xf800U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x323U | (0xfc00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x123U | (0xfe00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x23U | (0xff00U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x23U | (0xff80U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x23U | (0xffc0U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (3U | (0xffe0U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (3U | (0xfff0U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (3U | (0xfff8U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (3U | (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = (1U | (IData)(vlSelf->__PVT__u1__DOT__lower));
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
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & vlSymsp->TOP.data_in);
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (7U & (vlSymsp->TOP.data_in 
                                   >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (3U & (vlSymsp->TOP.data_in 
                                   >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (1U & (vlSymsp->TOP.data_in 
                                   >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xffU & vlSymsp->TOP.data_in);
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x7fU & vlSymsp->TOP.data_in));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x3fU & vlSymsp->TOP.data_in));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x1fU & vlSymsp->TOP.data_in));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (7U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xfU & vlSymsp->TOP.data_in));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (3U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (7U & vlSymsp->TOP.data_in));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (1U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (3U & vlSymsp->TOP.data_in));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u2__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (1U & vlSymsp->TOP.data_in));
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__u2__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u2__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 3U;
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 1U;
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 8U;
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 4U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 2U;
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 9U;
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xcU;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 6U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 3U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 9U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 4U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 2U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 1U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 3U;
    }
    vlSelf->__PVT__Bl = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & vlSymsp->TOP.data_in);
    }
    if ((4U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (7U & (vlSymsp->TOP.data_in 
                                   >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (3U & (vlSymsp->TOP.data_in 
                                   >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (1U & (vlSymsp->TOP.data_in 
                                   >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
}

VL_ATTR_COLD void sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u10__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u10__0\n"); );
    // Body
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
    vlSelf->__PVT__u2__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = (0x8000U | 
                                          (0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x2000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x800U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x400U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x200U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x100U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 8U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 8U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 8U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 8U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 8U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 8U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 8U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((0x100U 
                                              & vlSymsp->TOP.data_in)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 8U))));
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 1U;
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 8U;
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 4U;
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 2U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 9U;
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xcU;
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 6U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xbU;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 5U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 2U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 9U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 2U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = 0x2591U;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x2591U | 
                                         (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x2591U | 
                                         (0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x591U | (0xe000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x591U | (0xf000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x591U | (0xf800U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x191U | (0xfc00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x191U | (0xfe00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x91U | (0xff00U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x11U | (0xff80U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x11U | (0xffc0U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x11U | (0xffe0U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (1U | (0xfff0U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (1U | (0xfff8U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (1U | (0xfffcU 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = (1U | (IData)(vlSelf->__PVT__u1__DOT__lower));
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
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 8U));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 9U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0xaU));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0xbU));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0xcU));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (7U & (vlSymsp->TOP.data_in 
                                   >> 0xdU));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (3U & (vlSymsp->TOP.data_in 
                                   >> 0xeU));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (1U & (vlSymsp->TOP.data_in 
                                   >> 0xfU));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xffU & (vlSymsp->TOP.data_in 
                                                  >> 8U));
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x7fU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x3fU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (7U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xfU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (3U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (7U & (vlSymsp->TOP.data_in 
                                                  >> 8U)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (1U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (3U & (vlSymsp->TOP.data_in 
                                                  >> 8U)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u2__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (1U & (vlSymsp->TOP.data_in 
                                                  >> 8U)));
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__u2__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u2__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 1U;
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 8U;
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 4U;
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 2U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 9U;
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xcU;
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 6U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xbU;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 5U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 2U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 9U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 2U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 3U;
    }
    vlSelf->__PVT__Bl = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 8U));
    }
    if ((4U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 9U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0xaU));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0xbU));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0xcU));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (7U & (vlSymsp->TOP.data_in 
                                   >> 0xdU));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (3U & (vlSymsp->TOP.data_in 
                                   >> 0xeU));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (1U & (vlSymsp->TOP.data_in 
                                   >> 0xfU));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
}

VL_ATTR_COLD void sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u11__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u11__0\n"); );
    // Body
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
    vlSelf->__PVT__u2__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = (0x8000U | 
                                          (0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x2000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x800U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x400U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x200U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x100U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x800000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 0x10U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x400000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 0x10U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x200000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 0x10U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x100000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 0x10U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x80000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 0x10U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x40000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 0x10U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x20000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 0x10U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((0x10000U 
                                              & vlSymsp->TOP.data_in)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 0x10U))));
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xcU;
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 6U;
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 3U;
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 9U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 4U;
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xaU;
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xdU;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xeU;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 7U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 3U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 1U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = 0x74cU;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x74cU | (0x8000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x74cU | (0xc000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x74cU | (0xe000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x74cU | (0xf000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x74cU | (0xf800U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x34cU | (0xfc00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x14cU | (0xfe00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x4cU | (0xff00U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x4cU | (0xff80U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xcU | (0xffc0U 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xcU | (0xffe0U 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xcU | (0xfff0U 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (4U | (0xfff8U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = (0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower));
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
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x10U));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x11U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x12U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x13U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x14U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (7U & (vlSymsp->TOP.data_in 
                                   >> 0x15U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (3U & (vlSymsp->TOP.data_in 
                                   >> 0x16U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (1U & (vlSymsp->TOP.data_in 
                                   >> 0x17U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xffU & (vlSymsp->TOP.data_in 
                                                  >> 0x10U));
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x7fU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x3fU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (7U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xfU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (3U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (7U & (vlSymsp->TOP.data_in 
                                                  >> 0x10U)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (1U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (3U & (vlSymsp->TOP.data_in 
                                                  >> 0x10U)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u2__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (1U & (vlSymsp->TOP.data_in 
                                                  >> 0x10U)));
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__u2__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u2__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xcU;
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 6U;
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 3U;
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 9U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 4U;
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xaU;
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xdU;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xeU;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 7U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 3U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 1U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 3U;
    }
    vlSelf->__PVT__Bl = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x10U));
    }
    if ((4U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x11U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x12U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x13U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x14U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (7U & (vlSymsp->TOP.data_in 
                                   >> 0x15U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (3U & (vlSymsp->TOP.data_in 
                                   >> 0x16U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (1U & (vlSymsp->TOP.data_in 
                                   >> 0x17U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
}

VL_ATTR_COLD void sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u12__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u12__0\n"); );
    // Body
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
    vlSelf->__PVT__u2__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = (0x8000U | 
                                          (0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x2000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x800U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x400U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x200U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x100U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((8U & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((4U & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((2U & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((1U & vlSymsp->TOP.data_in)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xcU;
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 6U;
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 3U;
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 9U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xcU;
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 6U;
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xbU;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 5U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xaU;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 5U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 2U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 1U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = 0xaccU;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xaccU | (0x8000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xaccU | (0xc000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xaccU | (0xe000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xaccU | (0xf000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x2ccU | (0xf800U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x2ccU | (0xfc00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xccU | (0xfe00U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xccU | (0xff00U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x4cU | (0xff80U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xcU | (0xffc0U 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xcU | (0xffe0U 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xcU | (0xfff0U 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (4U | (0xfff8U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = (0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower));
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
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & vlSymsp->TOP.data_in);
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (7U & (vlSymsp->TOP.data_in 
                                   >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (3U & (vlSymsp->TOP.data_in 
                                   >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (1U & (vlSymsp->TOP.data_in 
                                   >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xffU & vlSymsp->TOP.data_in);
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x7fU & vlSymsp->TOP.data_in));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x3fU & vlSymsp->TOP.data_in));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x1fU & vlSymsp->TOP.data_in));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (7U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xfU & vlSymsp->TOP.data_in));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (3U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (7U & vlSymsp->TOP.data_in));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (1U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (3U & vlSymsp->TOP.data_in));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u2__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (1U & vlSymsp->TOP.data_in));
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__u2__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u2__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xcU;
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 6U;
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 3U;
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 9U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xcU;
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 6U;
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xbU;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 5U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xaU;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 5U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 2U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 1U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 3U;
    }
    vlSelf->__PVT__Bl = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & vlSymsp->TOP.data_in);
    }
    if ((4U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (7U & (vlSymsp->TOP.data_in 
                                   >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (3U & (vlSymsp->TOP.data_in 
                                   >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (1U & (vlSymsp->TOP.data_in 
                                   >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
}

VL_ATTR_COLD void sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u13__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u13__0\n"); );
    // Body
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
    vlSelf->__PVT__u2__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = (0x8000U | 
                                          (0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x2000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x800U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x400U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x200U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x100U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 8U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 8U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 8U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 8U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 8U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 8U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 8U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((0x100U 
                                              & vlSymsp->TOP.data_in)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 8U))));
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 4U;
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xaU;
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xdU;
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 6U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 3U;
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 9U;
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 4U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xaU;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 5U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0xaU;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 5U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 2U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 1U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = 0x1534U;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x1534U | 
                                         (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x1534U | 
                                         (0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x1534U | 
                                         (0xe000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x534U | (0xf000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x534U | (0xf800U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x134U | (0xfc00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x134U | (0xfe00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x34U | (0xff00U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x34U | (0xff80U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x34U | (0xffc0U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x14U | (0xffe0U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (4U | (0xfff0U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (4U | (0xfff8U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = (0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower));
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
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 8U));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 9U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0xaU));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0xbU));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0xcU));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (7U & (vlSymsp->TOP.data_in 
                                   >> 0xdU));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (3U & (vlSymsp->TOP.data_in 
                                   >> 0xeU));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (1U & (vlSymsp->TOP.data_in 
                                   >> 0xfU));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xffU & (vlSymsp->TOP.data_in 
                                                  >> 8U));
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x7fU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x3fU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (7U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xfU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 8U)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (3U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (7U & (vlSymsp->TOP.data_in 
                                                  >> 8U)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (1U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (3U & (vlSymsp->TOP.data_in 
                                                  >> 8U)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u2__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (1U & (vlSymsp->TOP.data_in 
                                                  >> 8U)));
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__u2__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u2__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 4U;
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xaU;
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xdU;
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 6U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 3U;
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 9U;
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 4U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xaU;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 5U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0xaU;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 5U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 2U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 1U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 3U;
    }
    vlSelf->__PVT__Bl = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 8U));
    }
    if ((4U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 9U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0xaU));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0xbU));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0xcU));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (7U & (vlSymsp->TOP.data_in 
                                   >> 0xdU));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (3U & (vlSymsp->TOP.data_in 
                                   >> 0xeU));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (1U & (vlSymsp->TOP.data_in 
                                   >> 0xfU));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
}

VL_ATTR_COLD void sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u14__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u14__0\n"); );
    // Body
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
    vlSelf->__PVT__u2__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = (0x8000U | 
                                          (0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x2000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x800U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x400U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x200U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x100U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x800000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 0x10U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x400000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 0x10U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x200000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 0x10U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x100000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP.data_in 
                                                   >> 0x10U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x80000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 0x10U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x40000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 0x10U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x20000U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 0x10U))));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((0x10000U 
                                              & vlSymsp->TOP.data_in)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (vlSymsp->TOP.data_in 
                                                >> 0x10U))));
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 2U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = 0x2000U;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x2000U | 
                                         (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x2000U | 
                                         (0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xe000U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xf000U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xf800U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xfc00U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xfe00U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xff00U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xff80U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xffc0U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xffe0U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xfff0U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xfff8U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = (0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower));
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
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x10U));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x11U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x12U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x13U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x14U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (7U & (vlSymsp->TOP.data_in 
                                   >> 0x15U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (3U & (vlSymsp->TOP.data_in 
                                   >> 0x16U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (1U & (vlSymsp->TOP.data_in 
                                   >> 0x17U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xffU & (vlSymsp->TOP.data_in 
                                                  >> 0x10U));
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x7fU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x3fU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (7U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xfU & 
                                            (vlSymsp->TOP.data_in 
                                             >> 0x10U)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (3U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (7U & (vlSymsp->TOP.data_in 
                                                  >> 0x10U)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (1U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (3U & (vlSymsp->TOP.data_in 
                                                  >> 0x10U)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u2__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (1U & (vlSymsp->TOP.data_in 
                                                  >> 0x10U)));
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__u2__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u2__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 2U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 3U;
    }
    vlSelf->__PVT__Bl = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x10U));
    }
    if ((4U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x11U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x12U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x13U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 0x14U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (7U & (vlSymsp->TOP.data_in 
                                   >> 0x15U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (3U & (vlSymsp->TOP.data_in 
                                   >> 0x16U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (1U & (vlSymsp->TOP.data_in 
                                   >> 0x17U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
}

VL_ATTR_COLD void sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u15__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u15__0\n"); );
    // Body
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
    vlSelf->__PVT__u2__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = (0x8000U | 
                                          (0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x2000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x800U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x400U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x200U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x100U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((8U & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((4U & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (((2U & vlSymsp->TOP.data_in)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | ((1U & vlSymsp->TOP.data_in)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & vlSymsp->TOP.data_in)));
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = 2U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = 0x2000U;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x2000U | 
                                         (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0x2000U | 
                                         (0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xe000U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xf000U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xf800U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xfc00U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xfe00U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xff00U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xff80U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xffc0U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xffe0U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xfff0U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xfff8U & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = (0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = (0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower));
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
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & vlSymsp->TOP.data_in);
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (7U & (vlSymsp->TOP.data_in 
                                   >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (3U & (vlSymsp->TOP.data_in 
                                   >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = (1U & (vlSymsp->TOP.data_in 
                                   >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xffU & vlSymsp->TOP.data_in);
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xffU & vlSymsp->TOP.data_in));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x7fU & vlSymsp->TOP.data_in));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x3fU & vlSymsp->TOP.data_in));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0x1fU & vlSymsp->TOP.data_in));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (7U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (0xfU & vlSymsp->TOP.data_in));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (3U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (7U & vlSymsp->TOP.data_in));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (1U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (3U & vlSymsp->TOP.data_in));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u2__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lower)) 
                                         | (1U & vlSymsp->TOP.data_in));
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__u2__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u2__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__u2__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u2__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u2__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u2__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u2__DOT__lower))));
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 8U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 4U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = 2U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u2__DOT__lobl))) {
        vlSelf->__PVT__k2b = 3U;
    }
    vlSelf->__PVT__Bl = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & vlSymsp->TOP.data_in);
    }
    if ((4U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (0xfU & (vlSymsp->TOP.data_in 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (7U & (vlSymsp->TOP.data_in 
                                   >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (3U & (vlSymsp->TOP.data_in 
                                   >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = (1U & (vlSymsp->TOP.data_in 
                                   >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
}
