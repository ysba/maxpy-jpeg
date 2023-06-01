// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top.h for the primary calling header

#include "verilated.h"

#include "jpeg_top__Syms.h"
#include "sub_dct.h"

VL_INLINE_OPT void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__0(sub_dct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__Y11;
    IData/*24:0*/ __Vdly__Y21;
    IData/*24:0*/ __Vdly__Y31;
    IData/*24:0*/ __Vdly__Y41;
    IData/*24:0*/ __Vdly__Y51;
    IData/*24:0*/ __Vdly__Y61;
    IData/*24:0*/ __Vdly__Y71;
    IData/*24:0*/ __Vdly__Y81;
    CData/*2:0*/ __Vdly__count_of_copy;
    // Body
    vlSelf->__Vdly__count = vlSelf->__PVT__count;
    __Vdly__count_of_copy = vlSelf->__PVT__count_of_copy;
    vlSelf->__Vdly__count_of = vlSelf->__PVT__count_of;
    __Vdly__Y11 = vlSelf->__PVT__Y11;
    __Vdly__Y51 = vlSelf->__PVT__Y51;
    __Vdly__Y71 = vlSelf->__PVT__Y71;
    __Vdly__Y31 = vlSelf->__PVT__Y31;
    __Vdly__Y81 = vlSelf->__PVT__Y81;
    __Vdly__Y61 = vlSelf->__PVT__Y61;
    __Vdly__Y41 = vlSelf->__PVT__Y41;
    __Vdly__Y21 = vlSelf->__PVT__Y21;
    vlSelf->__Vdly__Z11 = vlSelf->__PVT__Z11;
    vlSelf->__Vdly__Z15 = vlSelf->__PVT__Z15;
    vlSelf->__Vdly__Z13 = vlSelf->__PVT__Z13;
    vlSelf->__Vdly__Z17 = vlSelf->__PVT__Z17;
    vlSelf->__Vdly__Z12 = vlSelf->__PVT__Z12;
    vlSelf->__Vdly__Z14 = vlSelf->__PVT__Z14;
    vlSelf->__Vdly__Z16 = vlSelf->__PVT__Z16;
    vlSelf->__Vdly__Z18 = vlSelf->__PVT__Z18;
    vlSelf->__Vdly__Z41 = vlSelf->__PVT__Z41;
    vlSelf->__Vdly__Z31 = vlSelf->__PVT__Z31;
    vlSelf->__Vdly__Z21 = vlSelf->__PVT__Z21;
    vlSelf->__Vdly__Z51 = vlSelf->__PVT__Z51;
    vlSelf->__Vdly__Z61 = vlSelf->__PVT__Z61;
    vlSelf->__Vdly__Z71 = vlSelf->__PVT__Z71;
    vlSelf->__Vdly__Z81 = vlSelf->__PVT__Z81;
    vlSelf->__Vdly__Z85 = vlSelf->__PVT__Z85;
    vlSelf->__Vdly__Z35 = vlSelf->__PVT__Z35;
    vlSelf->__Vdly__Z25 = vlSelf->__PVT__Z25;
    vlSelf->__Vdly__Z45 = vlSelf->__PVT__Z45;
    vlSelf->__Vdly__Z55 = vlSelf->__PVT__Z55;
    vlSelf->__Vdly__Z65 = vlSelf->__PVT__Z65;
    vlSelf->__Vdly__Z75 = vlSelf->__PVT__Z75;
    vlSelf->__Vdly__Z87 = vlSelf->__PVT__Z87;
    vlSelf->__Vdly__Z83 = vlSelf->__PVT__Z83;
    vlSelf->__Vdly__Z43 = vlSelf->__PVT__Z43;
    vlSelf->__Vdly__Z37 = vlSelf->__PVT__Z37;
    vlSelf->__Vdly__Z33 = vlSelf->__PVT__Z33;
    vlSelf->__Vdly__Z27 = vlSelf->__PVT__Z27;
    vlSelf->__Vdly__Z23 = vlSelf->__PVT__Z23;
    vlSelf->__Vdly__Z47 = vlSelf->__PVT__Z47;
    vlSelf->__Vdly__Z53 = vlSelf->__PVT__Z53;
    vlSelf->__Vdly__Z57 = vlSelf->__PVT__Z57;
    vlSelf->__Vdly__Z63 = vlSelf->__PVT__Z63;
    vlSelf->__Vdly__Z67 = vlSelf->__PVT__Z67;
    vlSelf->__Vdly__Z73 = vlSelf->__PVT__Z73;
    vlSelf->__Vdly__Z77 = vlSelf->__PVT__Z77;
    vlSelf->__Vdly__Z88 = vlSelf->__PVT__Z88;
    vlSelf->__Vdly__Z86 = vlSelf->__PVT__Z86;
    vlSelf->__Vdly__Z84 = vlSelf->__PVT__Z84;
    vlSelf->__Vdly__Z44 = vlSelf->__PVT__Z44;
    vlSelf->__Vdly__Z42 = vlSelf->__PVT__Z42;
    vlSelf->__Vdly__Z38 = vlSelf->__PVT__Z38;
    vlSelf->__Vdly__Z36 = vlSelf->__PVT__Z36;
    vlSelf->__Vdly__Z34 = vlSelf->__PVT__Z34;
    vlSelf->__Vdly__Z32 = vlSelf->__PVT__Z32;
    vlSelf->__Vdly__Z28 = vlSelf->__PVT__Z28;
    vlSelf->__Vdly__Z26 = vlSelf->__PVT__Z26;
    vlSelf->__Vdly__Z22 = vlSelf->__PVT__Z22;
    vlSelf->__Vdly__Z24 = vlSelf->__PVT__Z24;
    vlSelf->__Vdly__Z46 = vlSelf->__PVT__Z46;
    vlSelf->__Vdly__Z48 = vlSelf->__PVT__Z48;
    vlSelf->__Vdly__Z52 = vlSelf->__PVT__Z52;
    vlSelf->__Vdly__Z54 = vlSelf->__PVT__Z54;
    vlSelf->__Vdly__Z56 = vlSelf->__PVT__Z56;
    vlSelf->__Vdly__Z58 = vlSelf->__PVT__Z58;
    vlSelf->__Vdly__Z62 = vlSelf->__PVT__Z62;
    vlSelf->__Vdly__Z64 = vlSelf->__PVT__Z64;
    vlSelf->__Vdly__Z66 = vlSelf->__PVT__Z66;
    vlSelf->__Vdly__Z68 = vlSelf->__PVT__Z68;
    vlSelf->__Vdly__Z72 = vlSelf->__PVT__Z72;
    vlSelf->__Vdly__Z74 = vlSelf->__PVT__Z74;
    vlSelf->__Vdly__Z76 = vlSelf->__PVT__Z76;
    vlSelf->__Vdly__Z78 = vlSelf->__PVT__Z78;
    vlSelf->__Vdly__Z82 = vlSelf->__PVT__Z82;
    if (vlSymsp->TOP.rst) {
        vlSelf->__Vdly__count = 0U;
        __Vdly__count_of_copy = 0U;
        vlSelf->__Vdly__count_of = 0U;
        __Vdly__Y11 = 0U;
        __Vdly__Y51 = 0U;
        __Vdly__Y71 = 0U;
        __Vdly__Y31 = 0U;
        __Vdly__Y81 = 0U;
        __Vdly__Y61 = 0U;
        __Vdly__Y41 = 0U;
        __Vdly__Y21 = 0U;
        vlSelf->__Vdly__Z11 = 0U;
        vlSelf->__Vdly__Z15 = 0U;
        vlSelf->__Vdly__Z13 = 0U;
        vlSelf->__Vdly__Z17 = 0U;
        vlSelf->__Vdly__Z12 = 0U;
        vlSelf->__Vdly__Z14 = 0U;
        vlSelf->__Vdly__Z16 = 0U;
        vlSelf->__Vdly__Z18 = 0U;
        vlSelf->__Vdly__Z41 = 0U;
        vlSelf->__Vdly__Z31 = 0U;
        vlSelf->__Vdly__Z21 = 0U;
        vlSelf->__Vdly__Z51 = 0U;
        vlSelf->__Vdly__Z61 = 0U;
        vlSelf->__Vdly__Z71 = 0U;
        vlSelf->__Vdly__Z81 = 0U;
        vlSelf->__Vdly__Z85 = 0U;
        vlSelf->__Vdly__Z35 = 0U;
        vlSelf->__Vdly__Z25 = 0U;
        vlSelf->__Vdly__Z45 = 0U;
        vlSelf->__Vdly__Z55 = 0U;
        vlSelf->__Vdly__Z65 = 0U;
        vlSelf->__Vdly__Z75 = 0U;
        vlSelf->__Vdly__Z87 = 0U;
        vlSelf->__Vdly__Z83 = 0U;
        vlSelf->__Vdly__Z43 = 0U;
        vlSelf->__Vdly__Z37 = 0U;
        vlSelf->__Vdly__Z33 = 0U;
        vlSelf->__Vdly__Z27 = 0U;
        vlSelf->__Vdly__Z23 = 0U;
        vlSelf->__Vdly__Z47 = 0U;
        vlSelf->__Vdly__Z53 = 0U;
        vlSelf->__Vdly__Z57 = 0U;
        vlSelf->__Vdly__Z63 = 0U;
        vlSelf->__Vdly__Z67 = 0U;
        vlSelf->__Vdly__Z73 = 0U;
        vlSelf->__Vdly__Z77 = 0U;
        vlSelf->__Vdly__Z88 = 0U;
        vlSelf->__Vdly__Z86 = 0U;
        vlSelf->__Vdly__Z84 = 0U;
        vlSelf->__Vdly__Z44 = 0U;
        vlSelf->__Vdly__Z42 = 0U;
        vlSelf->__Vdly__Z38 = 0U;
        vlSelf->__Vdly__Z36 = 0U;
        vlSelf->__Vdly__Z34 = 0U;
        vlSelf->__Vdly__Z32 = 0U;
        vlSelf->__Vdly__Z28 = 0U;
        vlSelf->__Vdly__Z26 = 0U;
        vlSelf->__Vdly__Z22 = 0U;
        vlSelf->__Vdly__Z24 = 0U;
        vlSelf->__Vdly__Z46 = 0U;
        vlSelf->__Vdly__Z48 = 0U;
        vlSelf->__Vdly__Z52 = 0U;
        vlSelf->__Vdly__Z54 = 0U;
        vlSelf->__Vdly__Z56 = 0U;
        vlSelf->__Vdly__Z58 = 0U;
        vlSelf->__Vdly__Z62 = 0U;
        vlSelf->__Vdly__Z64 = 0U;
        vlSelf->__Vdly__Z66 = 0U;
        vlSelf->__Vdly__Z68 = 0U;
        vlSelf->__Vdly__Z72 = 0U;
        vlSelf->__Vdly__Z74 = 0U;
        vlSelf->__Vdly__Z76 = 0U;
        vlSelf->__Vdly__Z78 = 0U;
        vlSelf->__Vdly__Z82 = 0U;
        vlSelf->__PVT__Y_temp_11 = 0U;
        vlSelf->__PVT__Y_temp_51 = 0U;
        vlSelf->__PVT__Y_temp_71 = 0U;
        vlSelf->__PVT__Y_temp_31 = 0U;
        vlSelf->__PVT__Y_temp_81 = 0U;
        vlSelf->__PVT__Y_temp_61 = 0U;
        vlSelf->__PVT__Y_temp_41 = 0U;
        vlSelf->__PVT__Y_temp_21 = 0U;
        vlSelf->__PVT__Z_temp_11 = 0U;
        vlSelf->__PVT__Z_temp_15 = 0U;
        vlSelf->__PVT__Z_temp_13 = 0U;
        vlSelf->__PVT__Z_temp_17 = 0U;
        vlSelf->__PVT__Z_temp_12 = 0U;
        vlSelf->__PVT__Z_temp_14 = 0U;
        vlSelf->__PVT__Z_temp_16 = 0U;
        vlSelf->__PVT__Z_temp_18 = 0U;
        vlSelf->__PVT__Z_temp_41 = 0U;
        vlSelf->__PVT__Z_temp_31 = 0U;
        vlSelf->__PVT__Z_temp_21 = 0U;
        vlSelf->__PVT__Z_temp_51 = 0U;
        vlSelf->__PVT__Z_temp_61 = 0U;
        vlSelf->__PVT__Z_temp_71 = 0U;
        vlSelf->__PVT__Z_temp_81 = 0U;
        vlSelf->__PVT__Z_temp_85 = 0U;
        vlSelf->__PVT__Z_temp_35 = 0U;
        vlSelf->__PVT__Z_temp_25 = 0U;
        vlSelf->__PVT__Z_temp_45 = 0U;
        vlSelf->__PVT__Z_temp_55 = 0U;
        vlSelf->__PVT__Z_temp_65 = 0U;
        vlSelf->__PVT__Z_temp_75 = 0U;
        vlSelf->__PVT__Z_temp_87 = 0U;
        vlSelf->__PVT__Z_temp_83 = 0U;
        vlSelf->__PVT__Z_temp_43 = 0U;
        vlSelf->__PVT__Z_temp_37 = 0U;
        vlSelf->__PVT__Z_temp_33 = 0U;
        vlSelf->__PVT__Z_temp_27 = 0U;
        vlSelf->__PVT__Z_temp_23 = 0U;
        vlSelf->__PVT__Z_temp_47 = 0U;
        vlSelf->__PVT__Z_temp_53 = 0U;
        vlSelf->__PVT__Z_temp_57 = 0U;
        vlSelf->__PVT__Z_temp_63 = 0U;
        vlSelf->__PVT__Z_temp_67 = 0U;
        vlSelf->__PVT__Z_temp_73 = 0U;
        vlSelf->__PVT__Z_temp_77 = 0U;
        vlSelf->__PVT__Z_temp_88 = 0U;
        vlSelf->__PVT__Z_temp_86 = 0U;
        vlSelf->__PVT__Z_temp_84 = 0U;
        vlSelf->__PVT__Z_temp_44 = 0U;
        vlSelf->__PVT__Z_temp_42 = 0U;
        vlSelf->__PVT__Z_temp_38 = 0U;
        vlSelf->__PVT__Z_temp_36 = 0U;
        vlSelf->__PVT__Z_temp_34 = 0U;
        vlSelf->__PVT__Z_temp_32 = 0U;
        vlSelf->__PVT__Z_temp_28 = 0U;
        vlSelf->__PVT__Z_temp_26 = 0U;
        vlSelf->__PVT__Z_temp_22 = 0U;
        vlSelf->__PVT__Z_temp_24 = 0U;
        vlSelf->__PVT__Z_temp_46 = 0U;
        vlSelf->__PVT__Z_temp_48 = 0U;
        vlSelf->__PVT__Z_temp_52 = 0U;
        vlSelf->__PVT__Z_temp_54 = 0U;
        vlSelf->__PVT__Z_temp_56 = 0U;
        vlSelf->__PVT__Z_temp_58 = 0U;
        vlSelf->__PVT__Z_temp_62 = 0U;
        vlSelf->__PVT__Z_temp_64 = 0U;
        vlSelf->__PVT__Z_temp_66 = 0U;
        vlSelf->__PVT__Z_temp_68 = 0U;
        vlSelf->__PVT__Z_temp_72 = 0U;
        vlSelf->__PVT__Z_temp_74 = 0U;
        vlSelf->__PVT__Z_temp_76 = 0U;
        vlSelf->__PVT__Z_temp_78 = 0U;
        vlSelf->__PVT__Z_temp_82 = 0U;
        vlSelf->__PVT__data_1 = 0U;
        vlSelf->__PVT__Y11_final_4 = 0U;
        vlSelf->__PVT__Y31_final_2 = 0U;
        vlSelf->__PVT__Y21_final_2 = 0U;
        vlSelf->__PVT__Y41_final_2 = 0U;
        vlSelf->__PVT__Y51_final_2 = 0U;
        vlSelf->__PVT__Y61_final_2 = 0U;
        vlSelf->__PVT__Y71_final_2 = 0U;
        vlSelf->__PVT__Y81_final_2 = 0U;
        vlSelf->__PVT__Y11_final_3 = 0U;
        vlSelf->__PVT__Y31_final_1 = 0U;
        vlSelf->__PVT__Y21_final_1 = 0U;
        vlSelf->__PVT__Y41_final_1 = 0U;
        vlSelf->__PVT__Y51_final_1 = 0U;
        vlSelf->__PVT__Y61_final_1 = 0U;
        vlSelf->__PVT__Y71_final_1 = 0U;
        vlSelf->__PVT__Y81_final_1 = 0U;
        vlSelf->__PVT__Y11_final_2 = 0U;
        vlSelf->__PVT__Y31_final_diff = 0U;
        vlSelf->__PVT__Y21_final_diff = 0U;
        vlSelf->__PVT__Y41_final_diff = 0U;
        vlSelf->__PVT__Y51_final_diff = 0U;
        vlSelf->__PVT__Y61_final_diff = 0U;
        vlSelf->__PVT__Y71_final_diff = 0U;
        vlSelf->__PVT__Y81_final_diff = 0U;
        vlSelf->__PVT__Y11_final_1 = 0U;
        vlSelf->__PVT__Y31_final_prev = 0U;
        vlSelf->__PVT__Y21_final_prev = 0U;
        vlSelf->__PVT__Y41_final_prev = 0U;
        vlSelf->__PVT__Y51_final_prev = 0U;
        vlSelf->__PVT__Y61_final_prev = 0U;
        vlSelf->__PVT__Y71_final_prev = 0U;
        vlSelf->__PVT__Y81_final_prev = 0U;
        vlSelf->__PVT__Y11_final = 0U;
        vlSelf->__PVT__Y31_final = 0U;
        vlSelf->__PVT__Y21_final = 0U;
        vlSelf->__PVT__Y41_final = 0U;
        vlSelf->__PVT__Y51_final = 0U;
        vlSelf->__PVT__Y61_final = 0U;
        vlSelf->__PVT__Y71_final = 0U;
        vlSelf->__PVT__Y81_final = 0U;
    } else {
        if (((1U == (IData)(vlSelf->__PVT__count)) 
             & (IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable))) {
            __Vdly__Y11 = vlSelf->__PVT__Y_temp_11;
        } else if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            __Vdly__Y11 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_11 
                                         + vlSelf->__PVT__Y11));
        }
        if (((IData)(vlSelf->__PVT__count_8) & (1U 
                                                == (IData)(vlSelf->__PVT__count_of)))) {
            vlSelf->__Vdly__Z11 = 0U;
            vlSelf->__Vdly__Z15 = 0U;
            vlSelf->__Vdly__Z13 = 0U;
            vlSelf->__Vdly__Z17 = 0U;
            vlSelf->__Vdly__Z12 = 0U;
            vlSelf->__Vdly__Z14 = 0U;
            vlSelf->__Vdly__Z16 = 0U;
            vlSelf->__Vdly__Z18 = 0U;
            vlSelf->__Vdly__Z41 = 0U;
            vlSelf->__Vdly__Z31 = 0U;
            vlSelf->__Vdly__Z21 = 0U;
            vlSelf->__Vdly__Z51 = 0U;
            vlSelf->__Vdly__Z61 = 0U;
            vlSelf->__Vdly__Z71 = 0U;
            vlSelf->__Vdly__Z81 = 0U;
            vlSelf->__Vdly__Z85 = 0U;
            vlSelf->__Vdly__Z35 = 0U;
            vlSelf->__Vdly__Z25 = 0U;
            vlSelf->__Vdly__Z45 = 0U;
            vlSelf->__Vdly__Z55 = 0U;
            vlSelf->__Vdly__Z65 = 0U;
            vlSelf->__Vdly__Z75 = 0U;
            vlSelf->__Vdly__Z87 = 0U;
            vlSelf->__Vdly__Z83 = 0U;
            vlSelf->__Vdly__Z43 = 0U;
            vlSelf->__Vdly__Z37 = 0U;
            vlSelf->__Vdly__Z33 = 0U;
            vlSelf->__Vdly__Z27 = 0U;
            vlSelf->__Vdly__Z23 = 0U;
            vlSelf->__Vdly__Z47 = 0U;
            vlSelf->__Vdly__Z53 = 0U;
            vlSelf->__Vdly__Z57 = 0U;
            vlSelf->__Vdly__Z63 = 0U;
            vlSelf->__Vdly__Z67 = 0U;
            vlSelf->__Vdly__Z73 = 0U;
            vlSelf->__Vdly__Z77 = 0U;
            vlSelf->__Vdly__Z88 = 0U;
            vlSelf->__Vdly__Z86 = 0U;
            vlSelf->__Vdly__Z84 = 0U;
            vlSelf->__Vdly__Z44 = 0U;
            vlSelf->__Vdly__Z42 = 0U;
            vlSelf->__Vdly__Z38 = 0U;
            vlSelf->__Vdly__Z36 = 0U;
            vlSelf->__Vdly__Z34 = 0U;
            vlSelf->__Vdly__Z32 = 0U;
            vlSelf->__Vdly__Z28 = 0U;
            vlSelf->__Vdly__Z26 = 0U;
            vlSelf->__Vdly__Z22 = 0U;
            vlSelf->__Vdly__Z24 = 0U;
            vlSelf->__Vdly__Z46 = 0U;
            vlSelf->__Vdly__Z48 = 0U;
            vlSelf->__Vdly__Z52 = 0U;
            vlSelf->__Vdly__Z54 = 0U;
            vlSelf->__Vdly__Z56 = 0U;
            vlSelf->__Vdly__Z58 = 0U;
            vlSelf->__Vdly__Z62 = 0U;
            vlSelf->__Vdly__Z64 = 0U;
            vlSelf->__Vdly__Z66 = 0U;
            vlSelf->__Vdly__Z68 = 0U;
            vlSelf->__Vdly__Z72 = 0U;
            vlSelf->__Vdly__Z74 = 0U;
            vlSelf->__Vdly__Z76 = 0U;
            vlSelf->__Vdly__Z78 = 0U;
            vlSelf->__Vdly__Z82 = 0U;
        } else if (((IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) 
                    & (IData)(vlSelf->__PVT__count_9))) {
            vlSelf->__Vdly__Z11 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_11 
                                                 + vlSelf->__PVT__Z11));
            vlSelf->__Vdly__Z15 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_15 
                                                 + vlSelf->__PVT__Z15));
            vlSelf->__Vdly__Z13 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_13 
                                                 + vlSelf->__PVT__Z13));
            vlSelf->__Vdly__Z17 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_17 
                                                 + vlSelf->__PVT__Z17));
            vlSelf->__Vdly__Z12 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_12 
                                                 + vlSelf->__PVT__Z12));
            vlSelf->__Vdly__Z14 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_14 
                                                 + vlSelf->__PVT__Z14));
            vlSelf->__Vdly__Z16 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_16 
                                                 + vlSelf->__PVT__Z16));
            vlSelf->__Vdly__Z18 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_18 
                                                 + vlSelf->__PVT__Z18));
            vlSelf->__Vdly__Z41 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_41 
                                                 + vlSelf->__PVT__Z41));
            vlSelf->__Vdly__Z31 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_31 
                                                 + vlSelf->__PVT__Z31));
            vlSelf->__Vdly__Z21 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_21 
                                                 + vlSelf->__PVT__Z21));
            vlSelf->__Vdly__Z51 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_51 
                                                 + vlSelf->__PVT__Z51));
            vlSelf->__Vdly__Z61 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_61 
                                                 + vlSelf->__PVT__Z61));
            vlSelf->__Vdly__Z71 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_71 
                                                 + vlSelf->__PVT__Z71));
            vlSelf->__Vdly__Z81 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_81 
                                                 + vlSelf->__PVT__Z81));
            vlSelf->__Vdly__Z85 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_85 
                                                 + vlSelf->__PVT__Z85));
            vlSelf->__Vdly__Z35 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_35 
                                                 + vlSelf->__PVT__Z35));
            vlSelf->__Vdly__Z25 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_25 
                                                 + vlSelf->__PVT__Z25));
            vlSelf->__Vdly__Z45 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_45 
                                                 + vlSelf->__PVT__Z45));
            vlSelf->__Vdly__Z55 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_55 
                                                 + vlSelf->__PVT__Z55));
            vlSelf->__Vdly__Z65 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_65 
                                                 + vlSelf->__PVT__Z65));
            vlSelf->__Vdly__Z75 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_75 
                                                 + vlSelf->__PVT__Z75));
            vlSelf->__Vdly__Z87 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_87 
                                                 + vlSelf->__PVT__Z87));
            vlSelf->__Vdly__Z83 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_83 
                                                 + vlSelf->__PVT__Z83));
            vlSelf->__Vdly__Z43 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_43 
                                                 + vlSelf->__PVT__Z43));
            vlSelf->__Vdly__Z37 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_37 
                                                 + vlSelf->__PVT__Z37));
            vlSelf->__Vdly__Z33 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_33 
                                                 + vlSelf->__PVT__Z33));
            vlSelf->__Vdly__Z27 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_27 
                                                 + vlSelf->__PVT__Z27));
            vlSelf->__Vdly__Z23 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_23 
                                                 + vlSelf->__PVT__Z23));
            vlSelf->__Vdly__Z47 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_47 
                                                 + vlSelf->__PVT__Z47));
            vlSelf->__Vdly__Z53 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_53 
                                                 + vlSelf->__PVT__Z53));
            vlSelf->__Vdly__Z57 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_57 
                                                 + vlSelf->__PVT__Z57));
            vlSelf->__Vdly__Z63 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_63 
                                                 + vlSelf->__PVT__Z63));
            vlSelf->__Vdly__Z67 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_67 
                                                 + vlSelf->__PVT__Z67));
            vlSelf->__Vdly__Z73 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_73 
                                                 + vlSelf->__PVT__Z73));
            vlSelf->__Vdly__Z77 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_77 
                                                 + vlSelf->__PVT__Z77));
            vlSelf->__Vdly__Z88 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_88 
                                                 + vlSelf->__PVT__Z88));
            vlSelf->__Vdly__Z86 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_86 
                                                 + vlSelf->__PVT__Z86));
            vlSelf->__Vdly__Z84 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_84 
                                                 + vlSelf->__PVT__Z84));
            vlSelf->__Vdly__Z44 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_44 
                                                 + vlSelf->__PVT__Z44));
            vlSelf->__Vdly__Z42 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_42 
                                                 + vlSelf->__PVT__Z42));
            vlSelf->__Vdly__Z38 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_38 
                                                 + vlSelf->__PVT__Z38));
            vlSelf->__Vdly__Z36 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_36 
                                                 + vlSelf->__PVT__Z36));
            vlSelf->__Vdly__Z34 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_34 
                                                 + vlSelf->__PVT__Z34));
            vlSelf->__Vdly__Z32 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_32 
                                                 + vlSelf->__PVT__Z32));
            vlSelf->__Vdly__Z28 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_28 
                                                 + vlSelf->__PVT__Z28));
            vlSelf->__Vdly__Z26 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_26 
                                                 + vlSelf->__PVT__Z26));
            vlSelf->__Vdly__Z22 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_22 
                                                 + vlSelf->__PVT__Z22));
            vlSelf->__Vdly__Z24 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_24 
                                                 + vlSelf->__PVT__Z24));
            vlSelf->__Vdly__Z46 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_46 
                                                 + vlSelf->__PVT__Z46));
            vlSelf->__Vdly__Z48 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_48 
                                                 + vlSelf->__PVT__Z48));
            vlSelf->__Vdly__Z52 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_52 
                                                 + vlSelf->__PVT__Z52));
            vlSelf->__Vdly__Z54 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_54 
                                                 + vlSelf->__PVT__Z54));
            vlSelf->__Vdly__Z56 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_56 
                                                 + vlSelf->__PVT__Z56));
            vlSelf->__Vdly__Z58 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_58 
                                                 + vlSelf->__PVT__Z58));
            vlSelf->__Vdly__Z62 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_62 
                                                 + vlSelf->__PVT__Z62));
            vlSelf->__Vdly__Z64 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_64 
                                                 + vlSelf->__PVT__Z64));
            vlSelf->__Vdly__Z66 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_66 
                                                 + vlSelf->__PVT__Z66));
            vlSelf->__Vdly__Z68 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_68 
                                                 + vlSelf->__PVT__Z68));
            vlSelf->__Vdly__Z72 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_72 
                                                 + vlSelf->__PVT__Z72));
            vlSelf->__Vdly__Z74 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_74 
                                                 + vlSelf->__PVT__Z74));
            vlSelf->__Vdly__Z76 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_76 
                                                 + vlSelf->__PVT__Z76));
            vlSelf->__Vdly__Z78 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_78 
                                                 + vlSelf->__PVT__Z78));
            vlSelf->__Vdly__Z82 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_82 
                                                 + vlSelf->__PVT__Z82));
        }
        if (((IData)(vlSelf->__PVT__enable_1) & (IData)(vlSelf->__PVT__count_8))) {
            vlSelf->__PVT__Z_temp_11 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_15 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_13 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_17 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_12 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_14 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_16 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_18 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_41 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_31 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_21 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_51 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_61 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_71 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_81 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_85 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_35 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_25 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_45 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_55 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_65 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_75 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_87 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_83 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_43 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_37 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_33 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_27 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_23 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_47 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_53 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_57 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_63 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_67 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_73 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_77 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_88 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_86 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_84 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_44 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_42 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_38 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_36 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_34 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_32 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_28 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_26 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_22 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_24 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_46 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_48 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_52 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_54 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_56 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_58 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_62 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_64 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_66 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_68 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_72 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_74 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_76 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_78 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_82 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
        }
        if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
                vlSelf->__Vdly__count = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__count)));
            }
            if (vlSelf->__PVT__count_1) {
                __Vdly__count_of_copy = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__count_of_copy)));
                vlSelf->__Vdly__count_of = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__count_of)));
            }
            vlSelf->__PVT__Y_temp_11 = (0x1ffffffU 
                                        & ((IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR) 
                                           * vlSelf->__PVT__T1));
        } else {
            vlSelf->__Vdly__count = 0U;
            __Vdly__count_of_copy = 0U;
            vlSelf->__Vdly__count_of = 0U;
        }
        if (vlSelf->__PVT__enable_1) {
            if (vlSelf->__PVT__enable_1) {
                __Vdly__Y51 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_51 
                                             + vlSelf->__PVT__Y51));
                __Vdly__Y71 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_71 
                                             + vlSelf->__PVT__Y71));
                __Vdly__Y31 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_31 
                                             + vlSelf->__PVT__Y31));
                __Vdly__Y81 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_81 
                                             + vlSelf->__PVT__Y81));
                __Vdly__Y61 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_61 
                                             + vlSelf->__PVT__Y61));
                __Vdly__Y41 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_41 
                                             + vlSelf->__PVT__Y41));
                __Vdly__Y21 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_21 
                                             + vlSelf->__PVT__Y21));
                vlSelf->__PVT__Y_temp_51 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y5_mul_input);
                vlSelf->__PVT__Y_temp_71 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y7_mul_input);
                vlSelf->__PVT__Y_temp_31 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y3_mul_input);
                vlSelf->__PVT__Y_temp_81 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y8_mul_input);
                vlSelf->__PVT__Y_temp_61 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y6_mul_input);
                vlSelf->__PVT__Y_temp_41 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y4_mul_input);
                vlSelf->__PVT__Y_temp_21 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y2_mul_input);
            }
        } else {
            __Vdly__Y51 = 0U;
            __Vdly__Y71 = 0U;
            __Vdly__Y31 = 0U;
            __Vdly__Y81 = 0U;
            __Vdly__Y61 = 0U;
            __Vdly__Y41 = 0U;
            __Vdly__Y21 = 0U;
            vlSelf->__PVT__Y_temp_51 = 0U;
            vlSelf->__PVT__Y_temp_71 = 0U;
            vlSelf->__PVT__Y_temp_31 = 0U;
            vlSelf->__PVT__Y_temp_81 = 0U;
            vlSelf->__PVT__Y_temp_61 = 0U;
            vlSelf->__PVT__Y_temp_41 = 0U;
            vlSelf->__PVT__Y_temp_21 = 0U;
        }
        if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            vlSelf->__PVT__data_1 = vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR;
            vlSelf->__PVT__Y11_final_4 = vlSelf->__PVT__Y11_final_3;
            vlSelf->__PVT__Y31_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y31_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y31_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y31_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y31_final_2) 
                                          | (IData)(vlSelf->__PVT__Y31_final_1));
            vlSelf->__PVT__Y21_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y21_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y21_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y21_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y21_final_2) 
                                          | (IData)(vlSelf->__PVT__Y21_final_1));
            vlSelf->__PVT__Y41_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y41_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y41_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y41_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y41_final_2) 
                                          | (IData)(vlSelf->__PVT__Y41_final_1));
            vlSelf->__PVT__Y51_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y51_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y51_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y51_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y51_final_2) 
                                          | (IData)(vlSelf->__PVT__Y51_final_1));
            vlSelf->__PVT__Y61_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y61_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y61_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y61_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y61_final_2) 
                                          | (IData)(vlSelf->__PVT__Y61_final_1));
            vlSelf->__PVT__Y71_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y71_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y71_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y71_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y71_final_2) 
                                          | (IData)(vlSelf->__PVT__Y71_final_1));
            vlSelf->__PVT__Y81_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y81_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y81_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y81_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y81_final_2) 
                                          | (IData)(vlSelf->__PVT__Y81_final_1));
            vlSelf->__PVT__Y11_final_3 = vlSelf->__PVT__Y11_final_2;
            vlSelf->__PVT__Y31_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y31_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y31_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y31_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y21_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y21_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y21_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y21_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y41_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y41_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y41_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y41_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y51_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y51_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y51_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y51_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y61_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y61_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y61_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y61_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y71_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y71_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y71_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y71_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y81_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y81_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y81_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y81_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y11_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y11_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y11_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y11_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y11_final_2) 
                                          | (IData)(vlSelf->__PVT__Y11_final_1));
            vlSelf->__PVT__Y11_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y11_final)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y11_final 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y11_final 
                                                  >> 0xcU))));
        }
        if (((IData)(vlSelf->__PVT__count_5) & (IData)(vlSelf->__PVT__enable_1))) {
            vlSelf->__PVT__Y31_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y31_final 
                                                - vlSelf->__PVT__Y31_final_prev));
            vlSelf->__PVT__Y21_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y21_final 
                                                - vlSelf->__PVT__Y21_final_prev));
            vlSelf->__PVT__Y41_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y41_final 
                                                - vlSelf->__PVT__Y41_final_prev));
            vlSelf->__PVT__Y51_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y51_final 
                                                - vlSelf->__PVT__Y51_final_prev));
            vlSelf->__PVT__Y61_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y61_final 
                                                - vlSelf->__PVT__Y61_final_prev));
            vlSelf->__PVT__Y71_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y71_final 
                                                - vlSelf->__PVT__Y71_final_prev));
            vlSelf->__PVT__Y81_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y81_final 
                                                - vlSelf->__PVT__Y81_final_prev));
        }
        if (vlSelf->__PVT__enable_1) {
            if (((IData)(vlSelf->__PVT__count_4) & (IData)(vlSelf->__PVT__enable_1))) {
                vlSelf->__PVT__Y31_final_prev = vlSelf->__PVT__Y31_final;
                vlSelf->__PVT__Y21_final_prev = vlSelf->__PVT__Y21_final;
                vlSelf->__PVT__Y41_final_prev = vlSelf->__PVT__Y41_final;
                vlSelf->__PVT__Y51_final_prev = vlSelf->__PVT__Y51_final;
                vlSelf->__PVT__Y61_final_prev = vlSelf->__PVT__Y61_final;
                vlSelf->__PVT__Y71_final_prev = vlSelf->__PVT__Y71_final;
                vlSelf->__PVT__Y81_final_prev = vlSelf->__PVT__Y81_final;
                vlSelf->__PVT__Y31_final = vlSelf->__PVT__Y31;
                vlSelf->__PVT__Y21_final = vlSelf->__PVT__Y21;
                vlSelf->__PVT__Y41_final = vlSelf->__PVT__Y41;
                vlSelf->__PVT__Y51_final = vlSelf->__PVT__Y51;
                vlSelf->__PVT__Y61_final = vlSelf->__PVT__Y61;
                vlSelf->__PVT__Y71_final = vlSelf->__PVT__Y71;
                vlSelf->__PVT__Y81_final = vlSelf->__PVT__Y81;
            }
        } else {
            vlSelf->__PVT__Y31_final_prev = 0U;
            vlSelf->__PVT__Y21_final_prev = 0U;
            vlSelf->__PVT__Y41_final_prev = 0U;
            vlSelf->__PVT__Y51_final_prev = 0U;
            vlSelf->__PVT__Y61_final_prev = 0U;
            vlSelf->__PVT__Y71_final_prev = 0U;
            vlSelf->__PVT__Y81_final_prev = 0U;
            vlSelf->__PVT__Y31_final = 0U;
            vlSelf->__PVT__Y21_final = 0U;
            vlSelf->__PVT__Y41_final = 0U;
            vlSelf->__PVT__Y51_final = 0U;
            vlSelf->__PVT__Y61_final = 0U;
            vlSelf->__PVT__Y71_final = 0U;
            vlSelf->__PVT__Y81_final = 0U;
        }
        if (((IData)(vlSelf->__PVT__count_3) & (IData)(vlSelf->__PVT__enable_1))) {
            vlSelf->__PVT__Y11_final = (0x1ffffffU 
                                        & (vlSelf->__PVT__Y11 
                                           - (IData)(0x5a8400U)));
        }
    }
    if ((4U & (IData)(vlSelf->__PVT__count))) {
        if ((2U & (IData)(vlSelf->__PVT__count))) {
            if ((1U & (IData)(vlSelf->__PVT__count))) {
                vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
                vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T32;
                vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T31;
                vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T25;
                vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T26;
                vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T27;
                vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T28;
            } else {
                vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
                vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T34;
                vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T32;
                vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T23;
                vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T21;
                vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T24;
                vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T27;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__count))) {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T31;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T27;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T25;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T21;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T26;
        } else {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T34;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T21;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T27;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T23;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T25;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__count))) {
        if ((1U & (IData)(vlSelf->__PVT__count))) {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T34;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T28;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T22;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T26;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T24;
        } else {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T31;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T22;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T24;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T28;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T23;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__count))) {
        vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
        vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T34;
        vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T32;
        vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T26;
        vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T28;
        vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T25;
        vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T22;
    } else {
        vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
        vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T32;
        vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T31;
        vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T24;
        vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T23;
        vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T22;
        vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T21;
    }
    if ((4U & (IData)(vlSelf->__PVT__count_of_copy))) {
        if ((2U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti52;
            if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
                vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti32;
                vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti34;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti24;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti23;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti27;
            } else {
                vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti33;
                vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti31;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti25;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti27;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti26;
            }
        } else {
            vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti1;
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti34;
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti33;
            if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti23;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti27;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti25;
            } else {
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti26;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti22;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti28;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti24;
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__count_of_copy))) {
        vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti52;
        if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti33;
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti31;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti28;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti24;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti22;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti23;
        } else {
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti32;
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti34;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti25;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti28;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti26;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti22;
        }
    } else {
        vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti1;
        vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti31;
        vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti32;
        if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti22;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti23;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti24;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti21;
        } else {
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti27;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti26;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti25;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti28;
        }
    }
    vlSelf->__PVT__count_of_copy = __Vdly__count_of_copy;
    vlSelf->__PVT__T52 = 0xffffe95fU;
    vlSelf->__PVT__T1 = 0x16a1U;
    vlSelf->__PVT__T31 = 0x1d90U;
    vlSelf->__PVT__T32 = 0xc3fU;
    vlSelf->__PVT__T33 = 0xfffff3c1U;
    vlSelf->__PVT__T34 = 0xffffe270U;
    vlSelf->__PVT__T28 = 0xffffe09dU;
    vlSelf->__PVT__T27 = 0xffffe565U;
    vlSelf->__PVT__T26 = 0xffffee39U;
    vlSelf->__PVT__T25 = 0xfffff9c2U;
    vlSelf->__PVT__T24 = 0x63eU;
    vlSelf->__PVT__T23 = 0x11c7U;
    vlSelf->__PVT__T22 = 0x1a9bU;
    vlSelf->__PVT__T21 = 0x1f63U;
    vlSelf->__PVT__Ti52 = 0xffffe95fU;
    vlSelf->__PVT__Ti1 = 0x16a1U;
    vlSelf->__PVT__Ti34 = 0xffffe270U;
    vlSelf->__PVT__Ti31 = 0x1d90U;
    vlSelf->__PVT__Ti33 = 0xfffff3c1U;
    vlSelf->__PVT__Ti32 = 0xc3fU;
    vlSelf->__PVT__Ti27 = 0xffffe565U;
    vlSelf->__PVT__Ti26 = 0xffffee39U;
    vlSelf->__PVT__Ti25 = 0xfffff9c2U;
    vlSelf->__PVT__Ti24 = 0x63eU;
    vlSelf->__PVT__Ti23 = 0x11c7U;
    vlSelf->__PVT__Ti22 = 0x1a9bU;
    vlSelf->__PVT__Ti21 = 0x1f63U;
    vlSelf->__PVT__Ti28 = 0xffffe09dU;
    vlSelf->__PVT__Y11 = __Vdly__Y11;
    vlSelf->__PVT__Y31 = __Vdly__Y31;
    vlSelf->__PVT__Y21 = __Vdly__Y21;
    vlSelf->__PVT__Y41 = __Vdly__Y41;
    vlSelf->__PVT__Y51 = __Vdly__Y51;
    vlSelf->__PVT__Y61 = __Vdly__Y61;
    vlSelf->__PVT__Y71 = __Vdly__Y71;
    vlSelf->__PVT__Y81 = __Vdly__Y81;
}

