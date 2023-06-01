// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See jpeg_top_trunc1_12_DRUM_6.h for the primary calling header

#ifndef VERILATED_SUB_DCT_H_
#define VERILATED_SUB_DCT_H_  // guard

#include "verilated.h"

class jpeg_top_trunc1_12_DRUM_6__Syms;
class sub_DRUMs__K6;


class sub_dct final : public VerilatedModule {
  public:
    // CELLS
    sub_DRUMs__K6* __PVT__u86;
    sub_DRUMs__K6* __PVT__u87;
    sub_DRUMs__K6* __PVT__u88;
    sub_DRUMs__K6* __PVT__u89;
    sub_DRUMs__K6* __PVT__u90;
    sub_DRUMs__K6* __PVT__u91;
    sub_DRUMs__K6* __PVT__u92;
    sub_DRUMs__K6* __PVT__u93;
    sub_DRUMs__K6* __PVT__u94;
    sub_DRUMs__K6* __PVT__u95;
    sub_DRUMs__K6* __PVT__u96;
    sub_DRUMs__K6* __PVT__u97;
    sub_DRUMs__K6* __PVT__u98;
    sub_DRUMs__K6* __PVT__u99;
    sub_DRUMs__K6* __PVT__u100;
    sub_DRUMs__K6* __PVT__u101;
    sub_DRUMs__K6* __PVT__u102;
    sub_DRUMs__K6* __PVT__u103;
    sub_DRUMs__K6* __PVT__u104;
    sub_DRUMs__K6* __PVT__u105;
    sub_DRUMs__K6* __PVT__u106;
    sub_DRUMs__K6* __PVT__u107;
    sub_DRUMs__K6* __PVT__u108;
    sub_DRUMs__K6* __PVT__u109;
    sub_DRUMs__K6* __PVT__u110;
    sub_DRUMs__K6* __PVT__u111;
    sub_DRUMs__K6* __PVT__u112;
    sub_DRUMs__K6* __PVT__u113;
    sub_DRUMs__K6* __PVT__u114;
    sub_DRUMs__K6* __PVT__u115;
    sub_DRUMs__K6* __PVT__u116;
    sub_DRUMs__K6* __PVT__u117;
    sub_DRUMs__K6* __PVT__u118;
    sub_DRUMs__K6* __PVT__u119;
    sub_DRUMs__K6* __PVT__u120;
    sub_DRUMs__K6* __PVT__u121;
    sub_DRUMs__K6* __PVT__u122;
    sub_DRUMs__K6* __PVT__u123;
    sub_DRUMs__K6* __PVT__u124;
    sub_DRUMs__K6* __PVT__u125;
    sub_DRUMs__K6* __PVT__u126;
    sub_DRUMs__K6* __PVT__u127;
    sub_DRUMs__K6* __PVT__u128;
    sub_DRUMs__K6* __PVT__u129;
    sub_DRUMs__K6* __PVT__u130;
    sub_DRUMs__K6* __PVT__u131;
    sub_DRUMs__K6* __PVT__u132;
    sub_DRUMs__K6* __PVT__u133;
    sub_DRUMs__K6* __PVT__u134;
    sub_DRUMs__K6* __PVT__u135;
    sub_DRUMs__K6* __PVT__u136;
    sub_DRUMs__K6* __PVT__u137;
    sub_DRUMs__K6* __PVT__u138;
    sub_DRUMs__K6* __PVT__u139;
    sub_DRUMs__K6* __PVT__u140;
    sub_DRUMs__K6* __PVT__u141;
    sub_DRUMs__K6* __PVT__u142;
    sub_DRUMs__K6* __PVT__u143;
    sub_DRUMs__K6* __PVT__u144;
    sub_DRUMs__K6* __PVT__u145;
    sub_DRUMs__K6* __PVT__u146;
    sub_DRUMs__K6* __PVT__u147;
    sub_DRUMs__K6* __PVT__u148;
    sub_DRUMs__K6* __PVT__u149;

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
        VL_OUT16(Z55_final,10,0);
        VL_OUT16(Z56_final,10,0);
        VL_OUT16(Z57_final,10,0);
        VL_OUT16(Z58_final,10,0);
        VL_OUT16(Z61_final,10,0);
        VL_OUT16(Z62_final,10,0);
        VL_OUT16(Z63_final,10,0);
    };
    struct {
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
        SData/*15:0*/ __Vcellinp__u100____pinNumber2;
        SData/*15:0*/ __Vcellinp__u101____pinNumber2;
        SData/*15:0*/ __Vcellinp__u102____pinNumber2;
        SData/*15:0*/ __Vcellinp__u103____pinNumber2;
        SData/*15:0*/ __Vcellinp__u104____pinNumber2;
        SData/*15:0*/ __Vcellinp__u105____pinNumber2;
        SData/*15:0*/ __Vcellinp__u106____pinNumber2;
        SData/*15:0*/ __Vcellinp__u107____pinNumber2;
        SData/*15:0*/ __PVT__u79__DOT__U1__DOT__l1;
        SData/*15:0*/ __PVT__u79__DOT__U1__DOT__l2;
        SData/*15:0*/ __PVT__u79__DOT__U1__DOT__u1__DOT__w;
        SData/*15:0*/ __PVT__u79__DOT__U1__DOT__u2__DOT__w;
        SData/*15:0*/ __PVT__u80__DOT__U1__DOT__l1;
        SData/*15:0*/ __PVT__u80__DOT__U1__DOT__l2;
        SData/*15:0*/ __PVT__u80__DOT__U1__DOT__u1__DOT__w;
        SData/*15:0*/ __PVT__u80__DOT__U1__DOT__u2__DOT__w;
        SData/*15:0*/ __PVT__u81__DOT__U1__DOT__l1;
        SData/*15:0*/ __PVT__u81__DOT__U1__DOT__l2;
        SData/*15:0*/ __PVT__u81__DOT__U1__DOT__u1__DOT__w;
        SData/*15:0*/ __PVT__u81__DOT__U1__DOT__u2__DOT__w;
        SData/*15:0*/ __PVT__u82__DOT__U1__DOT__l1;
        SData/*15:0*/ __PVT__u82__DOT__U1__DOT__l2;
        SData/*15:0*/ __PVT__u82__DOT__U1__DOT__u1__DOT__w;
        SData/*15:0*/ __PVT__u82__DOT__U1__DOT__u2__DOT__w;
        SData/*15:0*/ __PVT__u83__DOT__U1__DOT__l1;
        SData/*15:0*/ __PVT__u83__DOT__U1__DOT__l2;
        SData/*15:0*/ __PVT__u83__DOT__U1__DOT__u1__DOT__w;
        SData/*15:0*/ __PVT__u83__DOT__U1__DOT__u2__DOT__w;
        SData/*15:0*/ __PVT__u84__DOT__U1__DOT__l1;
        SData/*15:0*/ __PVT__u84__DOT__U1__DOT__l2;
        SData/*15:0*/ __PVT__u84__DOT__U1__DOT__u1__DOT__w;
        SData/*15:0*/ __PVT__u84__DOT__U1__DOT__u2__DOT__w;
        SData/*15:0*/ __PVT__u85__DOT__U1__DOT__l1;
        SData/*15:0*/ __PVT__u85__DOT__U1__DOT__l2;
    };
    struct {
        SData/*15:0*/ __PVT__u85__DOT__U1__DOT__u1__DOT__w;
        SData/*15:0*/ __PVT__u85__DOT__U1__DOT__u2__DOT__w;
        SData/*15:0*/ __VdfgTmp_h6e9bbc28__0;
        SData/*15:0*/ __VdfgTmp_h68fe8c47__0;
        SData/*15:0*/ __VdfgTmp_hdcb347c0__0;
        SData/*15:0*/ __VdfgTmp_h37fa126a__0;
        SData/*15:0*/ __VdfgTmp_hb75a01fc__0;
        SData/*15:0*/ __VdfgTmp_h40cbdc71__0;
        SData/*15:0*/ __VdfgTmp_h962c433f__0;
        SData/*15:0*/ __VdfgTmp_h501d22c6__0;
        SData/*15:0*/ __VdfgTmp_h392734fe__0;
        SData/*15:0*/ __VdfgTmp_h9495f437__0;
        SData/*15:0*/ __VdfgTmp_h248e883e__0;
        SData/*15:0*/ __VdfgTmp_h652a99b8__0;
        SData/*15:0*/ __VdfgTmp_h00f78acb__0;
        SData/*15:0*/ __VdfgTmp_hbdfb1890__0;
        SData/*15:0*/ __VdfgTmp_h9b771323__0;
        SData/*15:0*/ __VdfgTmp_h31a044fd__0;
        SData/*15:0*/ __VdfgTmp_h33f3f859__0;
        SData/*15:0*/ __VdfgTmp_hc750b5fa__0;
        SData/*15:0*/ __VdfgTmp_h0b7dd282__0;
        SData/*15:0*/ __VdfgTmp_h9385f441__0;
        SData/*15:0*/ __VdfgTmp_h98f933e4__0;
        SData/*15:0*/ __VdfgTmp_h3b8cd846__0;
        SData/*15:0*/ __VdfgTmp_hb3f72921__0;
        SData/*15:0*/ __VdfgTmp_h50f5bad7__0;
        SData/*15:0*/ __VdfgTmp_ha7331f0f__0;
        SData/*15:0*/ __VdfgTmp_h53805d32__0;
        SData/*15:0*/ __VdfgTmp_h0c466a1f__0;
        SData/*15:0*/ __VdfgTmp_hc028f072__0;
        SData/*15:0*/ __VdfgTmp_h4579bb76__0;
        SData/*15:0*/ __VdfgTmp_hf2adfe0d__0;
        SData/*15:0*/ __VdfgTmp_hfde848de__0;
        SData/*15:0*/ __VdfgTmp_h3dfe6262__0;
        SData/*15:0*/ __VdfgTmp_h767de872__0;
        SData/*15:0*/ __VdfgTmp_h1ee81097__0;
        SData/*15:0*/ __VdfgTmp_h71d89aeb__0;
        SData/*15:0*/ __VdfgTmp_h44f245b4__0;
        SData/*15:0*/ __VdfgTmp_h500f6cc6__0;
        SData/*15:0*/ __VdfgTmp_h4129b7d9__0;
        SData/*15:0*/ __VdfgTmp_h4478dac1__0;
        SData/*15:0*/ __VdfgTmp_h5cf5a080__0;
        SData/*15:0*/ __VdfgTmp_h5b49cd8a__0;
        SData/*15:0*/ __VdfgTmp_hf375aeab__0;
        SData/*15:0*/ __VdfgTmp_h5c6506e7__0;
        SData/*15:0*/ __VdfgTmp_hf9238cfd__0;
        SData/*15:0*/ __VdfgTmp_h2a0dbea9__0;
        SData/*15:0*/ __VdfgTmp_h83a136c8__0;
        SData/*15:0*/ __VdfgTmp_hcb7fab77__0;
        SData/*15:0*/ __VdfgTmp_hbe23f29a__0;
        SData/*15:0*/ __VdfgTmp_hec69649a__0;
        SData/*15:0*/ __VdfgTmp_hcefb1a5a__0;
        SData/*15:0*/ __VdfgTmp_ha800273f__0;
        SData/*15:0*/ __VdfgTmp_hb282e512__0;
        SData/*15:0*/ __VdfgTmp_h3b247ba8__0;
        SData/*15:0*/ __VdfgTmp_he4a0b2ab__0;
        SData/*15:0*/ __VdfgTmp_hc4eae243__0;
        SData/*15:0*/ __VdfgTmp_hf04b4d1e__0;
        SData/*15:0*/ __VdfgTmp_h1ee4ce71__0;
        SData/*15:0*/ __VdfgTmp_hbbc98315__0;
        SData/*15:0*/ __VdfgTmp_he555ca8b__0;
        SData/*15:0*/ __VdfgTmp_h1610fc92__0;
        SData/*15:0*/ __VdfgTmp_h1c80a867__0;
        SData/*15:0*/ __VdfgTmp_h64c8172e__0;
    };
    struct {
        SData/*15:0*/ __VdfgTmp_h657cf3eb__0;
        SData/*15:0*/ __VdfgTmp_h3b6a3ed2__0;
        IData/*31:0*/ __PVT__T1;
        IData/*31:0*/ __PVT__T21;
        IData/*31:0*/ __PVT__T22;
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
    };
    struct {
        IData/*31:0*/ __PVT__Z_temp_16;
        IData/*31:0*/ __PVT__Z_temp_17;
        IData/*31:0*/ __PVT__Z_temp_18;
        IData/*31:0*/ __PVT__Z_temp_21;
        IData/*31:0*/ __PVT__Z_temp_22;
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
    };
    struct {
        IData/*26:0*/ __PVT__Z16;
        IData/*26:0*/ __PVT__Z17;
        IData/*26:0*/ __PVT__Z18;
        IData/*26:0*/ __PVT__Z21;
        IData/*26:0*/ __PVT__Z22;
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
    };
    struct {
        IData/*31:0*/ __PVT__Y31_final_2;
        IData/*31:0*/ __PVT__Y41_final_2;
        IData/*31:0*/ __PVT__Y51_final_2;
        IData/*31:0*/ __PVT__Y61_final_2;
        IData/*31:0*/ __PVT__Y71_final_2;
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
        IData/*31:0*/ __PVT__u79__DOT__r_temp;
        IData/*31:0*/ __PVT__u80__DOT__r_temp;
        IData/*31:0*/ __PVT__u81__DOT__r_temp;
        IData/*31:0*/ __PVT__u82__DOT__r_temp;
        IData/*31:0*/ __PVT__u83__DOT__r_temp;
        IData/*31:0*/ __PVT__u84__DOT__r_temp;
        IData/*31:0*/ __PVT__u85__DOT__r_temp;
        IData/*20:0*/ __VdfgTmp_ha2b09547__0;
        IData/*20:0*/ __VdfgTmp_h534fb9c3__0;
        IData/*20:0*/ __VdfgTmp_h3f0a3c2c__0;
        IData/*20:0*/ __VdfgTmp_h029b1255__0;
        IData/*20:0*/ __VdfgTmp_h40925677__0;
        IData/*20:0*/ __VdfgTmp_h62da4631__0;
        IData/*20:0*/ __VdfgTmp_h43adffde__0;
        QData/*33:0*/ __VdfgTmp_h7f1a2df4__0;
        QData/*33:0*/ __VdfgTmp_h3a975308__0;
        QData/*33:0*/ __VdfgTmp_ha58a2781__0;
        QData/*33:0*/ __VdfgTmp_h4c5300e6__0;
        QData/*33:0*/ __VdfgTmp_hb6088b02__0;
        QData/*33:0*/ __VdfgTmp_hde2d8c69__0;
        QData/*33:0*/ __VdfgTmp_hc686e7df__0;
    };

    // INTERNAL VARIABLES
    jpeg_top_trunc1_12_DRUM_6__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub_dct(jpeg_top_trunc1_12_DRUM_6__Syms* symsp, const char* name);
    ~sub_dct();
    VL_UNCOPYABLE(sub_dct);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard