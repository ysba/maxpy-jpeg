// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_copyB_13_LOBA0_4.h for the primary calling header

#include "verilated.h"

#include "sub_dct.h"

VL_ATTR_COLD void sub_dct___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__0(sub_dct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_copyB_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              sub_dct___stl_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__0\n"); );
    // Body
    vlSelf->__PVT__buf_Z11 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_11 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z11 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z11));
    vlSelf->__PVT__buf_Z12 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_12 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z12 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z12));
    vlSelf->__PVT__buf_Z13 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_13 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z13 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z13));
    vlSelf->__PVT__buf_Z14 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_14 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z14 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z14));
    vlSelf->__PVT__buf_Z15 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_15 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z15 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z15));
    vlSelf->__PVT__buf_Z16 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_16 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z16 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z16));
    vlSelf->__PVT__buf_Z17 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_17 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z17 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z17));
    vlSelf->__PVT__buf_Z18 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_18 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z18 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z18));
    vlSelf->__PVT__buf_Z21 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_21 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z21 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z21));
    vlSelf->__PVT__buf_Z22 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_22 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z22 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z22));
    vlSelf->__PVT__buf_Z23 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_23 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z23 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z23));
    vlSelf->__PVT__buf_Z24 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_24 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z24 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z24));
    vlSelf->__PVT__buf_Z25 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_25 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z25 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z25));
    vlSelf->__PVT__buf_Z26 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_26 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z26 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z26));
    vlSelf->__PVT__buf_Z27 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_27 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z27 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z27));
    vlSelf->__PVT__buf_Z28 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_28 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z28 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z28));
    vlSelf->__PVT__buf_Z31 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_31 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z31 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z31));
    vlSelf->__PVT__buf_Z32 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_32 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z32 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z32));
    vlSelf->__PVT__buf_Z33 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_33 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z33 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z33));
    vlSelf->__PVT__buf_Z34 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_34 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z34 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z34));
    vlSelf->__PVT__buf_Z35 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_35 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z35 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z35));
    vlSelf->__PVT__buf_Z36 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_36 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z36 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z36));
    vlSelf->__PVT__buf_Z37 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_37 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z37 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z37));
    vlSelf->__PVT__buf_Z38 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_38 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z38 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z38));
    vlSelf->__PVT__buf_Z41 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_41 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z41 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z41));
    vlSelf->__PVT__buf_Z42 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_42 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z42 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z42));
    vlSelf->__PVT__buf_Z43 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_43 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z43 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z43));
    vlSelf->__PVT__buf_Z44 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_44 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z44 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z44));
    vlSelf->__PVT__buf_Z45 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_45 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z45 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z45));
    vlSelf->__PVT__buf_Z46 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_46 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z46 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z46));
    vlSelf->__PVT__buf_Z47 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_47 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z47 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z47));
    vlSelf->__PVT__buf_Z48 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_48 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z48 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z48));
    vlSelf->__PVT__buf_Z51 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_51 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z51 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z51));
    vlSelf->__PVT__buf_Z52 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_52 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z52 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z52));
    vlSelf->__PVT__buf_Z53 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_53 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z53 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z53));
    vlSelf->__PVT__buf_Z54 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_54 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z54 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z54));
    vlSelf->__PVT__buf_Z55 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_55 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z55 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z55));
    vlSelf->__PVT__buf_Z56 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_56 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z56 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z56));
    vlSelf->__PVT__buf_Z57 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_57 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z57 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z57));
    vlSelf->__PVT__buf_Z58 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_58 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z58 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z58));
    vlSelf->__PVT__buf_Z61 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_61 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z61 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z61));
    vlSelf->__PVT__buf_Z62 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_62 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z62 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z62));
    vlSelf->__PVT__buf_Z63 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_63 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z63 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z63));
    vlSelf->__PVT__buf_Z64 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_64 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z64 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z64));
    vlSelf->__PVT__buf_Z65 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_65 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z65 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z65));
    vlSelf->__PVT__buf_Z66 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_66 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z66 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z66));
    vlSelf->__PVT__buf_Z67 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_67 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z67 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z67));
    vlSelf->__PVT__buf_Z68 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_68 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z68 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z68));
    vlSelf->__PVT__buf_Z71 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_71 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z71 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z71));
    vlSelf->__PVT__buf_Z72 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_72 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z72 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z72));
    vlSelf->__PVT__buf_Z73 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_73 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z73 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z73));
    vlSelf->__PVT__buf_Z74 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_74 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z74 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z74));
    vlSelf->__PVT__buf_Z75 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_75 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z75 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z75));
    vlSelf->__PVT__buf_Z76 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_76 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z76 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z76));
    vlSelf->__PVT__buf_Z77 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_77 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z77 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z77));
    vlSelf->__PVT__buf_Z78 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_78 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z78 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z78));
    vlSelf->__PVT__buf_Z81 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_81 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z81 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z81));
    vlSelf->__PVT__buf_Z82 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_82 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z82 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z82));
    vlSelf->__PVT__buf_Z83 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_83 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z83 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z83));
    vlSelf->__PVT__buf_Z84 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_84 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z84 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z84));
    vlSelf->__PVT__buf_Z85 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_85 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z85 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z85));
    vlSelf->__PVT__buf_Z86 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_86 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z86 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z86));
    vlSelf->__PVT__buf_Z87 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_87 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z87 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z87));
    vlSelf->__PVT__buf_Z88 = ((0x7ffe000U & (((vlSelf->__PVT__Z_temp_88 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Z88 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Z88));
    vlSelf->__PVT__buf_Y21 = ((0x1ffe000U & (((vlSelf->__PVT__Y_temp_21 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Y21 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Y21));
    vlSelf->__PVT__buf_Y31 = ((0x1ffe000U & (((vlSelf->__PVT__Y_temp_31 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Y31 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Y31));
    vlSelf->__PVT__buf_Y41 = ((0x1ffe000U & (((vlSelf->__PVT__Y_temp_41 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Y41 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Y41));
    vlSelf->__PVT__buf_Y51 = ((0x1ffe000U & (((vlSelf->__PVT__Y_temp_51 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Y51 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Y51));
    vlSelf->__PVT__buf_Y61 = ((0x1ffe000U & (((vlSelf->__PVT__Y_temp_61 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Y61 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Y61));
    vlSelf->__PVT__buf_Y71 = ((0x1ffe000U & (((vlSelf->__PVT__Y_temp_71 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Y71 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Y71));
    vlSelf->__PVT__buf_Y81 = ((0x1ffe000U & (((vlSelf->__PVT__Y_temp_81 
                                               >> 0xdU) 
                                              + (vlSelf->__PVT__Y81 
                                                 >> 0xdU)) 
                                             << 0xdU)) 
                              | (0x1fffU & vlSelf->__PVT__Y81));
    vlSelf->__VdfgTmp_h7f1a2df4__0 = ((0x2000U & vlSelf->__PVT__Y2_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y2_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y2_mul_input)));
    vlSelf->__VdfgTmp_h3a975308__0 = ((0x2000U & vlSelf->__PVT__Y3_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y3_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y3_mul_input)));
    vlSelf->__VdfgTmp_ha58a2781__0 = ((0x2000U & vlSelf->__PVT__Y4_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y4_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y4_mul_input)));
    vlSelf->__VdfgTmp_h4c5300e6__0 = ((0x2000U & vlSelf->__PVT__Y5_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y5_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y5_mul_input)));
    vlSelf->__VdfgTmp_hb6088b02__0 = ((0x2000U & vlSelf->__PVT__Y6_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y6_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y6_mul_input)));
    vlSelf->__VdfgTmp_hde2d8c69__0 = ((0x2000U & vlSelf->__PVT__Y7_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y7_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y7_mul_input)));
    vlSelf->__VdfgTmp_hc686e7df__0 = ((0x2000U & vlSelf->__PVT__Y8_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y8_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y8_mul_input)));
    vlSelf->__PVT__u86__DOT__a_temp = (0xffffU & ((0x8000U 
                                                   & vlSelf->__PVT__Y11_final_4)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & vlSelf->__PVT__Y11_final_4)))
                                                   : 
                                                  (0xffffU 
                                                   & vlSelf->__PVT__Y11_final_4)));
    vlSelf->__PVT__u100__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y21_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y21_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y21_final_2)));
    vlSelf->__PVT__u102__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y31_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y31_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y31_final_2)));
    vlSelf->__PVT__u110__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y41_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y41_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y41_final_2)));
    vlSelf->__PVT__u118__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y51_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y51_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y51_final_2)));
    vlSelf->__PVT__u126__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y61_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y61_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y61_final_2)));
    vlSelf->__PVT__u134__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y71_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y71_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y71_final_2)));
    vlSelf->__PVT__u142__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y81_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y81_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y81_final_2)));
    vlSelf->__Vcellinp__u102____pinNumber2 = ((0x2000U 
                                               & (IData)(vlSelf->__PVT__Ti1))
                                               ? (0xc000U 
                                                  | (IData)(vlSelf->__PVT__Ti1))
                                               : (IData)(vlSelf->__PVT__Ti1));
    vlSelf->__VdfgTmp_hd358cecd__0 = ((0x2000U & vlSelf->__PVT__Ti2_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti2_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti2_mul_input)));
    vlSelf->__VdfgTmp_hb5d3819f__0 = ((0x2000U & vlSelf->__PVT__Ti3_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti3_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti3_mul_input)));
    vlSelf->__VdfgTmp_h6b20eb67__0 = ((0x2000U & vlSelf->__PVT__Ti4_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti4_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti4_mul_input)));
    vlSelf->__VdfgTmp_h223a61ce__0 = ((0x2000U & vlSelf->__PVT__Ti5_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti5_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti5_mul_input)));
    vlSelf->__VdfgTmp_h216275e3__0 = ((0x2000U & vlSelf->__PVT__Ti6_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti6_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti6_mul_input)));
    vlSelf->__VdfgTmp_h4f997fe4__0 = ((0x2000U & vlSelf->__PVT__Ti7_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti7_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti7_mul_input)));
    vlSelf->__VdfgTmp_h38cce513__0 = ((0x2000U & vlSelf->__PVT__Ti8_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti8_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti8_mul_input)));
    vlSelf->__PVT__u79__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_h7f1a2df4__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_h7f1a2df4__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_h7f1a2df4__0))));
    vlSelf->__PVT__u80__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_h3a975308__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_h3a975308__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_h3a975308__0))));
    vlSelf->__PVT__u81__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_ha58a2781__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_ha58a2781__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_ha58a2781__0))));
    vlSelf->__PVT__u82__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_h4c5300e6__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_h4c5300e6__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_h4c5300e6__0))));
    vlSelf->__PVT__u83__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_hb6088b02__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_hb6088b02__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_hb6088b02__0))));
    vlSelf->__PVT__u84__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_hde2d8c69__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_hde2d8c69__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_hde2d8c69__0))));
    vlSelf->__PVT__u85__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_hc686e7df__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_hc686e7df__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_hc686e7df__0))));
    vlSelf->__PVT__u102__DOT__b_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & (IData)(vlSelf->__Vcellinp__u102____pinNumber2))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                                    : (IData)(vlSelf->__Vcellinp__u102____pinNumber2)));
    vlSelf->__PVT__u103__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hd358cecd__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_hd358cecd__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_hd358cecd__0))));
    vlSelf->__PVT__u104__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_hb5d3819f__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_hb5d3819f__0))));
    vlSelf->__PVT__u105__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h6b20eb67__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h6b20eb67__0))));
    vlSelf->__PVT__u106__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h223a61ce__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h223a61ce__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h223a61ce__0))));
    vlSelf->__PVT__u107__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h216275e3__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h216275e3__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h216275e3__0))));
    vlSelf->__PVT__u100__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h4f997fe4__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h4f997fe4__0))));
    vlSelf->__PVT__u101__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h38cce513__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h38cce513__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h38cce513__0))));
}