VL_INLINE_OPT void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__1(sub_dct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__1\n"); );
    // Body
    if (vlSymsp->TOP.rst) {
        vlSelf->Z21_final = 0U;
        vlSelf->Z11_final = 0U;
        vlSelf->Z12_final = 0U;
        vlSelf->Z13_final = 0U;
        vlSelf->Z22_final = 0U;
        vlSelf->Z31_final = 0U;
        vlSelf->Z41_final = 0U;
        vlSelf->Z32_final = 0U;
        vlSelf->Z23_final = 0U;
        vlSelf->Z14_final = 0U;
        vlSelf->Z15_final = 0U;
        vlSelf->Z24_final = 0U;
        vlSelf->Z33_final = 0U;
        vlSelf->Z42_final = 0U;
        vlSelf->Z51_final = 0U;
        vlSelf->Z61_final = 0U;
        vlSelf->Z52_final = 0U;
        vlSelf->Z43_final = 0U;
        vlSelf->Z34_final = 0U;
        vlSelf->Z25_final = 0U;
        vlSelf->Z16_final = 0U;
        vlSelf->Z17_final = 0U;
        vlSelf->Z26_final = 0U;
        vlSelf->Z35_final = 0U;
        vlSelf->Z44_final = 0U;
        vlSelf->Z53_final = 0U;
        vlSelf->Z62_final = 0U;
        vlSelf->Z71_final = 0U;
        vlSelf->Z81_final = 0U;
        vlSelf->Z72_final = 0U;
        vlSelf->Z63_final = 0U;
        vlSelf->Z54_final = 0U;
        vlSelf->Z45_final = 0U;
        vlSelf->Z36_final = 0U;
        vlSelf->Z27_final = 0U;
        vlSelf->Z18_final = 0U;
        vlSelf->Z28_final = 0U;
        vlSelf->Z37_final = 0U;
        vlSelf->Z46_final = 0U;
        vlSelf->Z55_final = 0U;
        vlSelf->Z64_final = 0U;
        vlSelf->Z73_final = 0U;
        vlSelf->Z82_final = 0U;
        vlSelf->Z83_final = 0U;
        vlSelf->Z74_final = 0U;
        vlSelf->Z65_final = 0U;
        vlSelf->Z56_final = 0U;
        vlSelf->Z47_final = 0U;
        vlSelf->Z38_final = 0U;
        vlSelf->Z48_final = 0U;
        vlSelf->Z57_final = 0U;
        vlSelf->Z66_final = 0U;
        vlSelf->Z75_final = 0U;
        vlSelf->Z84_final = 0U;
        vlSelf->Z85_final = 0U;
        vlSelf->Z76_final = 0U;
        vlSelf->Z67_final = 0U;
        vlSelf->Z58_final = 0U;
        vlSelf->Z68_final = 0U;
        vlSelf->Z77_final = 0U;
        vlSelf->Z86_final = 0U;
        vlSelf->Z87_final = 0U;
        vlSelf->Z78_final = 0U;
        vlSelf->Z88_final = 0U;
        vlSelf->output_enable = 0U;
        vlSelf->__PVT__count_10 = 0U;
        vlSelf->__PVT__count_9 = 0U;
        vlSelf->__PVT__count_8 = 0U;
        vlSelf->__PVT__count_7 = 0U;
        vlSelf->__PVT__count_6 = 0U;
        vlSelf->__PVT__count_5 = 0U;
        vlSelf->__PVT__count_4 = 0U;
        vlSelf->__PVT__count_3 = 0U;
        vlSelf->__PVT__count_1 = 0U;
    } else {
        if (((IData)(vlSelf->__PVT__count_10) & (0U 
                                                 == (IData)(vlSelf->__PVT__count_of)))) {
            vlSelf->Z21_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z21)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z21 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z21 
                                                  >> 0x10U))));
            vlSelf->Z11_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z11)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z11 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z11 
                                                  >> 0x10U))));
            vlSelf->Z12_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z12)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z12 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z12 
                                                  >> 0x10U))));
            vlSelf->Z13_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z13)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z13 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z13 
                                                  >> 0x10U))));
            vlSelf->Z22_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z22)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z22 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z22 
                                                  >> 0x10U))));
            vlSelf->Z31_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z31)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z31 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z31 
                                                  >> 0x10U))));
            vlSelf->Z41_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z41)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z41 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z41 
                                                  >> 0x10U))));
            vlSelf->Z32_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z32)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z32 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z32 
                                                  >> 0x10U))));
            vlSelf->Z23_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z23)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z23 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z23 
                                                  >> 0x10U))));
            vlSelf->Z14_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z14)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z14 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z14 
                                                  >> 0x10U))));
            vlSelf->Z15_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z15)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z15 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z15 
                                                  >> 0x10U))));
            vlSelf->Z24_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z24)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z24 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z24 
                                                  >> 0x10U))));
            vlSelf->Z33_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z33)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z33 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z33 
                                                  >> 0x10U))));
            vlSelf->Z42_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z42)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z42 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z42 
                                                  >> 0x10U))));
            vlSelf->Z51_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z51)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z51 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z51 
                                                  >> 0x10U))));
            vlSelf->Z61_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z61)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z61 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z61 
                                                  >> 0x10U))));
            vlSelf->Z52_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z52)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z52 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z52 
                                                  >> 0x10U))));
            vlSelf->Z43_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z43)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z43 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z43 
                                                  >> 0x10U))));
            vlSelf->Z34_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z34)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z34 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z34 
                                                  >> 0x10U))));
            vlSelf->Z25_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z25)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z25 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z25 
                                                  >> 0x10U))));
            vlSelf->Z16_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z16)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z16 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z16 
                                                  >> 0x10U))));
            vlSelf->Z17_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z17)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z17 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z17 
                                                  >> 0x10U))));
            vlSelf->Z26_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z26)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z26 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z26 
                                                  >> 0x10U))));
            vlSelf->Z35_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z35)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z35 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z35 
                                                  >> 0x10U))));
            vlSelf->Z44_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z44)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z44 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z44 
                                                  >> 0x10U))));
            vlSelf->Z53_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z53)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z53 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z53 
                                                  >> 0x10U))));
            vlSelf->Z62_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z62)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z62 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z62 
                                                  >> 0x10U))));
            vlSelf->Z71_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z71)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z71 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z71 
                                                  >> 0x10U))));
            vlSelf->Z81_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z81)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z81 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z81 
                                                  >> 0x10U))));
            vlSelf->Z72_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z72)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z72 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z72 
                                                  >> 0x10U))));
            vlSelf->Z63_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z63)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z63 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z63 
                                                  >> 0x10U))));
            vlSelf->Z54_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z54)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z54 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z54 
                                                  >> 0x10U))));
            vlSelf->Z45_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z45)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z45 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z45 
                                                  >> 0x10U))));
            vlSelf->Z36_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z36)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z36 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z36 
                                                  >> 0x10U))));
            vlSelf->Z27_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z27)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z27 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z27 
                                                  >> 0x10U))));
            vlSelf->Z18_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z18)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z18 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z18 
                                                  >> 0x10U))));
            vlSelf->Z28_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z28)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z28 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z28 
                                                  >> 0x10U))));
            vlSelf->Z37_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z37)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z37 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z37 
                                                  >> 0x10U))));
            vlSelf->Z46_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z46)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z46 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z46 
                                                  >> 0x10U))));
            vlSelf->Z55_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z55)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z55 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z55 
                                                  >> 0x10U))));
            vlSelf->Z64_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z64)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z64 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z64 
                                                  >> 0x10U))));
            vlSelf->Z73_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z73)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z73 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z73 
                                                  >> 0x10U))));
            vlSelf->Z82_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z82)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z82 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z82 
                                                  >> 0x10U))));
            vlSelf->Z83_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z83)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z83 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z83 
                                                  >> 0x10U))));
            vlSelf->Z74_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z74)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z74 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z74 
                                                  >> 0x10U))));
            vlSelf->Z65_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z65)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z65 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z65 
                                                  >> 0x10U))));
            vlSelf->Z56_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z56)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z56 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z56 
                                                  >> 0x10U))));
            vlSelf->Z47_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z47)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z47 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z47 
                                                  >> 0x10U))));
            vlSelf->Z38_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z38)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z38 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z38 
                                                  >> 0x10U))));
            vlSelf->Z48_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z48)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z48 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z48 
                                                  >> 0x10U))));
            vlSelf->Z57_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z57)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z57 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z57 
                                                  >> 0x10U))));
            vlSelf->Z66_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z66)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z66 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z66 
                                                  >> 0x10U))));
            vlSelf->Z75_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z75)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z75 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z75 
                                                  >> 0x10U))));
            vlSelf->Z84_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z84)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z84 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z84 
                                                  >> 0x10U))));
            vlSelf->Z85_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z85)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z85 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z85 
                                                  >> 0x10U))));
            vlSelf->Z76_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z76)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z76 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z76 
                                                  >> 0x10U))));
            vlSelf->Z67_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z67)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z67 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z67 
                                                  >> 0x10U))));
            vlSelf->Z58_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z58)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z58 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z58 
                                                  >> 0x10U))));
            vlSelf->Z68_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z68)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z68 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z68 
                                                  >> 0x10U))));
            vlSelf->Z77_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z77)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z77 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z77 
                                                  >> 0x10U))));
            vlSelf->Z86_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z86)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z86 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z86 
                                                  >> 0x10U))));
            vlSelf->Z87_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z87)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z87 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z87 
                                                  >> 0x10U))));
            vlSelf->Z78_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z78)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z78 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z78 
                                                  >> 0x10U))));
            vlSelf->Z88_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z88)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z88 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z88 
                                                  >> 0x10U))));
        }
        if (vlSelf->__PVT__enable_1) {
            if ((0U != ((1U & (~ (IData)(vlSelf->__PVT__count_10))) 
                        | (IData)(vlSelf->__PVT__count_of)))) {
                vlSelf->output_enable = 0U;
            } else if (((IData)(vlSelf->__PVT__count_10) 
                        & (0U == (IData)(vlSelf->__PVT__count_of)))) {
                vlSelf->output_enable = 1U;
            }
        } else {
            vlSelf->output_enable = 0U;
        }
        if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
                vlSelf->__PVT__count_10 = vlSelf->__PVT__count_9;
                vlSelf->__PVT__count_9 = vlSelf->__PVT__count_8;
                vlSelf->__PVT__count_8 = vlSelf->__PVT__count_7;
                vlSelf->__PVT__count_7 = vlSelf->__PVT__count_6;
                vlSelf->__PVT__count_6 = vlSelf->__PVT__count_5;
                vlSelf->__PVT__count_5 = vlSelf->__PVT__count_4;
                vlSelf->__PVT__count_4 = vlSelf->__PVT__count_3;
                vlSelf->__PVT__count_3 = vlSelf->__PVT__count_1;
            }
        } else {
            vlSelf->__PVT__count_10 = 0U;
            vlSelf->__PVT__count_9 = 0U;
            vlSelf->__PVT__count_8 = 0U;
            vlSelf->__PVT__count_7 = 0U;
            vlSelf->__PVT__count_6 = 0U;
            vlSelf->__PVT__count_5 = 0U;
            vlSelf->__PVT__count_4 = 0U;
            vlSelf->__PVT__count_3 = 0U;
        }
        if ((1U & ((7U != (IData)(vlSelf->__PVT__count)) 
                   | (~ (IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable))))) {
            vlSelf->__PVT__count_1 = 0U;
        } else if ((7U == (IData)(vlSelf->__PVT__count))) {
            vlSelf->__PVT__count_1 = 1U;
        }
    }
    vlSelf->__PVT__Z21 = vlSelf->__Vdly__Z21;
    vlSelf->__PVT__Z11 = vlSelf->__Vdly__Z11;
    vlSelf->__PVT__Z12 = vlSelf->__Vdly__Z12;
    vlSelf->__PVT__Z13 = vlSelf->__Vdly__Z13;
    vlSelf->__PVT__Z22 = vlSelf->__Vdly__Z22;
    vlSelf->__PVT__Z31 = vlSelf->__Vdly__Z31;
    vlSelf->__PVT__Z41 = vlSelf->__Vdly__Z41;
    vlSelf->__PVT__Z32 = vlSelf->__Vdly__Z32;
    vlSelf->__PVT__Z23 = vlSelf->__Vdly__Z23;
    vlSelf->__PVT__Z14 = vlSelf->__Vdly__Z14;
    vlSelf->__PVT__Z15 = vlSelf->__Vdly__Z15;
    vlSelf->__PVT__Z24 = vlSelf->__Vdly__Z24;
    vlSelf->__PVT__Z33 = vlSelf->__Vdly__Z33;
    vlSelf->__PVT__Z42 = vlSelf->__Vdly__Z42;
    vlSelf->__PVT__Z51 = vlSelf->__Vdly__Z51;
    vlSelf->__PVT__Z61 = vlSelf->__Vdly__Z61;
    vlSelf->__PVT__Z52 = vlSelf->__Vdly__Z52;
    vlSelf->__PVT__Z43 = vlSelf->__Vdly__Z43;
    vlSelf->__PVT__Z34 = vlSelf->__Vdly__Z34;
    vlSelf->__PVT__Z25 = vlSelf->__Vdly__Z25;
    vlSelf->__PVT__Z16 = vlSelf->__Vdly__Z16;
    vlSelf->__PVT__Z17 = vlSelf->__Vdly__Z17;
    vlSelf->__PVT__Z26 = vlSelf->__Vdly__Z26;
    vlSelf->__PVT__Z35 = vlSelf->__Vdly__Z35;
    vlSelf->__PVT__Z44 = vlSelf->__Vdly__Z44;
    vlSelf->__PVT__Z53 = vlSelf->__Vdly__Z53;
    vlSelf->__PVT__Z62 = vlSelf->__Vdly__Z62;
    vlSelf->__PVT__Z71 = vlSelf->__Vdly__Z71;
    vlSelf->__PVT__Z81 = vlSelf->__Vdly__Z81;
    vlSelf->__PVT__Z72 = vlSelf->__Vdly__Z72;
    vlSelf->__PVT__Z63 = vlSelf->__Vdly__Z63;
    vlSelf->__PVT__Z54 = vlSelf->__Vdly__Z54;
    vlSelf->__PVT__Z45 = vlSelf->__Vdly__Z45;
    vlSelf->__PVT__Z36 = vlSelf->__Vdly__Z36;
    vlSelf->__PVT__Z27 = vlSelf->__Vdly__Z27;
    vlSelf->__PVT__Z18 = vlSelf->__Vdly__Z18;
    vlSelf->__PVT__Z28 = vlSelf->__Vdly__Z28;
    vlSelf->__PVT__Z37 = vlSelf->__Vdly__Z37;
    vlSelf->__PVT__Z46 = vlSelf->__Vdly__Z46;
    vlSelf->__PVT__Z55 = vlSelf->__Vdly__Z55;
    vlSelf->__PVT__Z64 = vlSelf->__Vdly__Z64;
    vlSelf->__PVT__Z73 = vlSelf->__Vdly__Z73;
    vlSelf->__PVT__Z82 = vlSelf->__Vdly__Z82;
    vlSelf->__PVT__Z83 = vlSelf->__Vdly__Z83;
    vlSelf->__PVT__Z74 = vlSelf->__Vdly__Z74;
    vlSelf->__PVT__Z65 = vlSelf->__Vdly__Z65;
    vlSelf->__PVT__Z56 = vlSelf->__Vdly__Z56;
    vlSelf->__PVT__Z47 = vlSelf->__Vdly__Z47;
    vlSelf->__PVT__Z38 = vlSelf->__Vdly__Z38;
    vlSelf->__PVT__Z48 = vlSelf->__Vdly__Z48;
    vlSelf->__PVT__Z57 = vlSelf->__Vdly__Z57;
    vlSelf->__PVT__Z66 = vlSelf->__Vdly__Z66;
    vlSelf->__PVT__Z75 = vlSelf->__Vdly__Z75;
    vlSelf->__PVT__Z84 = vlSelf->__Vdly__Z84;
    vlSelf->__PVT__Z85 = vlSelf->__Vdly__Z85;
    vlSelf->__PVT__Z76 = vlSelf->__Vdly__Z76;
    vlSelf->__PVT__Z67 = vlSelf->__Vdly__Z67;
    vlSelf->__PVT__Z58 = vlSelf->__Vdly__Z58;
    vlSelf->__PVT__Z68 = vlSelf->__Vdly__Z68;
    vlSelf->__PVT__Z77 = vlSelf->__Vdly__Z77;
    vlSelf->__PVT__Z86 = vlSelf->__Vdly__Z86;
    vlSelf->__PVT__Z87 = vlSelf->__Vdly__Z87;
    vlSelf->__PVT__Z78 = vlSelf->__Vdly__Z78;
    vlSelf->__PVT__Z88 = vlSelf->__Vdly__Z88;
    vlSelf->__PVT__count_of = vlSelf->__Vdly__count_of;
    vlSelf->__PVT__enable_1 = ((~ (IData)(vlSymsp->TOP.rst)) 
                               & (IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable));
    vlSelf->__PVT__count = vlSelf->__Vdly__count;
}

