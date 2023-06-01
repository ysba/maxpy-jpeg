// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See jpeg_top_loa_8_LOBA2_4.h for the primary calling header

#ifndef VERILATED_SUB_DCT_H_
#define VERILATED_SUB_DCT_H_  // guard

#include "verilated.h"

class jpeg_top_loa_8_LOBA2_4__Syms;
class sub_LOBA2u;


class sub_dct final : public VerilatedModule {
  public:
    // CELLS
    sub_LOBA2u* __PVT__u86__DOT__u1;
    sub_LOBA2u* __PVT__u87__DOT__u1;
    sub_LOBA2u* __PVT__u88__DOT__u1;
    sub_LOBA2u* __PVT__u89__DOT__u1;
    sub_LOBA2u* __PVT__u90__DOT__u1;
    sub_LOBA2u* __PVT__u91__DOT__u1;
    sub_LOBA2u* __PVT__u92__DOT__u1;
    sub_LOBA2u* __PVT__u93__DOT__u1;
    sub_LOBA2u* __PVT__u94__DOT__u1;
    sub_LOBA2u* __PVT__u95__DOT__u1;
    sub_LOBA2u* __PVT__u96__DOT__u1;
    sub_LOBA2u* __PVT__u97__DOT__u1;
    sub_LOBA2u* __PVT__u98__DOT__u1;
    sub_LOBA2u* __PVT__u99__DOT__u1;
    sub_LOBA2u* __PVT__u100__DOT__u1;
    sub_LOBA2u* __PVT__u101__DOT__u1;
    sub_LOBA2u* __PVT__u102__DOT__u1;
    sub_LOBA2u* __PVT__u103__DOT__u1;
    sub_LOBA2u* __PVT__u104__DOT__u1;
    sub_LOBA2u* __PVT__u105__DOT__u1;
    sub_LOBA2u* __PVT__u106__DOT__u1;
    sub_LOBA2u* __PVT__u107__DOT__u1;
    sub_LOBA2u* __PVT__u108__DOT__u1;
    sub_LOBA2u* __PVT__u109__DOT__u1;
    sub_LOBA2u* __PVT__u110__DOT__u1;
    sub_LOBA2u* __PVT__u111__DOT__u1;
    sub_LOBA2u* __PVT__u112__DOT__u1;
    sub_LOBA2u* __PVT__u113__DOT__u1;
    sub_LOBA2u* __PVT__u114__DOT__u1;
    sub_LOBA2u* __PVT__u115__DOT__u1;
    sub_LOBA2u* __PVT__u116__DOT__u1;
    sub_LOBA2u* __PVT__u117__DOT__u1;
    sub_LOBA2u* __PVT__u118__DOT__u1;
    sub_LOBA2u* __PVT__u119__DOT__u1;
    sub_LOBA2u* __PVT__u120__DOT__u1;
    sub_LOBA2u* __PVT__u121__DOT__u1;
    sub_LOBA2u* __PVT__u122__DOT__u1;
    sub_LOBA2u* __PVT__u123__DOT__u1;
    sub_LOBA2u* __PVT__u124__DOT__u1;
    sub_LOBA2u* __PVT__u125__DOT__u1;
    sub_LOBA2u* __PVT__u126__DOT__u1;
    sub_LOBA2u* __PVT__u127__DOT__u1;
    sub_LOBA2u* __PVT__u128__DOT__u1;
    sub_LOBA2u* __PVT__u129__DOT__u1;
    sub_LOBA2u* __PVT__u130__DOT__u1;
    sub_LOBA2u* __PVT__u131__DOT__u1;
    sub_LOBA2u* __PVT__u132__DOT__u1;
    sub_LOBA2u* __PVT__u133__DOT__u1;
    sub_LOBA2u* __PVT__u134__DOT__u1;
    sub_LOBA2u* __PVT__u135__DOT__u1;
    sub_LOBA2u* __PVT__u136__DOT__u1;
    sub_LOBA2u* __PVT__u137__DOT__u1;
    sub_LOBA2u* __PVT__u138__DOT__u1;
    sub_LOBA2u* __PVT__u139__DOT__u1;
    sub_LOBA2u* __PVT__u140__DOT__u1;
    sub_LOBA2u* __PVT__u141__DOT__u1;
    sub_LOBA2u* __PVT__u142__DOT__u1;
    sub_LOBA2u* __PVT__u143__DOT__u1;
    sub_LOBA2u* __PVT__u144__DOT__u1;
    sub_LOBA2u* __PVT__u145__DOT__u1;
    sub_LOBA2u* __PVT__u146__DOT__u1;
    sub_LOBA2u* __PVT__u147__DOT__u1;
    sub_LOBA2u* __PVT__u148__DOT__u1;
    sub_LOBA2u* __PVT__u149__DOT__u1;
    sub_LOBA2u* __PVT__u79__DOT__u1;
    sub_LOBA2u* __PVT__u80__DOT__u1;
    sub_LOBA2u* __PVT__u81__DOT__u1;
    sub_LOBA2u* __PVT__u82__DOT__u1;
    sub_LOBA2u* __PVT__u83__DOT__u1;
    sub_LOBA2u* __PVT__u84__DOT__u1;
    sub_LOBA2u* __PVT__u85__DOT__u1;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(enable,0,0);
        VL_IN8(data_in,7,0);
        VL_OUT8(output_enable,0,0);
        CData/*2:0*/ __PVT__count;
        CData/*2:0*/ __PVT__count_of;
        CData/*2:0*/ __PVT__count_of_copy;
        CData/*0:0*/ __PVT__count_1;
        CData/*0:0*/ __PVT__count_3;
        CData/*0:0*/ __PVT__count_4;
        CData/*0:0*/ __PVT__count_5;
        CData/*0:0*/ __PVT__count_6;
        CData/*0:0*/ __PVT__count_7;
        CData/*0:0*/ __PVT__count_8;
        CData/*0:0*/ __PVT__enable_1;
        CData/*0:0*/ __PVT__count_9;
        CData/*0:0*/ __PVT__count_10;
        CData/*7:0*/ __PVT__data_1;
        CData/*7:0*/ __VdfgTmp_haf54dd17__0;
        CData/*7:0*/ __VdfgTmp_hdb171796__0;
        CData/*7:0*/ __VdfgTmp_h88360843__0;
        CData/*7:0*/ __VdfgTmp_h7d761bce__0;
        CData/*7:0*/ __VdfgTmp_h3e481b2f__0;
        CData/*7:0*/ __VdfgTmp_hccdc278e__0;
        CData/*7:0*/ __VdfgTmp_h3fabaea8__0;
        CData/*7:0*/ __VdfgTmp_h6599ff7d__0;
        CData/*7:0*/ __VdfgTmp_h4833bd6b__0;
        CData/*7:0*/ __VdfgTmp_h349f6203__0;
        CData/*7:0*/ __VdfgTmp_hc42be489__0;
        CData/*7:0*/ __VdfgTmp_h96bde44b__0;
        CData/*7:0*/ __VdfgTmp_had2c75e6__0;
        CData/*7:0*/ __VdfgTmp_h877b4373__0;
        CData/*7:0*/ __VdfgTmp_hab03a300__0;
        CData/*7:0*/ __VdfgTmp_h884a0814__0;
        CData/*7:0*/ __VdfgTmp_hb086bb51__0;
        CData/*7:0*/ __VdfgTmp_h7ad0b707__0;
        CData/*7:0*/ __VdfgTmp_h594f35bf__0;
        CData/*7:0*/ __VdfgTmp_h9688d5a0__0;
        CData/*7:0*/ __VdfgTmp_haa0720a1__0;
        CData/*7:0*/ __VdfgTmp_hb73bceb5__0;
        CData/*7:0*/ __VdfgTmp_hd6655d83__0;
        CData/*7:0*/ __VdfgTmp_h15be1d3a__0;
        CData/*7:0*/ __VdfgTmp_h4c333dee__0;
        CData/*7:0*/ __VdfgTmp_h061d06be__0;
        CData/*7:0*/ __VdfgTmp_hfb852daa__0;
        CData/*7:0*/ __VdfgTmp_h19083087__0;
        CData/*7:0*/ __VdfgTmp_hf1119a63__0;
        CData/*7:0*/ __VdfgTmp_h26c41437__0;
        CData/*7:0*/ __VdfgTmp_h15ce8e3b__0;
        CData/*7:0*/ __VdfgTmp_hb9b9f7de__0;
        CData/*7:0*/ __VdfgTmp_h3e6e0ca1__0;
        CData/*7:0*/ __VdfgTmp_h68862f5e__0;
        CData/*7:0*/ __VdfgTmp_hb9fcdecc__0;
        CData/*7:0*/ __VdfgTmp_h6b938059__0;
        CData/*7:0*/ __VdfgTmp_h10d38d1a__0;
        CData/*7:0*/ __VdfgTmp_h278cce0e__0;
        CData/*7:0*/ __VdfgTmp_h39ce0a10__0;
        CData/*7:0*/ __VdfgTmp_h3c0336e5__0;
        CData/*7:0*/ __VdfgTmp_h13eb93f9__0;
        CData/*7:0*/ __VdfgTmp_h6c6b0cee__0;
        CData/*7:0*/ __VdfgTmp_hfc048fbd__0;
        CData/*7:0*/ __VdfgTmp_h0bc0f445__0;
        CData/*7:0*/ __VdfgTmp_h434af968__0;
    };
    struct {
        CData/*7:0*/ __VdfgTmp_h3b661275__0;
        CData/*7:0*/ __VdfgTmp_h8826c8d3__0;
        CData/*7:0*/ __VdfgTmp_hfd4a92e1__0;
        CData/*7:0*/ __VdfgTmp_h6b54278f__0;
        CData/*7:0*/ __VdfgTmp_haf21e4e7__0;
        CData/*7:0*/ __VdfgTmp_h9656be18__0;
        CData/*7:0*/ __VdfgTmp_ha5925c16__0;
        CData/*7:0*/ __VdfgTmp_haa44ba9b__0;
        CData/*7:0*/ __VdfgTmp_he458c719__0;
        CData/*7:0*/ __VdfgTmp_h52accd97__0;
        CData/*7:0*/ __VdfgTmp_hfa4498cd__0;
        CData/*7:0*/ __VdfgTmp_h2971d890__0;
        CData/*7:0*/ __VdfgTmp_h2e33e127__0;
        CData/*7:0*/ __VdfgTmp_hb76096e4__0;
        CData/*7:0*/ __VdfgTmp_h4ce92961__0;
        CData/*7:0*/ __VdfgTmp_h8e8d0d84__0;
        CData/*7:0*/ __VdfgTmp_h6402e4d4__0;
        CData/*7:0*/ __VdfgTmp_h01dcf4cf__0;
        CData/*7:0*/ __VdfgTmp_ha61bcf25__0;
        CData/*7:0*/ __VdfgTmp_hfe22fa83__0;
        CData/*7:0*/ __VdfgTmp_h7fdc0693__0;
        CData/*7:0*/ __VdfgTmp_he09b8c9c__0;
        CData/*7:0*/ __VdfgTmp_h8677e8fb__0;
        CData/*7:0*/ __VdfgTmp_hc08a0edb__0;
        CData/*7:0*/ __VdfgTmp_hbb0f6e7f__0;
        CData/*7:0*/ __VdfgTmp_haae99d54__0;
        CData/*2:0*/ __Vdly__count;
        CData/*2:0*/ __Vdly__count_of;
        VL_OUT16(Z11_final,10,0);
        VL_OUT16(Z12_final,10,0);
        VL_OUT16(Z13_final,10,0);
        VL_OUT16(Z14_final,10,0);
        VL_OUT16(Z15_final,10,0);
        VL_OUT16(Z16_final,10,0);
        VL_OUT16(Z17_final,10,0);
        VL_OUT16(Z18_final,10,0);
        VL_OUT16(Z21_final,10,0);
        VL_OUT16(Z22_final,10,0);
        VL_OUT16(Z23_final,10,0);
        VL_OUT16(Z24_final,10,0);
        VL_OUT16(Z25_final,10,0);
        VL_OUT16(Z26_final,10,0);
        VL_OUT16(Z27_final,10,0);
        VL_OUT16(Z28_final,10,0);
        VL_OUT16(Z31_final,10,0);
        VL_OUT16(Z32_final,10,0);
        VL_OUT16(Z33_final,10,0);
        VL_OUT16(Z34_final,10,0);
        VL_OUT16(Z35_final,10,0);
        VL_OUT16(Z36_final,10,0);
        VL_OUT16(Z37_final,10,0);
        VL_OUT16(Z38_final,10,0);
        VL_OUT16(Z41_final,10,0);
        VL_OUT16(Z42_final,10,0);
        VL_OUT16(Z43_final,10,0);
        VL_OUT16(Z44_final,10,0);
        VL_OUT16(Z45_final,10,0);
        VL_OUT16(Z46_final,10,0);
        VL_OUT16(Z47_final,10,0);
        VL_OUT16(Z48_final,10,0);
        VL_OUT16(Z51_final,10,0);
        VL_OUT16(Z52_final,10,0);
        VL_OUT16(Z53_final,10,0);
        VL_OUT16(Z54_final,10,0);
    };
    struct {
        VL_OUT16(Z55_final,10,0);
        VL_OUT16(Z56_final,10,0);
        VL_OUT16(Z57_final,10,0);
        VL_OUT16(Z58_final,10,0);
        VL_OUT16(Z61_final,10,0);
        VL_OUT16(Z62_final,10,0);
        VL_OUT16(Z63_final,10,0);
        VL_OUT16(Z64_final,10,0);
        VL_OUT16(Z65_final,10,0);
        VL_OUT16(Z66_final,10,0);
        VL_OUT16(Z67_final,10,0);
        VL_OUT16(Z68_final,10,0);
        VL_OUT16(Z71_final,10,0);
        VL_OUT16(Z72_final,10,0);
        VL_OUT16(Z73_final,10,0);
        VL_OUT16(Z74_final,10,0);
        VL_OUT16(Z75_final,10,0);
        VL_OUT16(Z76_final,10,0);
        VL_OUT16(Z77_final,10,0);
        VL_OUT16(Z78_final,10,0);
        VL_OUT16(Z81_final,10,0);
        VL_OUT16(Z82_final,10,0);
        VL_OUT16(Z83_final,10,0);
        VL_OUT16(Z84_final,10,0);
        VL_OUT16(Z85_final,10,0);
        VL_OUT16(Z86_final,10,0);
        VL_OUT16(Z87_final,10,0);
        VL_OUT16(Z88_final,10,0);
        SData/*13:0*/ __PVT__Ti1;
        SData/*12:0*/ __PVT__Y11_final_1;
        SData/*12:0*/ __PVT__Y21_final_1;
        SData/*12:0*/ __PVT__Y31_final_1;
        SData/*12:0*/ __PVT__Y41_final_1;
        SData/*12:0*/ __PVT__Y51_final_1;
        SData/*12:0*/ __PVT__Y61_final_1;
        SData/*12:0*/ __PVT__Y71_final_1;
        SData/*12:0*/ __PVT__Y81_final_1;
        SData/*15:0*/ __Vcellinp__u102____pinNumber2;
        SData/*15:0*/ __PVT__u86__DOT__a_temp;
        SData/*15:0*/ __PVT__u100__DOT__a_temp;
        SData/*15:0*/ __PVT__u100__DOT__b_temp;
        SData/*15:0*/ __PVT__u101__DOT__b_temp;
        SData/*15:0*/ __PVT__u102__DOT__a_temp;
        SData/*15:0*/ __PVT__u102__DOT__b_temp;
        SData/*15:0*/ __PVT__u103__DOT__b_temp;
        SData/*15:0*/ __PVT__u104__DOT__b_temp;
        SData/*15:0*/ __PVT__u105__DOT__b_temp;
        SData/*15:0*/ __PVT__u106__DOT__b_temp;
        SData/*15:0*/ __PVT__u107__DOT__b_temp;
        SData/*15:0*/ __PVT__u110__DOT__a_temp;
        SData/*15:0*/ __PVT__u118__DOT__a_temp;
        SData/*15:0*/ __PVT__u126__DOT__a_temp;
        SData/*15:0*/ __PVT__u134__DOT__a_temp;
        SData/*15:0*/ __PVT__u142__DOT__a_temp;
        SData/*15:0*/ __PVT__u79__DOT__a_temp;
        SData/*15:0*/ __PVT__u80__DOT__a_temp;
        SData/*15:0*/ __PVT__u81__DOT__a_temp;
        SData/*15:0*/ __PVT__u82__DOT__a_temp;
        SData/*15:0*/ __PVT__u83__DOT__a_temp;
        SData/*15:0*/ __PVT__u84__DOT__a_temp;
        SData/*15:0*/ __PVT__u85__DOT__a_temp;
        IData/*31:0*/ __PVT__T1;
        IData/*31:0*/ __PVT__T21;
        IData/*31:0*/ __PVT__T22;
    };
    struct {
        IData/*31:0*/ __PVT__T23;
        IData/*31:0*/ __PVT__T24;
        IData/*31:0*/ __PVT__T25;
        IData/*31:0*/ __PVT__T26;
        IData/*31:0*/ __PVT__T27;
        IData/*31:0*/ __PVT__T28;
        IData/*31:0*/ __PVT__T31;
        IData/*31:0*/ __PVT__T32;
        IData/*31:0*/ __PVT__T33;
        IData/*31:0*/ __PVT__T34;
        IData/*31:0*/ __PVT__T52;
        IData/*31:0*/ __PVT__Ti21;
        IData/*31:0*/ __PVT__Ti22;
        IData/*31:0*/ __PVT__Ti23;
        IData/*31:0*/ __PVT__Ti24;
        IData/*31:0*/ __PVT__Ti25;
        IData/*31:0*/ __PVT__Ti26;
        IData/*31:0*/ __PVT__Ti27;
        IData/*31:0*/ __PVT__Ti28;
        IData/*31:0*/ __PVT__Ti31;
        IData/*31:0*/ __PVT__Ti32;
        IData/*31:0*/ __PVT__Ti33;
        IData/*31:0*/ __PVT__Ti34;
        IData/*31:0*/ __PVT__Ti52;
        IData/*31:0*/ __PVT__Y2_mul_input;
        IData/*31:0*/ __PVT__Y3_mul_input;
        IData/*31:0*/ __PVT__Y4_mul_input;
        IData/*31:0*/ __PVT__Y5_mul_input;
        IData/*31:0*/ __PVT__Y6_mul_input;
        IData/*31:0*/ __PVT__Y7_mul_input;
        IData/*31:0*/ __PVT__Y8_mul_input;
        IData/*31:0*/ __PVT__Ti2_mul_input;
        IData/*31:0*/ __PVT__Ti3_mul_input;
        IData/*31:0*/ __PVT__Ti4_mul_input;
        IData/*31:0*/ __PVT__Ti5_mul_input;
        IData/*31:0*/ __PVT__Ti6_mul_input;
        IData/*31:0*/ __PVT__Ti7_mul_input;
        IData/*31:0*/ __PVT__Ti8_mul_input;
        IData/*24:0*/ __PVT__Y_temp_11;
        IData/*31:0*/ __PVT__Y_temp_21;
        IData/*31:0*/ __PVT__Y_temp_31;
        IData/*31:0*/ __PVT__Y_temp_41;
        IData/*31:0*/ __PVT__Y_temp_51;
        IData/*31:0*/ __PVT__Y_temp_61;
        IData/*31:0*/ __PVT__Y_temp_71;
        IData/*31:0*/ __PVT__Y_temp_81;
        IData/*24:0*/ __PVT__Y11;
        IData/*24:0*/ __PVT__Y21;
        IData/*24:0*/ __PVT__Y31;
        IData/*24:0*/ __PVT__Y41;
        IData/*24:0*/ __PVT__Y51;
        IData/*24:0*/ __PVT__Y61;
        IData/*24:0*/ __PVT__Y71;
        IData/*24:0*/ __PVT__Y81;
        IData/*31:0*/ __PVT__Z_temp_11;
        IData/*31:0*/ __PVT__Z_temp_12;
        IData/*31:0*/ __PVT__Z_temp_13;
        IData/*31:0*/ __PVT__Z_temp_14;
        IData/*31:0*/ __PVT__Z_temp_15;
        IData/*31:0*/ __PVT__Z_temp_16;
        IData/*31:0*/ __PVT__Z_temp_17;
        IData/*31:0*/ __PVT__Z_temp_18;
        IData/*31:0*/ __PVT__Z_temp_21;
        IData/*31:0*/ __PVT__Z_temp_22;
    };
    struct {
        IData/*31:0*/ __PVT__Z_temp_23;
        IData/*31:0*/ __PVT__Z_temp_24;
        IData/*31:0*/ __PVT__Z_temp_25;
        IData/*31:0*/ __PVT__Z_temp_26;
        IData/*31:0*/ __PVT__Z_temp_27;
        IData/*31:0*/ __PVT__Z_temp_28;
        IData/*31:0*/ __PVT__Z_temp_31;
        IData/*31:0*/ __PVT__Z_temp_32;
        IData/*31:0*/ __PVT__Z_temp_33;
        IData/*31:0*/ __PVT__Z_temp_34;
        IData/*31:0*/ __PVT__Z_temp_35;
        IData/*31:0*/ __PVT__Z_temp_36;
        IData/*31:0*/ __PVT__Z_temp_37;
        IData/*31:0*/ __PVT__Z_temp_38;
        IData/*31:0*/ __PVT__Z_temp_41;
        IData/*31:0*/ __PVT__Z_temp_42;
        IData/*31:0*/ __PVT__Z_temp_43;
        IData/*31:0*/ __PVT__Z_temp_44;
        IData/*31:0*/ __PVT__Z_temp_45;
        IData/*31:0*/ __PVT__Z_temp_46;
        IData/*31:0*/ __PVT__Z_temp_47;
        IData/*31:0*/ __PVT__Z_temp_48;
        IData/*31:0*/ __PVT__Z_temp_51;
        IData/*31:0*/ __PVT__Z_temp_52;
        IData/*31:0*/ __PVT__Z_temp_53;
        IData/*31:0*/ __PVT__Z_temp_54;
        IData/*31:0*/ __PVT__Z_temp_55;
        IData/*31:0*/ __PVT__Z_temp_56;
        IData/*31:0*/ __PVT__Z_temp_57;
        IData/*31:0*/ __PVT__Z_temp_58;
        IData/*31:0*/ __PVT__Z_temp_61;
        IData/*31:0*/ __PVT__Z_temp_62;
        IData/*31:0*/ __PVT__Z_temp_63;
        IData/*31:0*/ __PVT__Z_temp_64;
        IData/*31:0*/ __PVT__Z_temp_65;
        IData/*31:0*/ __PVT__Z_temp_66;
        IData/*31:0*/ __PVT__Z_temp_67;
        IData/*31:0*/ __PVT__Z_temp_68;
        IData/*31:0*/ __PVT__Z_temp_71;
        IData/*31:0*/ __PVT__Z_temp_72;
        IData/*31:0*/ __PVT__Z_temp_73;
        IData/*31:0*/ __PVT__Z_temp_74;
        IData/*31:0*/ __PVT__Z_temp_75;
        IData/*31:0*/ __PVT__Z_temp_76;
        IData/*31:0*/ __PVT__Z_temp_77;
        IData/*31:0*/ __PVT__Z_temp_78;
        IData/*31:0*/ __PVT__Z_temp_81;
        IData/*31:0*/ __PVT__Z_temp_82;
        IData/*31:0*/ __PVT__Z_temp_83;
        IData/*31:0*/ __PVT__Z_temp_84;
        IData/*31:0*/ __PVT__Z_temp_85;
        IData/*31:0*/ __PVT__Z_temp_86;
        IData/*31:0*/ __PVT__Z_temp_87;
        IData/*31:0*/ __PVT__Z_temp_88;
        IData/*26:0*/ __PVT__Z11;
        IData/*26:0*/ __PVT__Z12;
        IData/*26:0*/ __PVT__Z13;
        IData/*26:0*/ __PVT__Z14;
        IData/*26:0*/ __PVT__Z15;
        IData/*26:0*/ __PVT__Z16;
        IData/*26:0*/ __PVT__Z17;
        IData/*26:0*/ __PVT__Z18;
        IData/*26:0*/ __PVT__Z21;
        IData/*26:0*/ __PVT__Z22;
    };
    struct {
        IData/*26:0*/ __PVT__Z23;
        IData/*26:0*/ __PVT__Z24;
        IData/*26:0*/ __PVT__Z25;
        IData/*26:0*/ __PVT__Z26;
        IData/*26:0*/ __PVT__Z27;
        IData/*26:0*/ __PVT__Z28;
        IData/*26:0*/ __PVT__Z31;
        IData/*26:0*/ __PVT__Z32;
        IData/*26:0*/ __PVT__Z33;
        IData/*26:0*/ __PVT__Z34;
        IData/*26:0*/ __PVT__Z35;
        IData/*26:0*/ __PVT__Z36;
        IData/*26:0*/ __PVT__Z37;
        IData/*26:0*/ __PVT__Z38;
        IData/*26:0*/ __PVT__Z41;
        IData/*26:0*/ __PVT__Z42;
        IData/*26:0*/ __PVT__Z43;
        IData/*26:0*/ __PVT__Z44;
        IData/*26:0*/ __PVT__Z45;
        IData/*26:0*/ __PVT__Z46;
        IData/*26:0*/ __PVT__Z47;
        IData/*26:0*/ __PVT__Z48;
        IData/*26:0*/ __PVT__Z51;
        IData/*26:0*/ __PVT__Z52;
        IData/*26:0*/ __PVT__Z53;
        IData/*26:0*/ __PVT__Z54;
        IData/*26:0*/ __PVT__Z55;
        IData/*26:0*/ __PVT__Z56;
        IData/*26:0*/ __PVT__Z57;
        IData/*26:0*/ __PVT__Z58;
        IData/*26:0*/ __PVT__Z61;
        IData/*26:0*/ __PVT__Z62;
        IData/*26:0*/ __PVT__Z63;
        IData/*26:0*/ __PVT__Z64;
        IData/*26:0*/ __PVT__Z65;
        IData/*26:0*/ __PVT__Z66;
        IData/*26:0*/ __PVT__Z67;
        IData/*26:0*/ __PVT__Z68;
        IData/*26:0*/ __PVT__Z71;
        IData/*26:0*/ __PVT__Z72;
        IData/*26:0*/ __PVT__Z73;
        IData/*26:0*/ __PVT__Z74;
        IData/*26:0*/ __PVT__Z75;
        IData/*26:0*/ __PVT__Z76;
        IData/*26:0*/ __PVT__Z77;
        IData/*26:0*/ __PVT__Z78;
        IData/*26:0*/ __PVT__Z81;
        IData/*26:0*/ __PVT__Z82;
        IData/*26:0*/ __PVT__Z83;
        IData/*26:0*/ __PVT__Z84;
        IData/*26:0*/ __PVT__Z85;
        IData/*26:0*/ __PVT__Z86;
        IData/*26:0*/ __PVT__Z87;
        IData/*26:0*/ __PVT__Z88;
        IData/*24:0*/ __PVT__Y11_final;
        IData/*31:0*/ __PVT__Y11_final_2;
        IData/*31:0*/ __PVT__Y21_final_2;
        IData/*31:0*/ __PVT__Y11_final_3;
        IData/*31:0*/ __PVT__Y11_final_4;
        IData/*31:0*/ __PVT__Y31_final_2;
        IData/*31:0*/ __PVT__Y41_final_2;
        IData/*31:0*/ __PVT__Y51_final_2;
        IData/*31:0*/ __PVT__Y61_final_2;
        IData/*31:0*/ __PVT__Y71_final_2;
    };
    struct {
        IData/*31:0*/ __PVT__Y81_final_2;
        IData/*24:0*/ __PVT__Y21_final;
        IData/*24:0*/ __PVT__Y31_final;
        IData/*24:0*/ __PVT__Y41_final;
        IData/*24:0*/ __PVT__Y51_final;
        IData/*24:0*/ __PVT__Y61_final;
        IData/*24:0*/ __PVT__Y71_final;
        IData/*24:0*/ __PVT__Y81_final;
        IData/*24:0*/ __PVT__Y21_final_prev;
        IData/*24:0*/ __PVT__Y21_final_diff;
        IData/*24:0*/ __PVT__Y31_final_prev;
        IData/*24:0*/ __PVT__Y31_final_diff;
        IData/*24:0*/ __PVT__Y41_final_prev;
        IData/*24:0*/ __PVT__Y41_final_diff;
        IData/*24:0*/ __PVT__Y51_final_prev;
        IData/*24:0*/ __PVT__Y51_final_diff;
        IData/*24:0*/ __PVT__Y61_final_prev;
        IData/*24:0*/ __PVT__Y61_final_diff;
        IData/*24:0*/ __PVT__Y71_final_prev;
        IData/*24:0*/ __PVT__Y71_final_diff;
        IData/*24:0*/ __PVT__Y81_final_prev;
        IData/*24:0*/ __PVT__Y81_final_diff;
        IData/*19:0*/ __VdfgTmp_h895eb57d__0;
        IData/*19:0*/ __VdfgTmp_h5ca32564__0;
        IData/*19:0*/ __VdfgTmp_heb06cd7f__0;
        IData/*19:0*/ __VdfgTmp_h18cdc88b__0;
        IData/*19:0*/ __VdfgTmp_hdcb74df7__0;
        IData/*19:0*/ __VdfgTmp_h73488aa2__0;
        IData/*19:0*/ __VdfgTmp_hcb3d4a88__0;
        IData/*19:0*/ __VdfgTmp_ha5466a65__0;
        IData/*19:0*/ __VdfgTmp_hfacb1acd__0;
        IData/*19:0*/ __VdfgTmp_hf9439c84__0;
        IData/*19:0*/ __VdfgTmp_h0531a5f9__0;
        IData/*19:0*/ __VdfgTmp_h6baeb8f3__0;
        IData/*19:0*/ __VdfgTmp_h6ceca4d6__0;
        IData/*19:0*/ __VdfgTmp_h959c0293__0;
        IData/*19:0*/ __VdfgTmp_h914a6a8e__0;
        IData/*19:0*/ __VdfgTmp_h7e687d86__0;
        IData/*19:0*/ __VdfgTmp_h70954b96__0;
        IData/*19:0*/ __VdfgTmp_h23caa823__0;
        IData/*19:0*/ __VdfgTmp_h146aafdb__0;
        IData/*19:0*/ __VdfgTmp_h94552b1c__0;
        IData/*19:0*/ __VdfgTmp_heb395003__0;
        IData/*19:0*/ __VdfgTmp_h3231baf1__0;
        IData/*19:0*/ __VdfgTmp_h8907717c__0;
        IData/*19:0*/ __VdfgTmp_h54dabb16__0;
        IData/*19:0*/ __VdfgTmp_ha9e9ceee__0;
        IData/*19:0*/ __VdfgTmp_h5a6bec27__0;
        IData/*19:0*/ __VdfgTmp_h377e60ba__0;
        IData/*19:0*/ __VdfgTmp_hfac3ba4d__0;
        IData/*19:0*/ __VdfgTmp_h1c3485bb__0;
        IData/*19:0*/ __VdfgTmp_h2c212360__0;
        IData/*19:0*/ __VdfgTmp_hf3382763__0;
        IData/*19:0*/ __VdfgTmp_h0fc09707__0;
        IData/*19:0*/ __VdfgTmp_h98896ff5__0;
        IData/*19:0*/ __VdfgTmp_he970161a__0;
        IData/*19:0*/ __VdfgTmp_h7d996638__0;
        IData/*19:0*/ __VdfgTmp_h4fbc99c5__0;
        IData/*19:0*/ __VdfgTmp_haba5e3fb__0;
        IData/*19:0*/ __VdfgTmp_h20a39bac__0;
        IData/*19:0*/ __VdfgTmp_h6bbca96e__0;
        IData/*19:0*/ __VdfgTmp_h45d93d79__0;
        IData/*19:0*/ __VdfgTmp_ha2a14d4b__0;
        IData/*19:0*/ __VdfgTmp_hc2a690ba__0;
    };
    struct {
        IData/*19:0*/ __VdfgTmp_h5ef203be__0;
        IData/*19:0*/ __VdfgTmp_hcde3deee__0;
        IData/*19:0*/ __VdfgTmp_he6c7c370__0;
        IData/*19:0*/ __VdfgTmp_h8413b2f5__0;
        IData/*19:0*/ __VdfgTmp_h34f195a0__0;
        IData/*19:0*/ __VdfgTmp_hf33fbec9__0;
        IData/*19:0*/ __VdfgTmp_haac2aea7__0;
        IData/*19:0*/ __VdfgTmp_hc518a9df__0;
        IData/*19:0*/ __VdfgTmp_hbcc67f14__0;
        IData/*19:0*/ __VdfgTmp_hb994f223__0;
        IData/*19:0*/ __VdfgTmp_h29cc1ecb__0;
        IData/*19:0*/ __VdfgTmp_heefb45da__0;
        IData/*19:0*/ __VdfgTmp_hfff18c44__0;
        IData/*19:0*/ __VdfgTmp_hf6be61eb__0;
        IData/*19:0*/ __VdfgTmp_h690149e8__0;
        IData/*19:0*/ __VdfgTmp_ha9bb193c__0;
        IData/*19:0*/ __VdfgTmp_hea214d5c__0;
        IData/*19:0*/ __VdfgTmp_h05a24e1f__0;
        IData/*19:0*/ __VdfgTmp_h30665b1e__0;
        IData/*19:0*/ __VdfgTmp_h6bd1c179__0;
        IData/*19:0*/ __VdfgTmp_h712a86c8__0;
        IData/*19:0*/ __VdfgTmp_h34db8e89__0;
        IData/*24:0*/ __VdfgTmp_hff93f11e__0;
        IData/*24:0*/ __VdfgTmp_h9a9d9c8a__0;
        IData/*24:0*/ __VdfgTmp_h190eb5bc__0;
        IData/*24:0*/ __VdfgTmp_h21e6af96__0;
        IData/*24:0*/ __VdfgTmp_h9604aa1e__0;
        IData/*24:0*/ __VdfgTmp_h0e69b77c__0;
        IData/*24:0*/ __VdfgTmp_hc15c2ded__0;
        QData/*33:0*/ __VdfgTmp_hd358cecd__0;
        QData/*33:0*/ __VdfgTmp_hb5d3819f__0;
        QData/*33:0*/ __VdfgTmp_h6b20eb67__0;
        QData/*33:0*/ __VdfgTmp_h223a61ce__0;
        QData/*33:0*/ __VdfgTmp_h216275e3__0;
        QData/*33:0*/ __VdfgTmp_h4f997fe4__0;
        QData/*33:0*/ __VdfgTmp_h38cce513__0;
        QData/*33:0*/ __VdfgTmp_h7f1a2df4__0;
        QData/*33:0*/ __VdfgTmp_h3a975308__0;
        QData/*33:0*/ __VdfgTmp_ha58a2781__0;
        QData/*33:0*/ __VdfgTmp_h4c5300e6__0;
        QData/*33:0*/ __VdfgTmp_hb6088b02__0;
        QData/*33:0*/ __VdfgTmp_hde2d8c69__0;
        QData/*33:0*/ __VdfgTmp_hc686e7df__0;
    };

    // INTERNAL VARIABLES
    jpeg_top_loa_8_LOBA2_4__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub_dct(jpeg_top_loa_8_LOBA2_4__Syms* symsp, const char* name);
    ~sub_dct();
    VL_UNCOPYABLE(sub_dct);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
