// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_eta1_8_LOBA2_4.h for the primary calling header

#include "verilated.h"

#include "sub_LOBA2u.h"

VL_ATTR_COLD void sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u9(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u9\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0x8000U | (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x2000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xefffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x800U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x400U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x80U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x40U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x10U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (8U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (4U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                             >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                             >> 1U)));
}

VL_ATTR_COLD void sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u10(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u10\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0x8000U | (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x800U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x200U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x40U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x20U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xffefU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (8U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (4U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (2U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                             >> 1U)));
}

VL_ATTR_COLD void sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u11(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u11\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0x8000U | (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x2000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x800U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x80U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x20U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x10U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                             >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                             >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (2U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (1U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
}

VL_ATTR_COLD void sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u12(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u12\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0x8000U | (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x2000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x400U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x100U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x20U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x10U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                             >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                             >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (2U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (1U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
}

VL_ATTR_COLD void sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u13(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u13\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0x8000U | (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x2000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xefffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x800U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x200U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x80U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x40U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xffefU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (8U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                             >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (2U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (1U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
}

VL_ATTR_COLD void sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u14(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u14\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0x8000U | (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x800U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x400U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x200U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x100U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x80U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x40U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x20U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x10U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (8U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (4U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (2U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (1U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
}

VL_ATTR_COLD void sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u16(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u16\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0x8000U | (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x2000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xefffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x400U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x100U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x20U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x10U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                             >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                             >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (2U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (1U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
}

VL_ATTR_COLD void sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u17(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u17\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0x8000U | (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x4000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x2000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x800U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x200U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x80U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (0x40U 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xffefU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (8U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = (0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                             >> 1U)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (2U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (1U & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u1__DOT__lobh = (0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh));
}

VL_ATTR_COLD void sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u11__DOT__u1(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___eval_initial__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u11__DOT__u1\n"); );
    // Body
    vlSelf->__PVT__u2__DOT__lobh = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = (0x8000U | (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w));
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
    vlSelf->__PVT__u2__DOT__u1__DOT__w = (0xefffU & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w));
    vlSelf->__PVT__u2__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u2__DOT__lobh)) 
                                    | (0x1000U & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                  >> 1U)));
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
                                          | (0x80U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xff7fU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x40U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xffbfU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x20U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xffdfU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (0x10U 
                                             & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xffefU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (8U & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfff7U & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (4U & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfffbU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (2U & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfffdU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
    vlSelf->__PVT__u2__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w)) 
                                          | (1U & ((IData)(vlSelf->__PVT__u2__DOT__u1__DOT__w) 
                                                   >> 1U)));
    vlSelf->__PVT__u2__DOT__lobh = (0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lobh));
}

VL_ATTR_COLD void sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u11__DOT__u1__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u11__DOT__u1__0\n"); );
    // Body
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
    vlSelf->__PVT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((4U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((5U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((6U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((8U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 8U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 4U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 2U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1b))) {
        vlSelf->__PVT__Bh = 1U;
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = 0x1000U;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0x1000U | 
                                         (0x8000U & (IData)(vlSelf->__PVT__u2__DOT__lower)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0x1000U | 
                                         (0xc000U & (IData)(vlSelf->__PVT__u2__DOT__lower)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0x1000U | 
                                         (0xe000U & (IData)(vlSelf->__PVT__u2__DOT__lower)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xf000U & (IData)(vlSelf->__PVT__u2__DOT__lower));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xf800U & (IData)(vlSelf->__PVT__u2__DOT__lower));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xfc00U & (IData)(vlSelf->__PVT__u2__DOT__lower));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xfe00U & (IData)(vlSelf->__PVT__u2__DOT__lower));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xff00U & (IData)(vlSelf->__PVT__u2__DOT__lower));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xff80U & (IData)(vlSelf->__PVT__u2__DOT__lower));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xffc0U & (IData)(vlSelf->__PVT__u2__DOT__lower));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xffe0U & (IData)(vlSelf->__PVT__u2__DOT__lower));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (7U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xfff0U & (IData)(vlSelf->__PVT__u2__DOT__lower));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (3U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xfff8U & (IData)(vlSelf->__PVT__u2__DOT__lower));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = (1U & (IData)(vlSelf->__PVT__u2__DOT__lower));
        vlSelf->__PVT__u2__DOT__lower = (0xfffcU & (IData)(vlSelf->__PVT__u2__DOT__lower));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1b) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u2__DOT__lower = (0xfffeU & (IData)(vlSelf->__PVT__u2__DOT__lower));
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
        vlSelf->__PVT__Bl = 0U;
    }
    if ((4U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((5U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((6U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((7U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((8U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 0U;
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 8U;
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 4U;
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 2U;
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2b))) {
        vlSelf->__PVT__Bl = 1U;
    }
}

VL_ATTR_COLD void sub_LOBA2u___ctor_var_reset(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(16);
    vlSelf->b = VL_RAND_RESET_I(16);
    vlSelf->r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ah = VL_RAND_RESET_I(4);
    vlSelf->__PVT__Al = VL_RAND_RESET_I(4);
    vlSelf->__PVT__k1a = VL_RAND_RESET_I(4);
    vlSelf->__PVT__k2a = VL_RAND_RESET_I(4);
    vlSelf->__PVT__Bh = VL_RAND_RESET_I(4);
    vlSelf->__PVT__Bl = VL_RAND_RESET_I(4);
    vlSelf->__PVT__k1b = VL_RAND_RESET_I(4);
    vlSelf->__PVT__k2b = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u1__DOT__lobh = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u1__DOT__lobl = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u1__DOT__lower = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u1__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u1__DOT__u2__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u2__DOT__lobh = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u2__DOT__lobl = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u2__DOT__lower = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u2__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u2__DOT__u2__DOT__w = VL_RAND_RESET_I(16);
}