VL_INLINE_OPT void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__0(sub_dct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__Y11;
    IData/*24:0*/ __Vdly__Y21;
    IData/*24:0*/ __Vdly__Y31;
    IData/*24:0*/ __Vdly__Y41;
    IData/*24:0*/ __Vdly__Y51;
    IData/*24:0*/ __Vdly__Y61;
    IData/*24:0*/ __Vdly__Y71;
    IData/*24:0*/ __Vdly__Y81;
    CData/*2:0*/ __Vdly__count_of_copy;
    // Body
    vlSelf->__Vdly__count = vlSelf->__PVT__count;
    __Vdly__count_of_copy = vlSelf->__PVT__count_of_copy;
    vlSelf->__Vdly__count_of = vlSelf->__PVT__count_of;
    __Vdly__Y11 = vlSelf->__PVT__Y11;
    __Vdly__Y51 = vlSelf->__PVT__Y51;
    __Vdly__Y71 = vlSelf->__PVT__Y71;
    __Vdly__Y31 = vlSelf->__PVT__Y31;
    __Vdly__Y81 = vlSelf->__PVT__Y81;
    __Vdly__Y61 = vlSelf->__PVT__Y61;
    __Vdly__Y41 = vlSelf->__PVT__Y41;
    __Vdly__Y21 = vlSelf->__PVT__Y21;
    vlSelf->__Vdly__Z11 = vlSelf->__PVT__Z11;
    vlSelf->__Vdly__Z15 = vlSelf->__PVT__Z15;
    vlSelf->__Vdly__Z13 = vlSelf->__PVT__Z13;
    vlSelf->__Vdly__Z17 = vlSelf->__PVT__Z17;
    vlSelf->__Vdly__Z12 = vlSelf->__PVT__Z12;
    vlSelf->__Vdly__Z14 = vlSelf->__PVT__Z14;
    vlSelf->__Vdly__Z16 = vlSelf->__PVT__Z16;
    vlSelf->__Vdly__Z18 = vlSelf->__PVT__Z18;
    vlSelf->__Vdly__Z41 = vlSelf->__PVT__Z41;
    vlSelf->__Vdly__Z31 = vlSelf->__PVT__Z31;
    vlSelf->__Vdly__Z21 = vlSelf->__PVT__Z21;
    vlSelf->__Vdly__Z51 = vlSelf->__PVT__Z51;
    vlSelf->__Vdly__Z61 = vlSelf->__PVT__Z61;
    vlSelf->__Vdly__Z71 = vlSelf->__PVT__Z71;
    vlSelf->__Vdly__Z81 = vlSelf->__PVT__Z81;
    vlSelf->__Vdly__Z85 = vlSelf->__PVT__Z85;
    vlSelf->__Vdly__Z35 = vlSelf->__PVT__Z35;
    vlSelf->__Vdly__Z25 = vlSelf->__PVT__Z25;
    vlSelf->__Vdly__Z45 = vlSelf->__PVT__Z45;
    vlSelf->__Vdly__Z55 = vlSelf->__PVT__Z55;
    vlSelf->__Vdly__Z65 = vlSelf->__PVT__Z65;
    vlSelf->__Vdly__Z75 = vlSelf->__PVT__Z75;
    vlSelf->__Vdly__Z87 = vlSelf->__PVT__Z87;
    vlSelf->__Vdly__Z83 = vlSelf->__PVT__Z83;
    vlSelf->__Vdly__Z43 = vlSelf->__PVT__Z43;
    vlSelf->__Vdly__Z37 = vlSelf->__PVT__Z37;
    vlSelf->__Vdly__Z33 = vlSelf->__PVT__Z33;
    vlSelf->__Vdly__Z27 = vlSelf->__PVT__Z27;
    vlSelf->__Vdly__Z23 = vlSelf->__PVT__Z23;
    vlSelf->__Vdly__Z47 = vlSelf->__PVT__Z47;
    vlSelf->__Vdly__Z53 = vlSelf->__PVT__Z53;
    vlSelf->__Vdly__Z57 = vlSelf->__PVT__Z57;
    vlSelf->__Vdly__Z63 = vlSelf->__PVT__Z63;
    vlSelf->__Vdly__Z67 = vlSelf->__PVT__Z67;
    vlSelf->__Vdly__Z73 = vlSelf->__PVT__Z73;
    vlSelf->__Vdly__Z77 = vlSelf->__PVT__Z77;
    vlSelf->__Vdly__Z88 = vlSelf->__PVT__Z88;
    vlSelf->__Vdly__Z86 = vlSelf->__PVT__Z86;
    vlSelf->__Vdly__Z84 = vlSelf->__PVT__Z84;
    vlSelf->__Vdly__Z44 = vlSelf->__PVT__Z44;
    vlSelf->__Vdly__Z42 = vlSelf->__PVT__Z42;
    vlSelf->__Vdly__Z38 = vlSelf->__PVT__Z38;
    vlSelf->__Vdly__Z36 = vlSelf->__PVT__Z36;
    vlSelf->__Vdly__Z34 = vlSelf->__PVT__Z34;
    vlSelf->__Vdly__Z32 = vlSelf->__PVT__Z32;
    vlSelf->__Vdly__Z28 = vlSelf->__PVT__Z28;
    vlSelf->__Vdly__Z26 = vlSelf->__PVT__Z26;
    vlSelf->__Vdly__Z22 = vlSelf->__PVT__Z22;
    vlSelf->__Vdly__Z24 = vlSelf->__PVT__Z24;
    vlSelf->__Vdly__Z46 = vlSelf->__PVT__Z46;
    vlSelf->__Vdly__Z48 = vlSelf->__PVT__Z48;
    vlSelf->__Vdly__Z52 = vlSelf->__PVT__Z52;
    vlSelf->__Vdly__Z54 = vlSelf->__PVT__Z54;
    vlSelf->__Vdly__Z56 = vlSelf->__PVT__Z56;
    vlSelf->__Vdly__Z58 = vlSelf->__PVT__Z58;
    vlSelf->__Vdly__Z62 = vlSelf->__PVT__Z62;
    vlSelf->__Vdly__Z64 = vlSelf->__PVT__Z64;
    vlSelf->__Vdly__Z66 = vlSelf->__PVT__Z66;
    vlSelf->__Vdly__Z68 = vlSelf->__PVT__Z68;
    vlSelf->__Vdly__Z72 = vlSelf->__PVT__Z72;
    vlSelf->__Vdly__Z74 = vlSelf->__PVT__Z74;
    vlSelf->__Vdly__Z76 = vlSelf->__PVT__Z76;
    vlSelf->__Vdly__Z78 = vlSelf->__PVT__Z78;
    vlSelf->__Vdly__Z82 = vlSelf->__PVT__Z82;
    if (vlSymsp->TOP.rst) {
        vlSelf->__Vdly__count = 0U;
        __Vdly__count_of_copy = 0U;
        vlSelf->__Vdly__count_of = 0U;
        __Vdly__Y11 = 0U;
        __Vdly__Y51 = 0U;
        __Vdly__Y71 = 0U;
        __Vdly__Y31 = 0U;
        __Vdly__Y81 = 0U;
        __Vdly__Y61 = 0U;
        __Vdly__Y41 = 0U;
        __Vdly__Y21 = 0U;
        vlSelf->__Vdly__Z11 = 0U;
        vlSelf->__Vdly__Z15 = 0U;
        vlSelf->__Vdly__Z13 = 0U;
        vlSelf->__Vdly__Z17 = 0U;
        vlSelf->__Vdly__Z12 = 0U;
        vlSelf->__Vdly__Z14 = 0U;
        vlSelf->__Vdly__Z16 = 0U;
        vlSelf->__Vdly__Z18 = 0U;
        vlSelf->__Vdly__Z41 = 0U;
        vlSelf->__Vdly__Z31 = 0U;
        vlSelf->__Vdly__Z21 = 0U;
        vlSelf->__Vdly__Z51 = 0U;
        vlSelf->__Vdly__Z61 = 0U;
        vlSelf->__Vdly__Z71 = 0U;
        vlSelf->__Vdly__Z81 = 0U;
        vlSelf->__Vdly__Z85 = 0U;
        vlSelf->__Vdly__Z35 = 0U;
        vlSelf->__Vdly__Z25 = 0U;
        vlSelf->__Vdly__Z45 = 0U;
        vlSelf->__Vdly__Z55 = 0U;
        vlSelf->__Vdly__Z65 = 0U;
        vlSelf->__Vdly__Z75 = 0U;
        vlSelf->__Vdly__Z87 = 0U;
        vlSelf->__Vdly__Z83 = 0U;
        vlSelf->__Vdly__Z43 = 0U;
        vlSelf->__Vdly__Z37 = 0U;
        vlSelf->__Vdly__Z33 = 0U;
        vlSelf->__Vdly__Z27 = 0U;
        vlSelf->__Vdly__Z23 = 0U;
        vlSelf->__Vdly__Z47 = 0U;
        vlSelf->__Vdly__Z53 = 0U;
        vlSelf->__Vdly__Z57 = 0U;
        vlSelf->__Vdly__Z63 = 0U;
        vlSelf->__Vdly__Z67 = 0U;
        vlSelf->__Vdly__Z73 = 0U;
        vlSelf->__Vdly__Z77 = 0U;
        vlSelf->__Vdly__Z88 = 0U;
        vlSelf->__Vdly__Z86 = 0U;
        vlSelf->__Vdly__Z84 = 0U;
        vlSelf->__Vdly__Z44 = 0U;
        vlSelf->__Vdly__Z42 = 0U;
        vlSelf->__Vdly__Z38 = 0U;
        vlSelf->__Vdly__Z36 = 0U;
        vlSelf->__Vdly__Z34 = 0U;
        vlSelf->__Vdly__Z32 = 0U;
        vlSelf->__Vdly__Z28 = 0U;
        vlSelf->__Vdly__Z26 = 0U;
        vlSelf->__Vdly__Z22 = 0U;
        vlSelf->__Vdly__Z24 = 0U;
        vlSelf->__Vdly__Z46 = 0U;
        vlSelf->__Vdly__Z48 = 0U;
        vlSelf->__Vdly__Z52 = 0U;
        vlSelf->__Vdly__Z54 = 0U;
        vlSelf->__Vdly__Z56 = 0U;
        vlSelf->__Vdly__Z58 = 0U;
        vlSelf->__Vdly__Z62 = 0U;
        vlSelf->__Vdly__Z64 = 0U;
        vlSelf->__Vdly__Z66 = 0U;
        vlSelf->__Vdly__Z68 = 0U;
        vlSelf->__Vdly__Z72 = 0U;
        vlSelf->__Vdly__Z74 = 0U;
        vlSelf->__Vdly__Z76 = 0U;
        vlSelf->__Vdly__Z78 = 0U;
        vlSelf->__Vdly__Z82 = 0U;
        vlSelf->__PVT__Y_temp_11 = 0U;
        vlSelf->__PVT__Y_temp_51 = 0U;
        vlSelf->__PVT__Y_temp_71 = 0U;
        vlSelf->__PVT__Y_temp_31 = 0U;
        vlSelf->__PVT__Y_temp_81 = 0U;
        vlSelf->__PVT__Y_temp_61 = 0U;
        vlSelf->__PVT__Y_temp_41 = 0U;
        vlSelf->__PVT__Y_temp_21 = 0U;
        vlSelf->__PVT__Z_temp_11 = 0U;
        vlSelf->__PVT__Z_temp_15 = 0U;
        vlSelf->__PVT__Z_temp_13 = 0U;
        vlSelf->__PVT__Z_temp_17 = 0U;
        vlSelf->__PVT__Z_temp_12 = 0U;
        vlSelf->__PVT__Z_temp_14 = 0U;
        vlSelf->__PVT__Z_temp_16 = 0U;
        vlSelf->__PVT__Z_temp_18 = 0U;
        vlSelf->__PVT__Z_temp_41 = 0U;
        vlSelf->__PVT__Z_temp_31 = 0U;
        vlSelf->__PVT__Z_temp_21 = 0U;
        vlSelf->__PVT__Z_temp_51 = 0U;
        vlSelf->__PVT__Z_temp_61 = 0U;
        vlSelf->__PVT__Z_temp_71 = 0U;
        vlSelf->__PVT__Z_temp_81 = 0U;
        vlSelf->__PVT__Z_temp_85 = 0U;
        vlSelf->__PVT__Z_temp_35 = 0U;
        vlSelf->__PVT__Z_temp_25 = 0U;
        vlSelf->__PVT__Z_temp_45 = 0U;
        vlSelf->__PVT__Z_temp_55 = 0U;
        vlSelf->__PVT__Z_temp_65 = 0U;
        vlSelf->__PVT__Z_temp_75 = 0U;
        vlSelf->__PVT__Z_temp_87 = 0U;
        vlSelf->__PVT__Z_temp_83 = 0U;
        vlSelf->__PVT__Z_temp_43 = 0U;
        vlSelf->__PVT__Z_temp_37 = 0U;
        vlSelf->__PVT__Z_temp_33 = 0U;
        vlSelf->__PVT__Z_temp_27 = 0U;
        vlSelf->__PVT__Z_temp_23 = 0U;
        vlSelf->__PVT__Z_temp_47 = 0U;
        vlSelf->__PVT__Z_temp_53 = 0U;
        vlSelf->__PVT__Z_temp_57 = 0U;
        vlSelf->__PVT__Z_temp_63 = 0U;
        vlSelf->__PVT__Z_temp_67 = 0U;
        vlSelf->__PVT__Z_temp_73 = 0U;
        vlSelf->__PVT__Z_temp_77 = 0U;
        vlSelf->__PVT__Z_temp_88 = 0U;
        vlSelf->__PVT__Z_temp_86 = 0U;
        vlSelf->__PVT__Z_temp_84 = 0U;
        vlSelf->__PVT__Z_temp_44 = 0U;
        vlSelf->__PVT__Z_temp_42 = 0U;
        vlSelf->__PVT__Z_temp_38 = 0U;
        vlSelf->__PVT__Z_temp_36 = 0U;
        vlSelf->__PVT__Z_temp_34 = 0U;
        vlSelf->__PVT__Z_temp_32 = 0U;
        vlSelf->__PVT__Z_temp_28 = 0U;
        vlSelf->__PVT__Z_temp_26 = 0U;
        vlSelf->__PVT__Z_temp_22 = 0U;
        vlSelf->__PVT__Z_temp_24 = 0U;
        vlSelf->__PVT__Z_temp_46 = 0U;
        vlSelf->__PVT__Z_temp_48 = 0U;
        vlSelf->__PVT__Z_temp_52 = 0U;
        vlSelf->__PVT__Z_temp_54 = 0U;
        vlSelf->__PVT__Z_temp_56 = 0U;
        vlSelf->__PVT__Z_temp_58 = 0U;
        vlSelf->__PVT__Z_temp_62 = 0U;
        vlSelf->__PVT__Z_temp_64 = 0U;
        vlSelf->__PVT__Z_temp_66 = 0U;
        vlSelf->__PVT__Z_temp_68 = 0U;
        vlSelf->__PVT__Z_temp_72 = 0U;
        vlSelf->__PVT__Z_temp_74 = 0U;
        vlSelf->__PVT__Z_temp_76 = 0U;
        vlSelf->__PVT__Z_temp_78 = 0U;
        vlSelf->__PVT__Z_temp_82 = 0U;
        vlSelf->__PVT__data_1 = 0U;
        vlSelf->__PVT__Y11_final_4 = 0U;
        vlSelf->__PVT__Y31_final_2 = 0U;
        vlSelf->__PVT__Y21_final_2 = 0U;
        vlSelf->__PVT__Y41_final_2 = 0U;
        vlSelf->__PVT__Y51_final_2 = 0U;
        vlSelf->__PVT__Y61_final_2 = 0U;
        vlSelf->__PVT__Y71_final_2 = 0U;
        vlSelf->__PVT__Y81_final_2 = 0U;
        vlSelf->__PVT__Y11_final_3 = 0U;
        vlSelf->__PVT__Y31_final_1 = 0U;
        vlSelf->__PVT__Y21_final_1 = 0U;
        vlSelf->__PVT__Y41_final_1 = 0U;
        vlSelf->__PVT__Y51_final_1 = 0U;
        vlSelf->__PVT__Y61_final_1 = 0U;
        vlSelf->__PVT__Y71_final_1 = 0U;
        vlSelf->__PVT__Y81_final_1 = 0U;
        vlSelf->__PVT__Y11_final_2 = 0U;
        vlSelf->__PVT__Y31_final_diff = 0U;
        vlSelf->__PVT__Y21_final_diff = 0U;
        vlSelf->__PVT__Y41_final_diff = 0U;
        vlSelf->__PVT__Y51_final_diff = 0U;
        vlSelf->__PVT__Y61_final_diff = 0U;
        vlSelf->__PVT__Y71_final_diff = 0U;
        vlSelf->__PVT__Y81_final_diff = 0U;
        vlSelf->__PVT__Y11_final_1 = 0U;
        vlSelf->__PVT__Y31_final_prev = 0U;
        vlSelf->__PVT__Y21_final_prev = 0U;
        vlSelf->__PVT__Y41_final_prev = 0U;
        vlSelf->__PVT__Y51_final_prev = 0U;
        vlSelf->__PVT__Y61_final_prev = 0U;
        vlSelf->__PVT__Y71_final_prev = 0U;
        vlSelf->__PVT__Y81_final_prev = 0U;
        vlSelf->__PVT__Y11_final = 0U;
        vlSelf->__PVT__Y31_final = 0U;
        vlSelf->__PVT__Y21_final = 0U;
        vlSelf->__PVT__Y41_final = 0U;
        vlSelf->__PVT__Y51_final = 0U;
        vlSelf->__PVT__Y61_final = 0U;
        vlSelf->__PVT__Y71_final = 0U;
        vlSelf->__PVT__Y81_final = 0U;
    } else {
        if (((1U == (IData)(vlSelf->__PVT__count)) 
             & (IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable))) {
            __Vdly__Y11 = vlSelf->__PVT__Y_temp_11;
        } else if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            __Vdly__Y11 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_11 
                                         + vlSelf->__PVT__Y11));
        }
        if (((IData)(vlSelf->__PVT__count_8) & (1U 
                                                == (IData)(vlSelf->__PVT__count_of)))) {
            vlSelf->__Vdly__Z11 = 0U;
            vlSelf->__Vdly__Z15 = 0U;
            vlSelf->__Vdly__Z13 = 0U;
            vlSelf->__Vdly__Z17 = 0U;
            vlSelf->__Vdly__Z12 = 0U;
            vlSelf->__Vdly__Z14 = 0U;
            vlSelf->__Vdly__Z16 = 0U;
            vlSelf->__Vdly__Z18 = 0U;
            vlSelf->__Vdly__Z41 = 0U;
            vlSelf->__Vdly__Z31 = 0U;
            vlSelf->__Vdly__Z21 = 0U;
            vlSelf->__Vdly__Z51 = 0U;
            vlSelf->__Vdly__Z61 = 0U;
            vlSelf->__Vdly__Z71 = 0U;
            vlSelf->__Vdly__Z81 = 0U;
            vlSelf->__Vdly__Z85 = 0U;
            vlSelf->__Vdly__Z35 = 0U;
            vlSelf->__Vdly__Z25 = 0U;
            vlSelf->__Vdly__Z45 = 0U;
            vlSelf->__Vdly__Z55 = 0U;
            vlSelf->__Vdly__Z65 = 0U;
            vlSelf->__Vdly__Z75 = 0U;
            vlSelf->__Vdly__Z87 = 0U;
            vlSelf->__Vdly__Z83 = 0U;
            vlSelf->__Vdly__Z43 = 0U;
            vlSelf->__Vdly__Z37 = 0U;
            vlSelf->__Vdly__Z33 = 0U;
            vlSelf->__Vdly__Z27 = 0U;
            vlSelf->__Vdly__Z23 = 0U;
            vlSelf->__Vdly__Z47 = 0U;
            vlSelf->__Vdly__Z53 = 0U;
            vlSelf->__Vdly__Z57 = 0U;
            vlSelf->__Vdly__Z63 = 0U;
            vlSelf->__Vdly__Z67 = 0U;
            vlSelf->__Vdly__Z73 = 0U;
            vlSelf->__Vdly__Z77 = 0U;
            vlSelf->__Vdly__Z88 = 0U;
            vlSelf->__Vdly__Z86 = 0U;
            vlSelf->__Vdly__Z84 = 0U;
            vlSelf->__Vdly__Z44 = 0U;
            vlSelf->__Vdly__Z42 = 0U;
            vlSelf->__Vdly__Z38 = 0U;
            vlSelf->__Vdly__Z36 = 0U;
            vlSelf->__Vdly__Z34 = 0U;
            vlSelf->__Vdly__Z32 = 0U;
            vlSelf->__Vdly__Z28 = 0U;
            vlSelf->__Vdly__Z26 = 0U;
            vlSelf->__Vdly__Z22 = 0U;
            vlSelf->__Vdly__Z24 = 0U;
            vlSelf->__Vdly__Z46 = 0U;
            vlSelf->__Vdly__Z48 = 0U;
            vlSelf->__Vdly__Z52 = 0U;
            vlSelf->__Vdly__Z54 = 0U;
            vlSelf->__Vdly__Z56 = 0U;
            vlSelf->__Vdly__Z58 = 0U;
            vlSelf->__Vdly__Z62 = 0U;
            vlSelf->__Vdly__Z64 = 0U;
            vlSelf->__Vdly__Z66 = 0U;
            vlSelf->__Vdly__Z68 = 0U;
            vlSelf->__Vdly__Z72 = 0U;
            vlSelf->__Vdly__Z74 = 0U;
            vlSelf->__Vdly__Z76 = 0U;
            vlSelf->__Vdly__Z78 = 0U;
            vlSelf->__Vdly__Z82 = 0U;
        } else if (((IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) 
                    & (IData)(vlSelf->__PVT__count_9))) {
            vlSelf->__Vdly__Z11 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_11 
                                                 + vlSelf->__PVT__Z11));
            vlSelf->__Vdly__Z15 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_15 
                                                 + vlSelf->__PVT__Z15));
            vlSelf->__Vdly__Z13 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_13 
                                                 + vlSelf->__PVT__Z13));
            vlSelf->__Vdly__Z17 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_17 
                                                 + vlSelf->__PVT__Z17));
            vlSelf->__Vdly__Z12 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_12 
                                                 + vlSelf->__PVT__Z12));
            vlSelf->__Vdly__Z14 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_14 
                                                 + vlSelf->__PVT__Z14));
            vlSelf->__Vdly__Z16 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_16 
                                                 + vlSelf->__PVT__Z16));
            vlSelf->__Vdly__Z18 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_18 
                                                 + vlSelf->__PVT__Z18));
            vlSelf->__Vdly__Z41 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_41 
                                                 + vlSelf->__PVT__Z41));
            vlSelf->__Vdly__Z31 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_31 
                                                 + vlSelf->__PVT__Z31));
            vlSelf->__Vdly__Z21 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_21 
                                                 + vlSelf->__PVT__Z21));
            vlSelf->__Vdly__Z51 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_51 
                                                 + vlSelf->__PVT__Z51));
            vlSelf->__Vdly__Z61 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_61 
                                                 + vlSelf->__PVT__Z61));
            vlSelf->__Vdly__Z71 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_71 
                                                 + vlSelf->__PVT__Z71));
            vlSelf->__Vdly__Z81 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_81 
                                                 + vlSelf->__PVT__Z81));
            vlSelf->__Vdly__Z85 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_85 
                                                 + vlSelf->__PVT__Z85));
            vlSelf->__Vdly__Z35 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_35 
                                                 + vlSelf->__PVT__Z35));
            vlSelf->__Vdly__Z25 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_25 
                                                 + vlSelf->__PVT__Z25));
            vlSelf->__Vdly__Z45 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_45 
                                                 + vlSelf->__PVT__Z45));
            vlSelf->__Vdly__Z55 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_55 
                                                 + vlSelf->__PVT__Z55));
            vlSelf->__Vdly__Z65 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_65 
                                                 + vlSelf->__PVT__Z65));
            vlSelf->__Vdly__Z75 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_75 
                                                 + vlSelf->__PVT__Z75));
            vlSelf->__Vdly__Z87 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_87 
                                                 + vlSelf->__PVT__Z87));
            vlSelf->__Vdly__Z83 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_83 
                                                 + vlSelf->__PVT__Z83));
            vlSelf->__Vdly__Z43 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_43 
                                                 + vlSelf->__PVT__Z43));
            vlSelf->__Vdly__Z37 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_37 
                                                 + vlSelf->__PVT__Z37));
            vlSelf->__Vdly__Z33 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_33 
                                                 + vlSelf->__PVT__Z33));
            vlSelf->__Vdly__Z27 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_27 
                                                 + vlSelf->__PVT__Z27));
            vlSelf->__Vdly__Z23 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_23 
                                                 + vlSelf->__PVT__Z23));
            vlSelf->__Vdly__Z47 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_47 
                                                 + vlSelf->__PVT__Z47));
            vlSelf->__Vdly__Z53 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_53 
                                                 + vlSelf->__PVT__Z53));
            vlSelf->__Vdly__Z57 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_57 
                                                 + vlSelf->__PVT__Z57));
            vlSelf->__Vdly__Z63 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_63 
                                                 + vlSelf->__PVT__Z63));
            vlSelf->__Vdly__Z67 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_67 
                                                 + vlSelf->__PVT__Z67));
            vlSelf->__Vdly__Z73 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_73 
                                                 + vlSelf->__PVT__Z73));
            vlSelf->__Vdly__Z77 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_77 
                                                 + vlSelf->__PVT__Z77));
            vlSelf->__Vdly__Z88 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_88 
                                                 + vlSelf->__PVT__Z88));
            vlSelf->__Vdly__Z86 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_86 
                                                 + vlSelf->__PVT__Z86));
            vlSelf->__Vdly__Z84 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_84 
                                                 + vlSelf->__PVT__Z84));
            vlSelf->__Vdly__Z44 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_44 
                                                 + vlSelf->__PVT__Z44));
            vlSelf->__Vdly__Z42 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_42 
                                                 + vlSelf->__PVT__Z42));
            vlSelf->__Vdly__Z38 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_38 
                                                 + vlSelf->__PVT__Z38));
            vlSelf->__Vdly__Z36 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_36 
                                                 + vlSelf->__PVT__Z36));
            vlSelf->__Vdly__Z34 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_34 
                                                 + vlSelf->__PVT__Z34));
            vlSelf->__Vdly__Z32 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_32 
                                                 + vlSelf->__PVT__Z32));
            vlSelf->__Vdly__Z28 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_28 
                                                 + vlSelf->__PVT__Z28));
            vlSelf->__Vdly__Z26 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_26 
                                                 + vlSelf->__PVT__Z26));
            vlSelf->__Vdly__Z22 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_22 
                                                 + vlSelf->__PVT__Z22));
            vlSelf->__Vdly__Z24 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_24 
                                                 + vlSelf->__PVT__Z24));
            vlSelf->__Vdly__Z46 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_46 
                                                 + vlSelf->__PVT__Z46));
            vlSelf->__Vdly__Z48 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_48 
                                                 + vlSelf->__PVT__Z48));
            vlSelf->__Vdly__Z52 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_52 
                                                 + vlSelf->__PVT__Z52));
            vlSelf->__Vdly__Z54 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_54 
                                                 + vlSelf->__PVT__Z54));
            vlSelf->__Vdly__Z56 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_56 
                                                 + vlSelf->__PVT__Z56));
            vlSelf->__Vdly__Z58 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_58 
                                                 + vlSelf->__PVT__Z58));
            vlSelf->__Vdly__Z62 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_62 
                                                 + vlSelf->__PVT__Z62));
            vlSelf->__Vdly__Z64 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_64 
                                                 + vlSelf->__PVT__Z64));
            vlSelf->__Vdly__Z66 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_66 
                                                 + vlSelf->__PVT__Z66));
            vlSelf->__Vdly__Z68 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_68 
                                                 + vlSelf->__PVT__Z68));
            vlSelf->__Vdly__Z72 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_72 
                                                 + vlSelf->__PVT__Z72));
            vlSelf->__Vdly__Z74 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_74 
                                                 + vlSelf->__PVT__Z74));
            vlSelf->__Vdly__Z76 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_76 
                                                 + vlSelf->__PVT__Z76));
            vlSelf->__Vdly__Z78 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_78 
                                                 + vlSelf->__PVT__Z78));
            vlSelf->__Vdly__Z82 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_82 
                                                 + vlSelf->__PVT__Z82));
        }
        if (((IData)(vlSelf->__PVT__enable_1) & (IData)(vlSelf->__PVT__count_8))) {
            vlSelf->__PVT__Z_temp_11 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_15 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_13 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_17 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_12 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_14 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_16 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_18 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_41 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_31 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_21 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_51 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_61 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_71 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_81 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_85 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_35 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_25 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_45 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_55 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_65 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_75 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_87 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_83 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_43 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_37 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_33 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_27 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_23 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_47 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_53 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_57 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_63 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_67 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_73 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_77 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_88 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_86 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_84 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_44 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_42 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_38 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_36 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_34 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_32 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_28 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_26 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_22 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_24 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_46 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_48 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_52 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_54 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_56 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_58 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_62 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_64 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_66 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_68 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_72 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_74 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_76 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_78 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_82 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
        }
        if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
                vlSelf->__Vdly__count = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__count)));
            }
            if (vlSelf->__PVT__count_1) {
                __Vdly__count_of_copy = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__count_of_copy)));
                vlSelf->__Vdly__count_of = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__count_of)));
            }
            vlSelf->__PVT__Y_temp_11 = (0x1ffffffU 
                                        & ((IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB) 
                                           * vlSelf->__PVT__T1));
        } else {
            vlSelf->__Vdly__count = 0U;
            __Vdly__count_of_copy = 0U;
            vlSelf->__Vdly__count_of = 0U;
        }
        if (vlSelf->__PVT__enable_1) {
            if (vlSelf->__PVT__enable_1) {
                __Vdly__Y51 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_51 
                                             + vlSelf->__PVT__Y51));
                __Vdly__Y71 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_71 
                                             + vlSelf->__PVT__Y71));
                __Vdly__Y31 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_31 
                                             + vlSelf->__PVT__Y31));
                __Vdly__Y81 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_81 
                                             + vlSelf->__PVT__Y81));
                __Vdly__Y61 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_61 
                                             + vlSelf->__PVT__Y61));
                __Vdly__Y41 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_41 
                                             + vlSelf->__PVT__Y41));
                __Vdly__Y21 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_21 
                                             + vlSelf->__PVT__Y21));
                vlSelf->__PVT__Y_temp_51 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y5_mul_input);
                vlSelf->__PVT__Y_temp_71 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y7_mul_input);
                vlSelf->__PVT__Y_temp_31 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y3_mul_input);
                vlSelf->__PVT__Y_temp_81 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y8_mul_input);
                vlSelf->__PVT__Y_temp_61 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y6_mul_input);
                vlSelf->__PVT__Y_temp_41 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y4_mul_input);
                vlSelf->__PVT__Y_temp_21 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y2_mul_input);
            }
        } else {
            __Vdly__Y51 = 0U;
            __Vdly__Y71 = 0U;
            __Vdly__Y31 = 0U;
            __Vdly__Y81 = 0U;
            __Vdly__Y61 = 0U;
            __Vdly__Y41 = 0U;
            __Vdly__Y21 = 0U;
            vlSelf->__PVT__Y_temp_51 = 0U;
            vlSelf->__PVT__Y_temp_71 = 0U;
            vlSelf->__PVT__Y_temp_31 = 0U;
            vlSelf->__PVT__Y_temp_81 = 0U;
            vlSelf->__PVT__Y_temp_61 = 0U;
            vlSelf->__PVT__Y_temp_41 = 0U;
            vlSelf->__PVT__Y_temp_21 = 0U;
        }
        if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            vlSelf->__PVT__data_1 = vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB;
            vlSelf->__PVT__Y11_final_4 = vlSelf->__PVT__Y11_final_3;
            vlSelf->__PVT__Y31_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y31_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y31_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y31_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y31_final_2) 
                                          | (IData)(vlSelf->__PVT__Y31_final_1));
            vlSelf->__PVT__Y21_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y21_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y21_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y21_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y21_final_2) 
                                          | (IData)(vlSelf->__PVT__Y21_final_1));
            vlSelf->__PVT__Y41_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y41_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y41_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y41_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y41_final_2) 
                                          | (IData)(vlSelf->__PVT__Y41_final_1));
            vlSelf->__PVT__Y51_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y51_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y51_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y51_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y51_final_2) 
                                          | (IData)(vlSelf->__PVT__Y51_final_1));
            vlSelf->__PVT__Y61_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y61_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y61_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y61_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y61_final_2) 
                                          | (IData)(vlSelf->__PVT__Y61_final_1));
            vlSelf->__PVT__Y71_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y71_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y71_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y71_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y71_final_2) 
                                          | (IData)(vlSelf->__PVT__Y71_final_1));
            vlSelf->__PVT__Y81_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y81_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y81_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y81_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y81_final_2) 
                                          | (IData)(vlSelf->__PVT__Y81_final_1));
            vlSelf->__PVT__Y11_final_3 = vlSelf->__PVT__Y11_final_2;
            vlSelf->__PVT__Y31_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y31_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y31_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y31_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y21_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y21_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y21_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y21_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y41_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y41_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y41_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y41_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y51_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y51_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y51_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y51_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y61_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y61_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y61_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y61_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y71_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y71_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y71_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y71_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y81_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y81_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y81_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y81_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y11_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y11_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y11_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y11_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y11_final_2) 
                                          | (IData)(vlSelf->__PVT__Y11_final_1));
            vlSelf->__PVT__Y11_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y11_final)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y11_final 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y11_final 
                                                  >> 0xcU))));
        }
        if (((IData)(vlSelf->__PVT__count_5) & (IData)(vlSelf->__PVT__enable_1))) {
            vlSelf->__PVT__Y31_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y31_final 
                                                - vlSelf->__PVT__Y31_final_prev));
            vlSelf->__PVT__Y21_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y21_final 
                                                - vlSelf->__PVT__Y21_final_prev));
            vlSelf->__PVT__Y41_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y41_final 
                                                - vlSelf->__PVT__Y41_final_prev));
            vlSelf->__PVT__Y51_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y51_final 
                                                - vlSelf->__PVT__Y51_final_prev));
            vlSelf->__PVT__Y61_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y61_final 
                                                - vlSelf->__PVT__Y61_final_prev));
            vlSelf->__PVT__Y71_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y71_final 
                                                - vlSelf->__PVT__Y71_final_prev));
            vlSelf->__PVT__Y81_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y81_final 
                                                - vlSelf->__PVT__Y81_final_prev));
        }
        if (vlSelf->__PVT__enable_1) {
            if (((IData)(vlSelf->__PVT__count_4) & (IData)(vlSelf->__PVT__enable_1))) {
                vlSelf->__PVT__Y31_final_prev = vlSelf->__PVT__Y31_final;
                vlSelf->__PVT__Y21_final_prev = vlSelf->__PVT__Y21_final;
                vlSelf->__PVT__Y41_final_prev = vlSelf->__PVT__Y41_final;
                vlSelf->__PVT__Y51_final_prev = vlSelf->__PVT__Y51_final;
                vlSelf->__PVT__Y61_final_prev = vlSelf->__PVT__Y61_final;
                vlSelf->__PVT__Y71_final_prev = vlSelf->__PVT__Y71_final;
                vlSelf->__PVT__Y81_final_prev = vlSelf->__PVT__Y81_final;
                vlSelf->__PVT__Y31_final = vlSelf->__PVT__Y31;
                vlSelf->__PVT__Y21_final = vlSelf->__PVT__Y21;
                vlSelf->__PVT__Y41_final = vlSelf->__PVT__Y41;
                vlSelf->__PVT__Y51_final = vlSelf->__PVT__Y51;
                vlSelf->__PVT__Y61_final = vlSelf->__PVT__Y61;
                vlSelf->__PVT__Y71_final = vlSelf->__PVT__Y71;
                vlSelf->__PVT__Y81_final = vlSelf->__PVT__Y81;
            }
        } else {
            vlSelf->__PVT__Y31_final_prev = 0U;
            vlSelf->__PVT__Y21_final_prev = 0U;
            vlSelf->__PVT__Y41_final_prev = 0U;
            vlSelf->__PVT__Y51_final_prev = 0U;
            vlSelf->__PVT__Y61_final_prev = 0U;
            vlSelf->__PVT__Y71_final_prev = 0U;
            vlSelf->__PVT__Y81_final_prev = 0U;
            vlSelf->__PVT__Y31_final = 0U;
            vlSelf->__PVT__Y21_final = 0U;
            vlSelf->__PVT__Y41_final = 0U;
            vlSelf->__PVT__Y51_final = 0U;
            vlSelf->__PVT__Y61_final = 0U;
            vlSelf->__PVT__Y71_final = 0U;
            vlSelf->__PVT__Y81_final = 0U;
        }
        if (((IData)(vlSelf->__PVT__count_3) & (IData)(vlSelf->__PVT__enable_1))) {
            vlSelf->__PVT__Y11_final = (0x1ffffffU 
                                        & (vlSelf->__PVT__Y11 
                                           - (IData)(0x5a8400U)));
        }
    }
    if ((4U & (IData)(vlSelf->__PVT__count))) {
        if ((2U & (IData)(vlSelf->__PVT__count))) {
            if ((1U & (IData)(vlSelf->__PVT__count))) {
                vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
                vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T32;
                vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T31;
                vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T25;
                vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T26;
                vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T27;
                vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T28;
            } else {
                vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
                vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T34;
                vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T32;
                vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T23;
                vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T21;
                vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T24;
                vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T27;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__count))) {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T31;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T27;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T25;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T21;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T26;
        } else {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T34;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T21;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T27;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T23;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T25;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__count))) {
        if ((1U & (IData)(vlSelf->__PVT__count))) {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T34;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T28;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T22;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T26;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T24;
        } else {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T31;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T22;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T24;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T28;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T23;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__count))) {
        vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
        vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T34;
        vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T32;
        vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T26;
        vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T28;
        vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T25;
        vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T22;
    } else {
        vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
        vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T32;
        vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T31;
        vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T24;
        vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T23;
        vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T22;
        vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T21;
    }
    if ((4U & (IData)(vlSelf->__PVT__count_of_copy))) {
        if ((2U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti52;
            if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
                vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti32;
                vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti34;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti24;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti23;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti27;
            } else {
                vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti33;
                vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti31;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti25;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti27;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti26;
            }
        } else {
            vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti1;
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti34;
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti33;
            if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti23;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti27;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti25;
            } else {
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti26;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti22;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti28;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti24;
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__count_of_copy))) {
        vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti52;
        if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti33;
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti31;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti28;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti24;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti22;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti23;
        } else {
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti32;
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti34;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti25;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti28;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti26;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti22;
        }
    } else {
        vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti1;
        vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti31;
        vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti32;
        if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti22;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti23;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti24;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti21;
        } else {
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti27;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti26;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti25;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti28;
        }
    }
    vlSelf->__PVT__count_of_copy = __Vdly__count_of_copy;
    vlSelf->__PVT__T52 = 0xffffe95fU;
    vlSelf->__PVT__T1 = 0x16a1U;
    vlSelf->__PVT__T31 = 0x1d90U;
    vlSelf->__PVT__T32 = 0xc3fU;
    vlSelf->__PVT__T33 = 0xfffff3c1U;
    vlSelf->__PVT__T34 = 0xffffe270U;
    vlSelf->__PVT__T28 = 0xffffe09dU;
    vlSelf->__PVT__T27 = 0xffffe565U;
    vlSelf->__PVT__T26 = 0xffffee39U;
    vlSelf->__PVT__T25 = 0xfffff9c2U;
    vlSelf->__PVT__T24 = 0x63eU;
    vlSelf->__PVT__T23 = 0x11c7U;
    vlSelf->__PVT__T22 = 0x1a9bU;
    vlSelf->__PVT__T21 = 0x1f63U;
    vlSelf->__PVT__Ti52 = 0xffffe95fU;
    vlSelf->__PVT__Ti1 = 0x16a1U;
    vlSelf->__PVT__Ti34 = 0xffffe270U;
    vlSelf->__PVT__Ti31 = 0x1d90U;
    vlSelf->__PVT__Ti33 = 0xfffff3c1U;
    vlSelf->__PVT__Ti32 = 0xc3fU;
    vlSelf->__PVT__Ti27 = 0xffffe565U;
    vlSelf->__PVT__Ti26 = 0xffffee39U;
    vlSelf->__PVT__Ti25 = 0xfffff9c2U;
    vlSelf->__PVT__Ti24 = 0x63eU;
    vlSelf->__PVT__Ti23 = 0x11c7U;
    vlSelf->__PVT__Ti22 = 0x1a9bU;
    vlSelf->__PVT__Ti21 = 0x1f63U;
    vlSelf->__PVT__Ti28 = 0xffffe09dU;
    vlSelf->__PVT__Y11 = __Vdly__Y11;
    vlSelf->__PVT__Y31 = __Vdly__Y31;
    vlSelf->__PVT__Y21 = __Vdly__Y21;
    vlSelf->__PVT__Y41 = __Vdly__Y41;
    vlSelf->__PVT__Y51 = __Vdly__Y51;
    vlSelf->__PVT__Y61 = __Vdly__Y61;
    vlSelf->__PVT__Y71 = __Vdly__Y71;
    vlSelf->__PVT__Y81 = __Vdly__Y81;
}