VL_ATTR_COLD void sub_dct___ctor_var_reset(sub_dct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_copyB_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              sub_dct___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(8);
    vlSelf->Z11_final = VL_RAND_RESET_I(11);
    vlSelf->Z12_final = VL_RAND_RESET_I(11);
    vlSelf->Z13_final = VL_RAND_RESET_I(11);
    vlSelf->Z14_final = VL_RAND_RESET_I(11);
    vlSelf->Z15_final = VL_RAND_RESET_I(11);
    vlSelf->Z16_final = VL_RAND_RESET_I(11);
    vlSelf->Z17_final = VL_RAND_RESET_I(11);
    vlSelf->Z18_final = VL_RAND_RESET_I(11);
    vlSelf->Z21_final = VL_RAND_RESET_I(11);
    vlSelf->Z22_final = VL_RAND_RESET_I(11);
    vlSelf->Z23_final = VL_RAND_RESET_I(11);
    vlSelf->Z24_final = VL_RAND_RESET_I(11);
    vlSelf->Z25_final = VL_RAND_RESET_I(11);
    vlSelf->Z26_final = VL_RAND_RESET_I(11);
    vlSelf->Z27_final = VL_RAND_RESET_I(11);
    vlSelf->Z28_final = VL_RAND_RESET_I(11);
    vlSelf->Z31_final = VL_RAND_RESET_I(11);
    vlSelf->Z32_final = VL_RAND_RESET_I(11);
    vlSelf->Z33_final = VL_RAND_RESET_I(11);
    vlSelf->Z34_final = VL_RAND_RESET_I(11);
    vlSelf->Z35_final = VL_RAND_RESET_I(11);
    vlSelf->Z36_final = VL_RAND_RESET_I(11);
    vlSelf->Z37_final = VL_RAND_RESET_I(11);
    vlSelf->Z38_final = VL_RAND_RESET_I(11);
    vlSelf->Z41_final = VL_RAND_RESET_I(11);
    vlSelf->Z42_final = VL_RAND_RESET_I(11);
    vlSelf->Z43_final = VL_RAND_RESET_I(11);
    vlSelf->Z44_final = VL_RAND_RESET_I(11);
    vlSelf->Z45_final = VL_RAND_RESET_I(11);
    vlSelf->Z46_final = VL_RAND_RESET_I(11);
    vlSelf->Z47_final = VL_RAND_RESET_I(11);
    vlSelf->Z48_final = VL_RAND_RESET_I(11);
    vlSelf->Z51_final = VL_RAND_RESET_I(11);
    vlSelf->Z52_final = VL_RAND_RESET_I(11);
    vlSelf->Z53_final = VL_RAND_RESET_I(11);
    vlSelf->Z54_final = VL_RAND_RESET_I(11);
    vlSelf->Z55_final = VL_RAND_RESET_I(11);
    vlSelf->Z56_final = VL_RAND_RESET_I(11);
    vlSelf->Z57_final = VL_RAND_RESET_I(11);
    vlSelf->Z58_final = VL_RAND_RESET_I(11);
    vlSelf->Z61_final = VL_RAND_RESET_I(11);
    vlSelf->Z62_final = VL_RAND_RESET_I(11);
    vlSelf->Z63_final = VL_RAND_RESET_I(11);
    vlSelf->Z64_final = VL_RAND_RESET_I(11);
    vlSelf->Z65_final = VL_RAND_RESET_I(11);
    vlSelf->Z66_final = VL_RAND_RESET_I(11);
    vlSelf->Z67_final = VL_RAND_RESET_I(11);
    vlSelf->Z68_final = VL_RAND_RESET_I(11);
    vlSelf->Z71_final = VL_RAND_RESET_I(11);
    vlSelf->Z72_final = VL_RAND_RESET_I(11);
    vlSelf->Z73_final = VL_RAND_RESET_I(11);
    vlSelf->Z74_final = VL_RAND_RESET_I(11);
    vlSelf->Z75_final = VL_RAND_RESET_I(11);
    vlSelf->Z76_final = VL_RAND_RESET_I(11);
    vlSelf->Z77_final = VL_RAND_RESET_I(11);
    vlSelf->Z78_final = VL_RAND_RESET_I(11);
    vlSelf->Z81_final = VL_RAND_RESET_I(11);
    vlSelf->Z82_final = VL_RAND_RESET_I(11);
    vlSelf->Z83_final = VL_RAND_RESET_I(11);
    vlSelf->Z84_final = VL_RAND_RESET_I(11);
    vlSelf->Z85_final = VL_RAND_RESET_I(11);
    vlSelf->Z86_final = VL_RAND_RESET_I(11);
    vlSelf->Z87_final = VL_RAND_RESET_I(11);
    vlSelf->Z88_final = VL_RAND_RESET_I(11);
    vlSelf->output_enable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__T1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__T21 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__T22 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__T23 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__T24 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__T25 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__T26 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__T27 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__T28 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__T31 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__T32 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__T33 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__T34 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__T52 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti21 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti22 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti23 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti24 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti25 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti26 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti27 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti28 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti31 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti32 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti33 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti34 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti52 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti1 = VL_RAND_RESET_I(14);
    vlSelf->__PVT__Y2_mul_input = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y3_mul_input = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y4_mul_input = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y5_mul_input = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y6_mul_input = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y7_mul_input = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y8_mul_input = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti2_mul_input = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti3_mul_input = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti4_mul_input = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti5_mul_input = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti6_mul_input = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti7_mul_input = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Ti8_mul_input = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y_temp_11 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y_temp_21 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y_temp_31 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y_temp_41 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y_temp_51 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y_temp_61 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y_temp_71 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y_temp_81 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y11 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y21 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y31 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y41 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y51 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y61 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y71 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y81 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__buf_Y21 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__buf_Y31 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__buf_Y41 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__buf_Y51 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__buf_Y61 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__buf_Y71 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__buf_Y81 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Z_temp_11 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_12 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_13 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_14 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_15 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_16 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_17 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_18 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_21 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_22 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_23 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_24 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_25 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_26 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_27 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_28 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_31 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_32 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_33 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_34 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_35 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_36 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_37 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_38 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_41 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_42 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_43 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_44 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_45 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_46 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_47 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_48 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_51 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_52 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_53 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_54 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_55 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_56 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_57 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_58 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_61 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_62 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_63 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_64 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_65 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_66 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_67 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_68 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_71 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_72 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_73 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_74 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_75 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_76 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_77 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_78 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_81 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_82 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_83 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_84 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_85 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_86 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_87 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z_temp_88 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Z11 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z12 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z13 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z14 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z15 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z16 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z17 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z18 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z21 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z22 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z23 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z24 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z25 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z26 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z27 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z28 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z31 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z32 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z33 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z34 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z35 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z36 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z37 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z38 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z41 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z42 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z43 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z44 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z45 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z46 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z47 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z48 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z51 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z52 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z53 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z54 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z55 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z56 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z57 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z58 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z61 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z62 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z63 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z64 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z65 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z66 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z67 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z68 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z71 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z72 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z73 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z74 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z75 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z76 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z77 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z78 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z81 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z82 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z83 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z84 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z85 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z86 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z87 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Z88 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z11 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z12 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z13 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z14 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z15 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z16 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z17 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z18 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z21 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z22 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z23 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z24 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z25 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z26 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z27 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z28 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z31 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z32 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z33 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z34 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z35 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z36 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z37 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z38 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z41 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z42 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z43 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z44 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z45 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z46 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z47 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z48 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z51 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z52 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z53 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z54 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z55 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z56 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z57 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z58 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z61 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z62 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z63 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z64 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z65 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z66 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z67 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z68 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z71 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z72 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z73 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z74 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z75 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z76 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z77 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z78 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z81 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z82 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z83 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z84 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z85 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z86 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z87 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__buf_Z88 = VL_RAND_RESET_I(27);
    vlSelf->__PVT__Y11_final = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y11_final_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y21_final_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y11_final_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y11_final_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y31_final_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y41_final_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y51_final_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y61_final_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y71_final_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y81_final_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Y11_final_1 = VL_RAND_RESET_I(13);
    vlSelf->__PVT__Y21_final_1 = VL_RAND_RESET_I(13);
    vlSelf->__PVT__Y31_final_1 = VL_RAND_RESET_I(13);
    vlSelf->__PVT__Y41_final_1 = VL_RAND_RESET_I(13);
    vlSelf->__PVT__Y51_final_1 = VL_RAND_RESET_I(13);
    vlSelf->__PVT__Y61_final_1 = VL_RAND_RESET_I(13);
    vlSelf->__PVT__Y71_final_1 = VL_RAND_RESET_I(13);
    vlSelf->__PVT__Y81_final_1 = VL_RAND_RESET_I(13);
    vlSelf->__PVT__Y21_final = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y31_final = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y41_final = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y51_final = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y61_final = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y71_final = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y81_final = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y21_final_prev = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y21_final_diff = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y31_final_prev = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y31_final_diff = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y41_final_prev = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y41_final_diff = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y51_final_prev = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y51_final_diff = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y61_final_prev = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y61_final_diff = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y71_final_prev = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y71_final_diff = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y81_final_prev = VL_RAND_RESET_I(25);
    vlSelf->__PVT__Y81_final_diff = VL_RAND_RESET_I(25);
    vlSelf->__PVT__count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__count_of = VL_RAND_RESET_I(3);
    vlSelf->__PVT__count_of_copy = VL_RAND_RESET_I(3);
    vlSelf->__PVT__count_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_8 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enable_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_1 = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__u102____pinNumber2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u86__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u100__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u100__DOT__b_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u101__DOT__b_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u102__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u102__DOT__b_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u103__DOT__b_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u104__DOT__b_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u105__DOT__b_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u106__DOT__b_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u107__DOT__b_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u110__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u118__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u126__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u134__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u142__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u79__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u80__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u81__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u82__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u83__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u84__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u85__DOT__a_temp = VL_RAND_RESET_I(16);
    vlSelf->__VdfgTmp_hd358cecd__0 = 0;
    vlSelf->__VdfgTmp_hb5d3819f__0 = 0;
    vlSelf->__VdfgTmp_h6b20eb67__0 = 0;
    vlSelf->__VdfgTmp_h223a61ce__0 = 0;
    vlSelf->__VdfgTmp_h216275e3__0 = 0;
    vlSelf->__VdfgTmp_h4f997fe4__0 = 0;
    vlSelf->__VdfgTmp_h38cce513__0 = 0;
    vlSelf->__VdfgTmp_h7f1a2df4__0 = 0;
    vlSelf->__VdfgTmp_h3a975308__0 = 0;
    vlSelf->__VdfgTmp_ha58a2781__0 = 0;
    vlSelf->__VdfgTmp_h4c5300e6__0 = 0;
    vlSelf->__VdfgTmp_hb6088b02__0 = 0;
    vlSelf->__VdfgTmp_hde2d8c69__0 = 0;
    vlSelf->__VdfgTmp_hc686e7df__0 = 0;
    vlSelf->__Vdly__count = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__count_of = VL_RAND_RESET_I(3);
}