VL_INLINE_OPT void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__0(sub_dct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__Y11;
    IData/*24:0*/ __Vdly__Y21;
    IData/*24:0*/ __Vdly__Y31;
    IData/*24:0*/ __Vdly__Y41;
    IData/*24:0*/ __Vdly__Y51;
    IData/*24:0*/ __Vdly__Y61;
    IData/*24:0*/ __Vdly__Y71;
    IData/*24:0*/ __Vdly__Y81;
    CData/*2:0*/ __Vdly__count_of_copy;
    // Body
    vlSelf->__Vdly__count = vlSelf->__PVT__count;
    __Vdly__count_of_copy = vlSelf->__PVT__count_of_copy;
    vlSelf->__Vdly__count_of = vlSelf->__PVT__count_of;
    __Vdly__Y11 = vlSelf->__PVT__Y11;
    __Vdly__Y51 = vlSelf->__PVT__Y51;
    __Vdly__Y71 = vlSelf->__PVT__Y71;
    __Vdly__Y31 = vlSelf->__PVT__Y31;
    __Vdly__Y81 = vlSelf->__PVT__Y81;
    __Vdly__Y61 = vlSelf->__PVT__Y61;
    __Vdly__Y41 = vlSelf->__PVT__Y41;
    __Vdly__Y21 = vlSelf->__PVT__Y21;
    vlSelf->__Vdly__Z11 = vlSelf->__PVT__Z11;
    vlSelf->__Vdly__Z15 = vlSelf->__PVT__Z15;
    vlSelf->__Vdly__Z13 = vlSelf->__PVT__Z13;
    vlSelf->__Vdly__Z17 = vlSelf->__PVT__Z17;
    vlSelf->__Vdly__Z12 = vlSelf->__PVT__Z12;
    vlSelf->__Vdly__Z14 = vlSelf->__PVT__Z14;
    vlSelf->__Vdly__Z16 = vlSelf->__PVT__Z16;
    vlSelf->__Vdly__Z18 = vlSelf->__PVT__Z18;
    vlSelf->__Vdly__Z41 = vlSelf->__PVT__Z41;
    vlSelf->__Vdly__Z31 = vlSelf->__PVT__Z31;
    vlSelf->__Vdly__Z21 = vlSelf->__PVT__Z21;
    vlSelf->__Vdly__Z51 = vlSelf->__PVT__Z51;
    vlSelf->__Vdly__Z61 = vlSelf->__PVT__Z61;
    vlSelf->__Vdly__Z71 = vlSelf->__PVT__Z71;
    vlSelf->__Vdly__Z81 = vlSelf->__PVT__Z81;
    vlSelf->__Vdly__Z85 = vlSelf->__PVT__Z85;
    vlSelf->__Vdly__Z35 = vlSelf->__PVT__Z35;
    vlSelf->__Vdly__Z25 = vlSelf->__PVT__Z25;
    vlSelf->__Vdly__Z45 = vlSelf->__PVT__Z45;
    vlSelf->__Vdly__Z55 = vlSelf->__PVT__Z55;
    vlSelf->__Vdly__Z65 = vlSelf->__PVT__Z65;
    vlSelf->__Vdly__Z75 = vlSelf->__PVT__Z75;
    vlSelf->__Vdly__Z87 = vlSelf->__PVT__Z87;
    vlSelf->__Vdly__Z83 = vlSelf->__PVT__Z83;
    vlSelf->__Vdly__Z43 = vlSelf->__PVT__Z43;
    vlSelf->__Vdly__Z37 = vlSelf->__PVT__Z37;
    vlSelf->__Vdly__Z33 = vlSelf->__PVT__Z33;
    vlSelf->__Vdly__Z27 = vlSelf->__PVT__Z27;
    vlSelf->__Vdly__Z23 = vlSelf->__PVT__Z23;
    vlSelf->__Vdly__Z47 = vlSelf->__PVT__Z47;
    vlSelf->__Vdly__Z53 = vlSelf->__PVT__Z53;
    vlSelf->__Vdly__Z57 = vlSelf->__PVT__Z57;
    vlSelf->__Vdly__Z63 = vlSelf->__PVT__Z63;
    vlSelf->__Vdly__Z67 = vlSelf->__PVT__Z67;
    vlSelf->__Vdly__Z73 = vlSelf->__PVT__Z73;
    vlSelf->__Vdly__Z77 = vlSelf->__PVT__Z77;
    vlSelf->__Vdly__Z88 = vlSelf->__PVT__Z88;
    vlSelf->__Vdly__Z86 = vlSelf->__PVT__Z86;
    vlSelf->__Vdly__Z84 = vlSelf->__PVT__Z84;
    vlSelf->__Vdly__Z44 = vlSelf->__PVT__Z44;
    vlSelf->__Vdly__Z42 = vlSelf->__PVT__Z42;
    vlSelf->__Vdly__Z38 = vlSelf->__PVT__Z38;
    vlSelf->__Vdly__Z36 = vlSelf->__PVT__Z36;
    vlSelf->__Vdly__Z34 = vlSelf->__PVT__Z34;
    vlSelf->__Vdly__Z32 = vlSelf->__PVT__Z32;
    vlSelf->__Vdly__Z28 = vlSelf->__PVT__Z28;
    vlSelf->__Vdly__Z26 = vlSelf->__PVT__Z26;
    vlSelf->__Vdly__Z22 = vlSelf->__PVT__Z22;
    vlSelf->__Vdly__Z24 = vlSelf->__PVT__Z24;
    vlSelf->__Vdly__Z46 = vlSelf->__PVT__Z46;
    vlSelf->__Vdly__Z48 = vlSelf->__PVT__Z48;
    vlSelf->__Vdly__Z52 = vlSelf->__PVT__Z52;
    vlSelf->__Vdly__Z54 = vlSelf->__PVT__Z54;
    vlSelf->__Vdly__Z56 = vlSelf->__PVT__Z56;
    vlSelf->__Vdly__Z58 = vlSelf->__PVT__Z58;
    vlSelf->__Vdly__Z62 = vlSelf->__PVT__Z62;
    vlSelf->__Vdly__Z64 = vlSelf->__PVT__Z64;
    vlSelf->__Vdly__Z66 = vlSelf->__PVT__Z66;
    vlSelf->__Vdly__Z68 = vlSelf->__PVT__Z68;
    vlSelf->__Vdly__Z72 = vlSelf->__PVT__Z72;
    vlSelf->__Vdly__Z74 = vlSelf->__PVT__Z74;
    vlSelf->__Vdly__Z76 = vlSelf->__PVT__Z76;
    vlSelf->__Vdly__Z78 = vlSelf->__PVT__Z78;
    vlSelf->__Vdly__Z82 = vlSelf->__PVT__Z82;
    if (vlSymsp->TOP.rst) {
        vlSelf->__Vdly__count = 0U;
        __Vdly__count_of_copy = 0U;
        vlSelf->__Vdly__count_of = 0U;
        __Vdly__Y11 = 0U;
        __Vdly__Y51 = 0U;
        __Vdly__Y71 = 0U;
        __Vdly__Y31 = 0U;
        __Vdly__Y81 = 0U;
        __Vdly__Y61 = 0U;
        __Vdly__Y41 = 0U;
        __Vdly__Y21 = 0U;
        vlSelf->__Vdly__Z11 = 0U;
        vlSelf->__Vdly__Z15 = 0U;
        vlSelf->__Vdly__Z13 = 0U;
        vlSelf->__Vdly__Z17 = 0U;
        vlSelf->__Vdly__Z12 = 0U;
        vlSelf->__Vdly__Z14 = 0U;
        vlSelf->__Vdly__Z16 = 0U;
        vlSelf->__Vdly__Z18 = 0U;
        vlSelf->__Vdly__Z41 = 0U;
        vlSelf->__Vdly__Z31 = 0U;
        vlSelf->__Vdly__Z21 = 0U;
        vlSelf->__Vdly__Z51 = 0U;
        vlSelf->__Vdly__Z61 = 0U;
        vlSelf->__Vdly__Z71 = 0U;
        vlSelf->__Vdly__Z81 = 0U;
        vlSelf->__Vdly__Z85 = 0U;
        vlSelf->__Vdly__Z35 = 0U;
        vlSelf->__Vdly__Z25 = 0U;
        vlSelf->__Vdly__Z45 = 0U;
        vlSelf->__Vdly__Z55 = 0U;
        vlSelf->__Vdly__Z65 = 0U;
        vlSelf->__Vdly__Z75 = 0U;
        vlSelf->__Vdly__Z87 = 0U;
        vlSelf->__Vdly__Z83 = 0U;
        vlSelf->__Vdly__Z43 = 0U;
        vlSelf->__Vdly__Z37 = 0U;
        vlSelf->__Vdly__Z33 = 0U;
        vlSelf->__Vdly__Z27 = 0U;
        vlSelf->__Vdly__Z23 = 0U;
        vlSelf->__Vdly__Z47 = 0U;
        vlSelf->__Vdly__Z53 = 0U;
        vlSelf->__Vdly__Z57 = 0U;
        vlSelf->__Vdly__Z63 = 0U;
        vlSelf->__Vdly__Z67 = 0U;
        vlSelf->__Vdly__Z73 = 0U;
        vlSelf->__Vdly__Z77 = 0U;
        vlSelf->__Vdly__Z88 = 0U;
        vlSelf->__Vdly__Z86 = 0U;
        vlSelf->__Vdly__Z84 = 0U;
        vlSelf->__Vdly__Z44 = 0U;
        vlSelf->__Vdly__Z42 = 0U;
        vlSelf->__Vdly__Z38 = 0U;
        vlSelf->__Vdly__Z36 = 0U;
        vlSelf->__Vdly__Z34 = 0U;
        vlSelf->__Vdly__Z32 = 0U;
        vlSelf->__Vdly__Z28 = 0U;
        vlSelf->__Vdly__Z26 = 0U;
        vlSelf->__Vdly__Z22 = 0U;
        vlSelf->__Vdly__Z24 = 0U;
        vlSelf->__Vdly__Z46 = 0U;
        vlSelf->__Vdly__Z48 = 0U;
        vlSelf->__Vdly__Z52 = 0U;
        vlSelf->__Vdly__Z54 = 0U;
        vlSelf->__Vdly__Z56 = 0U;
        vlSelf->__Vdly__Z58 = 0U;
        vlSelf->__Vdly__Z62 = 0U;
        vlSelf->__Vdly__Z64 = 0U;
        vlSelf->__Vdly__Z66 = 0U;
        vlSelf->__Vdly__Z68 = 0U;
        vlSelf->__Vdly__Z72 = 0U;
        vlSelf->__Vdly__Z74 = 0U;
        vlSelf->__Vdly__Z76 = 0U;
        vlSelf->__Vdly__Z78 = 0U;
        vlSelf->__Vdly__Z82 = 0U;
        vlSelf->__PVT__Y_temp_11 = 0U;
        vlSelf->__PVT__Y_temp_51 = 0U;
        vlSelf->__PVT__Y_temp_71 = 0U;
        vlSelf->__PVT__Y_temp_31 = 0U;
        vlSelf->__PVT__Y_temp_81 = 0U;
        vlSelf->__PVT__Y_temp_61 = 0U;
        vlSelf->__PVT__Y_temp_41 = 0U;
        vlSelf->__PVT__Y_temp_21 = 0U;
        vlSelf->__PVT__Z_temp_11 = 0U;
        vlSelf->__PVT__Z_temp_15 = 0U;
        vlSelf->__PVT__Z_temp_13 = 0U;
        vlSelf->__PVT__Z_temp_17 = 0U;
        vlSelf->__PVT__Z_temp_12 = 0U;
        vlSelf->__PVT__Z_temp_14 = 0U;
        vlSelf->__PVT__Z_temp_16 = 0U;
        vlSelf->__PVT__Z_temp_18 = 0U;
        vlSelf->__PVT__Z_temp_41 = 0U;
        vlSelf->__PVT__Z_temp_31 = 0U;
        vlSelf->__PVT__Z_temp_21 = 0U;
        vlSelf->__PVT__Z_temp_51 = 0U;
        vlSelf->__PVT__Z_temp_61 = 0U;
        vlSelf->__PVT__Z_temp_71 = 0U;
        vlSelf->__PVT__Z_temp_81 = 0U;
        vlSelf->__PVT__Z_temp_85 = 0U;
        vlSelf->__PVT__Z_temp_35 = 0U;
        vlSelf->__PVT__Z_temp_25 = 0U;
        vlSelf->__PVT__Z_temp_45 = 0U;
        vlSelf->__PVT__Z_temp_55 = 0U;
        vlSelf->__PVT__Z_temp_65 = 0U;
        vlSelf->__PVT__Z_temp_75 = 0U;
        vlSelf->__PVT__Z_temp_87 = 0U;
        vlSelf->__PVT__Z_temp_83 = 0U;
        vlSelf->__PVT__Z_temp_43 = 0U;
        vlSelf->__PVT__Z_temp_37 = 0U;
        vlSelf->__PVT__Z_temp_33 = 0U;
        vlSelf->__PVT__Z_temp_27 = 0U;
        vlSelf->__PVT__Z_temp_23 = 0U;
        vlSelf->__PVT__Z_temp_47 = 0U;
        vlSelf->__PVT__Z_temp_53 = 0U;
        vlSelf->__PVT__Z_temp_57 = 0U;
        vlSelf->__PVT__Z_temp_63 = 0U;
        vlSelf->__PVT__Z_temp_67 = 0U;
        vlSelf->__PVT__Z_temp_73 = 0U;
        vlSelf->__PVT__Z_temp_77 = 0U;
        vlSelf->__PVT__Z_temp_88 = 0U;
        vlSelf->__PVT__Z_temp_86 = 0U;
        vlSelf->__PVT__Z_temp_84 = 0U;
        vlSelf->__PVT__Z_temp_44 = 0U;
        vlSelf->__PVT__Z_temp_42 = 0U;
        vlSelf->__PVT__Z_temp_38 = 0U;
        vlSelf->__PVT__Z_temp_36 = 0U;
        vlSelf->__PVT__Z_temp_34 = 0U;
        vlSelf->__PVT__Z_temp_32 = 0U;
        vlSelf->__PVT__Z_temp_28 = 0U;
        vlSelf->__PVT__Z_temp_26 = 0U;
        vlSelf->__PVT__Z_temp_22 = 0U;
        vlSelf->__PVT__Z_temp_24 = 0U;
        vlSelf->__PVT__Z_temp_46 = 0U;
        vlSelf->__PVT__Z_temp_48 = 0U;
        vlSelf->__PVT__Z_temp_52 = 0U;
        vlSelf->__PVT__Z_temp_54 = 0U;
        vlSelf->__PVT__Z_temp_56 = 0U;
        vlSelf->__PVT__Z_temp_58 = 0U;
        vlSelf->__PVT__Z_temp_62 = 0U;
        vlSelf->__PVT__Z_temp_64 = 0U;
        vlSelf->__PVT__Z_temp_66 = 0U;
        vlSelf->__PVT__Z_temp_68 = 0U;
        vlSelf->__PVT__Z_temp_72 = 0U;
        vlSelf->__PVT__Z_temp_74 = 0U;
        vlSelf->__PVT__Z_temp_76 = 0U;
        vlSelf->__PVT__Z_temp_78 = 0U;
        vlSelf->__PVT__Z_temp_82 = 0U;
        vlSelf->__PVT__data_1 = 0U;
        vlSelf->__PVT__Y11_final_4 = 0U;
        vlSelf->__PVT__Y31_final_2 = 0U;
        vlSelf->__PVT__Y21_final_2 = 0U;
        vlSelf->__PVT__Y41_final_2 = 0U;
        vlSelf->__PVT__Y51_final_2 = 0U;
        vlSelf->__PVT__Y61_final_2 = 0U;
        vlSelf->__PVT__Y71_final_2 = 0U;
        vlSelf->__PVT__Y81_final_2 = 0U;
        vlSelf->__PVT__Y11_final_3 = 0U;
        vlSelf->__PVT__Y31_final_1 = 0U;
        vlSelf->__PVT__Y21_final_1 = 0U;
        vlSelf->__PVT__Y41_final_1 = 0U;
        vlSelf->__PVT__Y51_final_1 = 0U;
        vlSelf->__PVT__Y61_final_1 = 0U;
        vlSelf->__PVT__Y71_final_1 = 0U;
        vlSelf->__PVT__Y81_final_1 = 0U;
        vlSelf->__PVT__Y11_final_2 = 0U;
        vlSelf->__PVT__Y31_final_diff = 0U;
        vlSelf->__PVT__Y21_final_diff = 0U;
        vlSelf->__PVT__Y41_final_diff = 0U;
        vlSelf->__PVT__Y51_final_diff = 0U;
        vlSelf->__PVT__Y61_final_diff = 0U;
        vlSelf->__PVT__Y71_final_diff = 0U;
        vlSelf->__PVT__Y81_final_diff = 0U;
        vlSelf->__PVT__Y11_final_1 = 0U;
        vlSelf->__PVT__Y31_final_prev = 0U;
        vlSelf->__PVT__Y21_final_prev = 0U;
        vlSelf->__PVT__Y41_final_prev = 0U;
        vlSelf->__PVT__Y51_final_prev = 0U;
        vlSelf->__PVT__Y61_final_prev = 0U;
        vlSelf->__PVT__Y71_final_prev = 0U;
        vlSelf->__PVT__Y81_final_prev = 0U;
        vlSelf->__PVT__Y11_final = 0U;
        vlSelf->__PVT__Y31_final = 0U;
        vlSelf->__PVT__Y21_final = 0U;
        vlSelf->__PVT__Y41_final = 0U;
        vlSelf->__PVT__Y51_final = 0U;
        vlSelf->__PVT__Y61_final = 0U;
        vlSelf->__PVT__Y71_final = 0U;
        vlSelf->__PVT__Y81_final = 0U;
    } else {
        if (((1U == (IData)(vlSelf->__PVT__count)) 
             & (IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable))) {
            __Vdly__Y11 = vlSelf->__PVT__Y_temp_11;
        } else if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            __Vdly__Y11 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_11 
                                         + vlSelf->__PVT__Y11));
        }
        if (((IData)(vlSelf->__PVT__count_8) & (1U 
                                                == (IData)(vlSelf->__PVT__count_of)))) {
            vlSelf->__Vdly__Z11 = 0U;
            vlSelf->__Vdly__Z15 = 0U;
            vlSelf->__Vdly__Z13 = 0U;
            vlSelf->__Vdly__Z17 = 0U;
            vlSelf->__Vdly__Z12 = 0U;
            vlSelf->__Vdly__Z14 = 0U;
            vlSelf->__Vdly__Z16 = 0U;
            vlSelf->__Vdly__Z18 = 0U;
            vlSelf->__Vdly__Z41 = 0U;
            vlSelf->__Vdly__Z31 = 0U;
            vlSelf->__Vdly__Z21 = 0U;
            vlSelf->__Vdly__Z51 = 0U;
            vlSelf->__Vdly__Z61 = 0U;
            vlSelf->__Vdly__Z71 = 0U;
            vlSelf->__Vdly__Z81 = 0U;
            vlSelf->__Vdly__Z85 = 0U;
            vlSelf->__Vdly__Z35 = 0U;
            vlSelf->__Vdly__Z25 = 0U;
            vlSelf->__Vdly__Z45 = 0U;
            vlSelf->__Vdly__Z55 = 0U;
            vlSelf->__Vdly__Z65 = 0U;
            vlSelf->__Vdly__Z75 = 0U;
            vlSelf->__Vdly__Z87 = 0U;
            vlSelf->__Vdly__Z83 = 0U;
            vlSelf->__Vdly__Z43 = 0U;
            vlSelf->__Vdly__Z37 = 0U;
            vlSelf->__Vdly__Z33 = 0U;
            vlSelf->__Vdly__Z27 = 0U;
            vlSelf->__Vdly__Z23 = 0U;
            vlSelf->__Vdly__Z47 = 0U;
            vlSelf->__Vdly__Z53 = 0U;
            vlSelf->__Vdly__Z57 = 0U;
            vlSelf->__Vdly__Z63 = 0U;
            vlSelf->__Vdly__Z67 = 0U;
            vlSelf->__Vdly__Z73 = 0U;
            vlSelf->__Vdly__Z77 = 0U;
            vlSelf->__Vdly__Z88 = 0U;
            vlSelf->__Vdly__Z86 = 0U;
            vlSelf->__Vdly__Z84 = 0U;
            vlSelf->__Vdly__Z44 = 0U;
            vlSelf->__Vdly__Z42 = 0U;
            vlSelf->__Vdly__Z38 = 0U;
            vlSelf->__Vdly__Z36 = 0U;
            vlSelf->__Vdly__Z34 = 0U;
            vlSelf->__Vdly__Z32 = 0U;
            vlSelf->__Vdly__Z28 = 0U;
            vlSelf->__Vdly__Z26 = 0U;
            vlSelf->__Vdly__Z22 = 0U;
            vlSelf->__Vdly__Z24 = 0U;
            vlSelf->__Vdly__Z46 = 0U;
            vlSelf->__Vdly__Z48 = 0U;
            vlSelf->__Vdly__Z52 = 0U;
            vlSelf->__Vdly__Z54 = 0U;
            vlSelf->__Vdly__Z56 = 0U;
            vlSelf->__Vdly__Z58 = 0U;
            vlSelf->__Vdly__Z62 = 0U;
            vlSelf->__Vdly__Z64 = 0U;
            vlSelf->__Vdly__Z66 = 0U;
            vlSelf->__Vdly__Z68 = 0U;
            vlSelf->__Vdly__Z72 = 0U;
            vlSelf->__Vdly__Z74 = 0U;
            vlSelf->__Vdly__Z76 = 0U;
            vlSelf->__Vdly__Z78 = 0U;
            vlSelf->__Vdly__Z82 = 0U;
        } else if (((IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) 
                    & (IData)(vlSelf->__PVT__count_9))) {
            vlSelf->__Vdly__Z11 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_11 
                                                 + vlSelf->__PVT__Z11));
            vlSelf->__Vdly__Z15 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_15 
                                                 + vlSelf->__PVT__Z15));
            vlSelf->__Vdly__Z13 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_13 
                                                 + vlSelf->__PVT__Z13));
            vlSelf->__Vdly__Z17 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_17 
                                                 + vlSelf->__PVT__Z17));
            vlSelf->__Vdly__Z12 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_12 
                                                 + vlSelf->__PVT__Z12));
            vlSelf->__Vdly__Z14 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_14 
                                                 + vlSelf->__PVT__Z14));
            vlSelf->__Vdly__Z16 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_16 
                                                 + vlSelf->__PVT__Z16));
            vlSelf->__Vdly__Z18 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_18 
                                                 + vlSelf->__PVT__Z18));
            vlSelf->__Vdly__Z41 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_41 
                                                 + vlSelf->__PVT__Z41));
            vlSelf->__Vdly__Z31 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_31 
                                                 + vlSelf->__PVT__Z31));
            vlSelf->__Vdly__Z21 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_21 
                                                 + vlSelf->__PVT__Z21));
            vlSelf->__Vdly__Z51 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_51 
                                                 + vlSelf->__PVT__Z51));
            vlSelf->__Vdly__Z61 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_61 
                                                 + vlSelf->__PVT__Z61));
            vlSelf->__Vdly__Z71 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_71 
                                                 + vlSelf->__PVT__Z71));
            vlSelf->__Vdly__Z81 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_81 
                                                 + vlSelf->__PVT__Z81));
            vlSelf->__Vdly__Z85 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_85 
                                                 + vlSelf->__PVT__Z85));
            vlSelf->__Vdly__Z35 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_35 
                                                 + vlSelf->__PVT__Z35));
            vlSelf->__Vdly__Z25 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_25 
                                                 + vlSelf->__PVT__Z25));
            vlSelf->__Vdly__Z45 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_45 
                                                 + vlSelf->__PVT__Z45));
            vlSelf->__Vdly__Z55 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_55 
                                                 + vlSelf->__PVT__Z55));
            vlSelf->__Vdly__Z65 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_65 
                                                 + vlSelf->__PVT__Z65));
            vlSelf->__Vdly__Z75 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_75 
                                                 + vlSelf->__PVT__Z75));
            vlSelf->__Vdly__Z87 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_87 
                                                 + vlSelf->__PVT__Z87));
            vlSelf->__Vdly__Z83 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_83 
                                                 + vlSelf->__PVT__Z83));
            vlSelf->__Vdly__Z43 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_43 
                                                 + vlSelf->__PVT__Z43));
            vlSelf->__Vdly__Z37 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_37 
                                                 + vlSelf->__PVT__Z37));
            vlSelf->__Vdly__Z33 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_33 
                                                 + vlSelf->__PVT__Z33));
            vlSelf->__Vdly__Z27 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_27 
                                                 + vlSelf->__PVT__Z27));
            vlSelf->__Vdly__Z23 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_23 
                                                 + vlSelf->__PVT__Z23));
            vlSelf->__Vdly__Z47 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_47 
                                                 + vlSelf->__PVT__Z47));
            vlSelf->__Vdly__Z53 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_53 
                                                 + vlSelf->__PVT__Z53));
            vlSelf->__Vdly__Z57 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_57 
                                                 + vlSelf->__PVT__Z57));
            vlSelf->__Vdly__Z63 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_63 
                                                 + vlSelf->__PVT__Z63));
            vlSelf->__Vdly__Z67 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_67 
                                                 + vlSelf->__PVT__Z67));
            vlSelf->__Vdly__Z73 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_73 
                                                 + vlSelf->__PVT__Z73));
            vlSelf->__Vdly__Z77 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_77 
                                                 + vlSelf->__PVT__Z77));
            vlSelf->__Vdly__Z88 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_88 
                                                 + vlSelf->__PVT__Z88));
            vlSelf->__Vdly__Z86 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_86 
                                                 + vlSelf->__PVT__Z86));
            vlSelf->__Vdly__Z84 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_84 
                                                 + vlSelf->__PVT__Z84));
            vlSelf->__Vdly__Z44 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_44 
                                                 + vlSelf->__PVT__Z44));
            vlSelf->__Vdly__Z42 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_42 
                                                 + vlSelf->__PVT__Z42));
            vlSelf->__Vdly__Z38 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_38 
                                                 + vlSelf->__PVT__Z38));
            vlSelf->__Vdly__Z36 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_36 
                                                 + vlSelf->__PVT__Z36));
            vlSelf->__Vdly__Z34 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_34 
                                                 + vlSelf->__PVT__Z34));
            vlSelf->__Vdly__Z32 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_32 
                                                 + vlSelf->__PVT__Z32));
            vlSelf->__Vdly__Z28 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_28 
                                                 + vlSelf->__PVT__Z28));
            vlSelf->__Vdly__Z26 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_26 
                                                 + vlSelf->__PVT__Z26));
            vlSelf->__Vdly__Z22 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_22 
                                                 + vlSelf->__PVT__Z22));
            vlSelf->__Vdly__Z24 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_24 
                                                 + vlSelf->__PVT__Z24));
            vlSelf->__Vdly__Z46 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_46 
                                                 + vlSelf->__PVT__Z46));
            vlSelf->__Vdly__Z48 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_48 
                                                 + vlSelf->__PVT__Z48));
            vlSelf->__Vdly__Z52 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_52 
                                                 + vlSelf->__PVT__Z52));
            vlSelf->__Vdly__Z54 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_54 
                                                 + vlSelf->__PVT__Z54));
            vlSelf->__Vdly__Z56 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_56 
                                                 + vlSelf->__PVT__Z56));
            vlSelf->__Vdly__Z58 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_58 
                                                 + vlSelf->__PVT__Z58));
            vlSelf->__Vdly__Z62 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_62 
                                                 + vlSelf->__PVT__Z62));
            vlSelf->__Vdly__Z64 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_64 
                                                 + vlSelf->__PVT__Z64));
            vlSelf->__Vdly__Z66 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_66 
                                                 + vlSelf->__PVT__Z66));
            vlSelf->__Vdly__Z68 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_68 
                                                 + vlSelf->__PVT__Z68));
            vlSelf->__Vdly__Z72 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_72 
                                                 + vlSelf->__PVT__Z72));
            vlSelf->__Vdly__Z74 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_74 
                                                 + vlSelf->__PVT__Z74));
            vlSelf->__Vdly__Z76 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_76 
                                                 + vlSelf->__PVT__Z76));
            vlSelf->__Vdly__Z78 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_78 
                                                 + vlSelf->__PVT__Z78));
            vlSelf->__Vdly__Z82 = (0x7ffffffU & (vlSelf->__PVT__Z_temp_82 
                                                 + vlSelf->__PVT__Z82));
        }
        if (((IData)(vlSelf->__PVT__enable_1) & (IData)(vlSelf->__PVT__count_8))) {
            vlSelf->__PVT__Z_temp_11 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_15 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_13 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_17 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_12 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_14 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_16 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_18 = (vlSelf->__PVT__Y11_final_4 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_41 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_31 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_21 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_51 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_61 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_71 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_81 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti1);
            vlSelf->__PVT__Z_temp_85 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_35 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_25 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_45 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_55 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_65 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_75 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti5_mul_input);
            vlSelf->__PVT__Z_temp_87 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_83 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_43 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_37 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_33 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_27 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_23 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_47 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_53 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_57 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_63 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_67 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_73 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti3_mul_input);
            vlSelf->__PVT__Z_temp_77 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti7_mul_input);
            vlSelf->__PVT__Z_temp_88 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_86 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_84 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_44 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_42 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_38 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_36 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_34 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_32 = (vlSelf->__PVT__Y31_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_28 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_26 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_22 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_24 = (vlSelf->__PVT__Y21_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_46 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_48 = (vlSelf->__PVT__Y41_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_52 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_54 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_56 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_58 = (vlSelf->__PVT__Y51_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_62 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_64 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_66 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_68 = (vlSelf->__PVT__Y61_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_72 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
            vlSelf->__PVT__Z_temp_74 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti4_mul_input);
            vlSelf->__PVT__Z_temp_76 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti6_mul_input);
            vlSelf->__PVT__Z_temp_78 = (vlSelf->__PVT__Y71_final_2 
                                        * vlSelf->__PVT__Ti8_mul_input);
            vlSelf->__PVT__Z_temp_82 = (vlSelf->__PVT__Y81_final_2 
                                        * vlSelf->__PVT__Ti2_mul_input);
        }
        if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
                vlSelf->__Vdly__count = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__count)));
            }
            if (vlSelf->__PVT__count_1) {
                __Vdly__count_of_copy = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__count_of_copy)));
                vlSelf->__Vdly__count_of = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__count_of)));
            }
            vlSelf->__PVT__Y_temp_11 = (0x1ffffffU 
                                        & ((IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y) 
                                           * vlSelf->__PVT__T1));
        } else {
            vlSelf->__Vdly__count = 0U;
            __Vdly__count_of_copy = 0U;
            vlSelf->__Vdly__count_of = 0U;
        }
        if (vlSelf->__PVT__enable_1) {
            if (vlSelf->__PVT__enable_1) {
                __Vdly__Y51 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_51 
                                             + vlSelf->__PVT__Y51));
                __Vdly__Y71 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_71 
                                             + vlSelf->__PVT__Y71));
                __Vdly__Y31 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_31 
                                             + vlSelf->__PVT__Y31));
                __Vdly__Y81 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_81 
                                             + vlSelf->__PVT__Y81));
                __Vdly__Y61 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_61 
                                             + vlSelf->__PVT__Y61));
                __Vdly__Y41 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_41 
                                             + vlSelf->__PVT__Y41));
                __Vdly__Y21 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_21 
                                             + vlSelf->__PVT__Y21));
                vlSelf->__PVT__Y_temp_51 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y5_mul_input);
                vlSelf->__PVT__Y_temp_71 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y7_mul_input);
                vlSelf->__PVT__Y_temp_31 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y3_mul_input);
                vlSelf->__PVT__Y_temp_81 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y8_mul_input);
                vlSelf->__PVT__Y_temp_61 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y6_mul_input);
                vlSelf->__PVT__Y_temp_41 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y4_mul_input);
                vlSelf->__PVT__Y_temp_21 = ((IData)(vlSelf->__PVT__data_1) 
                                            * vlSelf->__PVT__Y2_mul_input);
            }
        } else {
            __Vdly__Y51 = 0U;
            __Vdly__Y71 = 0U;
            __Vdly__Y31 = 0U;
            __Vdly__Y81 = 0U;
            __Vdly__Y61 = 0U;
            __Vdly__Y41 = 0U;
            __Vdly__Y21 = 0U;
            vlSelf->__PVT__Y_temp_51 = 0U;
            vlSelf->__PVT__Y_temp_71 = 0U;
            vlSelf->__PVT__Y_temp_31 = 0U;
            vlSelf->__PVT__Y_temp_81 = 0U;
            vlSelf->__PVT__Y_temp_61 = 0U;
            vlSelf->__PVT__Y_temp_41 = 0U;
            vlSelf->__PVT__Y_temp_21 = 0U;
        }
        if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            vlSelf->__PVT__data_1 = vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y;
            vlSelf->__PVT__Y11_final_4 = vlSelf->__PVT__Y11_final_3;
            vlSelf->__PVT__Y31_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y31_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y31_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y31_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y31_final_2) 
                                          | (IData)(vlSelf->__PVT__Y31_final_1));
            vlSelf->__PVT__Y21_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y21_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y21_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y21_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y21_final_2) 
                                          | (IData)(vlSelf->__PVT__Y21_final_1));
            vlSelf->__PVT__Y41_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y41_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y41_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y41_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y41_final_2) 
                                          | (IData)(vlSelf->__PVT__Y41_final_1));
            vlSelf->__PVT__Y51_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y51_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y51_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y51_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y51_final_2) 
                                          | (IData)(vlSelf->__PVT__Y51_final_1));
            vlSelf->__PVT__Y61_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y61_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y61_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y61_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y61_final_2) 
                                          | (IData)(vlSelf->__PVT__Y61_final_1));
            vlSelf->__PVT__Y71_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y71_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y71_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y71_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y71_final_2) 
                                          | (IData)(vlSelf->__PVT__Y71_final_1));
            vlSelf->__PVT__Y81_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y81_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y81_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y81_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y81_final_2) 
                                          | (IData)(vlSelf->__PVT__Y81_final_1));
            vlSelf->__PVT__Y11_final_3 = vlSelf->__PVT__Y11_final_2;
            vlSelf->__PVT__Y31_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y31_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y31_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y31_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y21_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y21_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y21_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y21_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y41_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y41_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y41_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y41_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y51_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y51_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y51_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y51_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y61_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y61_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y61_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y61_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y71_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y71_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y71_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y71_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y81_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y81_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y81_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y81_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y11_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y11_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y11_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y11_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y11_final_2) 
                                          | (IData)(vlSelf->__PVT__Y11_final_1));
            vlSelf->__PVT__Y11_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y11_final)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y11_final 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y11_final 
                                                  >> 0xcU))));
        }
        if (((IData)(vlSelf->__PVT__count_5) & (IData)(vlSelf->__PVT__enable_1))) {
            vlSelf->__PVT__Y31_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y31_final 
                                                - vlSelf->__PVT__Y31_final_prev));
            vlSelf->__PVT__Y21_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y21_final 
                                                - vlSelf->__PVT__Y21_final_prev));
            vlSelf->__PVT__Y41_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y41_final 
                                                - vlSelf->__PVT__Y41_final_prev));
            vlSelf->__PVT__Y51_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y51_final 
                                                - vlSelf->__PVT__Y51_final_prev));
            vlSelf->__PVT__Y61_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y61_final 
                                                - vlSelf->__PVT__Y61_final_prev));
            vlSelf->__PVT__Y71_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y71_final 
                                                - vlSelf->__PVT__Y71_final_prev));
            vlSelf->__PVT__Y81_final_diff = (0x1ffffffU 
                                             & (vlSelf->__PVT__Y81_final 
                                                - vlSelf->__PVT__Y81_final_prev));
        }
        if (vlSelf->__PVT__enable_1) {
            if (((IData)(vlSelf->__PVT__count_4) & (IData)(vlSelf->__PVT__enable_1))) {
                vlSelf->__PVT__Y31_final_prev = vlSelf->__PVT__Y31_final;
                vlSelf->__PVT__Y21_final_prev = vlSelf->__PVT__Y21_final;
                vlSelf->__PVT__Y41_final_prev = vlSelf->__PVT__Y41_final;
                vlSelf->__PVT__Y51_final_prev = vlSelf->__PVT__Y51_final;
                vlSelf->__PVT__Y61_final_prev = vlSelf->__PVT__Y61_final;
                vlSelf->__PVT__Y71_final_prev = vlSelf->__PVT__Y71_final;
                vlSelf->__PVT__Y81_final_prev = vlSelf->__PVT__Y81_final;
                vlSelf->__PVT__Y31_final = vlSelf->__PVT__Y31;
                vlSelf->__PVT__Y21_final = vlSelf->__PVT__Y21;
                vlSelf->__PVT__Y41_final = vlSelf->__PVT__Y41;
                vlSelf->__PVT__Y51_final = vlSelf->__PVT__Y51;
                vlSelf->__PVT__Y61_final = vlSelf->__PVT__Y61;
                vlSelf->__PVT__Y71_final = vlSelf->__PVT__Y71;
                vlSelf->__PVT__Y81_final = vlSelf->__PVT__Y81;
            }
        } else {
            vlSelf->__PVT__Y31_final_prev = 0U;
            vlSelf->__PVT__Y21_final_prev = 0U;
            vlSelf->__PVT__Y41_final_prev = 0U;
            vlSelf->__PVT__Y51_final_prev = 0U;
            vlSelf->__PVT__Y61_final_prev = 0U;
            vlSelf->__PVT__Y71_final_prev = 0U;
            vlSelf->__PVT__Y81_final_prev = 0U;
            vlSelf->__PVT__Y31_final = 0U;
            vlSelf->__PVT__Y21_final = 0U;
            vlSelf->__PVT__Y41_final = 0U;
            vlSelf->__PVT__Y51_final = 0U;
            vlSelf->__PVT__Y61_final = 0U;
            vlSelf->__PVT__Y71_final = 0U;
            vlSelf->__PVT__Y81_final = 0U;
        }
        if (((IData)(vlSelf->__PVT__count_3) & (IData)(vlSelf->__PVT__enable_1))) {
            vlSelf->__PVT__Y11_final = (0x1ffffffU 
                                        & (vlSelf->__PVT__Y11 
                                           - (IData)(0x5a8400U)));
        }
    }
    if ((4U & (IData)(vlSelf->__PVT__count))) {
        if ((2U & (IData)(vlSelf->__PVT__count))) {
            if ((1U & (IData)(vlSelf->__PVT__count))) {
                vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
                vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T32;
                vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T31;
                vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T25;
                vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T26;
                vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T27;
                vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T28;
            } else {
                vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
                vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T34;
                vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T32;
                vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T23;
                vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T21;
                vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T24;
                vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T27;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__count))) {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T31;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T27;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T25;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T21;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T26;
        } else {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T34;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T21;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T27;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T23;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T25;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__count))) {
        if ((1U & (IData)(vlSelf->__PVT__count))) {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T34;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T28;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T22;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T26;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T24;
        } else {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T31;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T22;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T24;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T28;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T23;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__count))) {
        vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
        vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T34;
        vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T32;
        vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T26;
        vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T28;
        vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T25;
        vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T22;
    } else {
        vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
        vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T32;
        vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T31;
        vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T24;
        vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T23;
        vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T22;
        vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T21;
    }
    if ((4U & (IData)(vlSelf->__PVT__count_of_copy))) {
        if ((2U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti52;
            if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
                vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti32;
                vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti34;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti24;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti23;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti27;
            } else {
                vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti33;
                vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti31;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti25;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti27;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti26;
            }
        } else {
            vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti1;
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti34;
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti33;
            if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti23;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti27;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti25;
            } else {
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti26;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti22;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti28;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti24;
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__count_of_copy))) {
        vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti52;
        if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti33;
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti31;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti28;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti24;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti22;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti23;
        } else {
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti32;
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti34;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti25;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti28;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti26;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti22;
        }
    } else {
        vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti1;
        vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti31;
        vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti32;
        if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti22;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti23;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti24;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti21;
        } else {
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti27;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti26;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti25;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti28;
        }
    }
    vlSelf->__PVT__count_of_copy = __Vdly__count_of_copy;
    vlSelf->__PVT__T52 = 0xffffe95fU;
    vlSelf->__PVT__T1 = 0x16a1U;
    vlSelf->__PVT__T31 = 0x1d90U;
    vlSelf->__PVT__T32 = 0xc3fU;
    vlSelf->__PVT__T33 = 0xfffff3c1U;
    vlSelf->__PVT__T34 = 0xffffe270U;
    vlSelf->__PVT__T28 = 0xffffe09dU;
    vlSelf->__PVT__T27 = 0xffffe565U;
    vlSelf->__PVT__T26 = 0xffffee39U;
    vlSelf->__PVT__T25 = 0xfffff9c2U;
    vlSelf->__PVT__T24 = 0x63eU;
    vlSelf->__PVT__T23 = 0x11c7U;
    vlSelf->__PVT__T22 = 0x1a9bU;
    vlSelf->__PVT__T21 = 0x1f63U;
    vlSelf->__PVT__Ti52 = 0xffffe95fU;
    vlSelf->__PVT__Ti1 = 0x16a1U;
    vlSelf->__PVT__Ti34 = 0xffffe270U;
    vlSelf->__PVT__Ti31 = 0x1d90U;
    vlSelf->__PVT__Ti33 = 0xfffff3c1U;
    vlSelf->__PVT__Ti32 = 0xc3fU;
    vlSelf->__PVT__Ti27 = 0xffffe565U;
    vlSelf->__PVT__Ti26 = 0xffffee39U;
    vlSelf->__PVT__Ti25 = 0xfffff9c2U;
    vlSelf->__PVT__Ti24 = 0x63eU;
    vlSelf->__PVT__Ti23 = 0x11c7U;
    vlSelf->__PVT__Ti22 = 0x1a9bU;
    vlSelf->__PVT__Ti21 = 0x1f63U;
    vlSelf->__PVT__Ti28 = 0xffffe09dU;
    vlSelf->__PVT__Y11 = __Vdly__Y11;
    vlSelf->__PVT__Y31 = __Vdly__Y31;
    vlSelf->__PVT__Y21 = __Vdly__Y21;
    vlSelf->__PVT__Y41 = __Vdly__Y41;
    vlSelf->__PVT__Y51 = __Vdly__Y51;
    vlSelf->__PVT__Y61 = __Vdly__Y61;
    vlSelf->__PVT__Y71 = __Vdly__Y71;
    vlSelf->__PVT__Y81 = __Vdly__Y81;
}
