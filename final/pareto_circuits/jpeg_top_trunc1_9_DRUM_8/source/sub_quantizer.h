// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See jpeg_top_trunc1_9_DRUM_8.h for the primary calling header

#ifndef VERILATED_SUB_QUANTIZER_H_
#define VERILATED_SUB_QUANTIZER_H_  // guard

#include "verilated.h"

class jpeg_top_trunc1_9_DRUM_8__Syms;
class sub_DRUMs__K8;


class sub_quantizer final : public VerilatedModule {
  public:
    // CELLS
    sub_DRUMs__K8* __PVT__u11;
    sub_DRUMs__K8* __PVT__u12;
    sub_DRUMs__K8* __PVT__u13;
    sub_DRUMs__K8* __PVT__u14;
    sub_DRUMs__K8* __PVT__u15;
    sub_DRUMs__K8* __PVT__u16;
    sub_DRUMs__K8* __PVT__u17;
    sub_DRUMs__K8* __PVT__u18;
    sub_DRUMs__K8* __PVT__u21;
    sub_DRUMs__K8* __PVT__u22;
    sub_DRUMs__K8* __PVT__u23;
    sub_DRUMs__K8* __PVT__u24;
    sub_DRUMs__K8* __PVT__u25;
    sub_DRUMs__K8* __PVT__u26;
    sub_DRUMs__K8* __PVT__u27;
    sub_DRUMs__K8* __PVT__u28;
    sub_DRUMs__K8* __PVT__u31;
    sub_DRUMs__K8* __PVT__u32;
    sub_DRUMs__K8* __PVT__u33;
    sub_DRUMs__K8* __PVT__u34;
    sub_DRUMs__K8* __PVT__u35;
    sub_DRUMs__K8* __PVT__u36;
    sub_DRUMs__K8* __PVT__u37;
    sub_DRUMs__K8* __PVT__u38;
    sub_DRUMs__K8* __PVT__u41;
    sub_DRUMs__K8* __PVT__u42;
    sub_DRUMs__K8* __PVT__u43;
    sub_DRUMs__K8* __PVT__u44;
    sub_DRUMs__K8* __PVT__u45;
    sub_DRUMs__K8* __PVT__u46;
    sub_DRUMs__K8* __PVT__u47;
    sub_DRUMs__K8* __PVT__u48;
    sub_DRUMs__K8* __PVT__u51;
    sub_DRUMs__K8* __PVT__u52;
    sub_DRUMs__K8* __PVT__u53;
    sub_DRUMs__K8* __PVT__u54;
    sub_DRUMs__K8* __PVT__u55;
    sub_DRUMs__K8* __PVT__u56;
    sub_DRUMs__K8* __PVT__u57;
    sub_DRUMs__K8* __PVT__u58;
    sub_DRUMs__K8* __PVT__u61;
    sub_DRUMs__K8* __PVT__u62;
    sub_DRUMs__K8* __PVT__u63;
    sub_DRUMs__K8* __PVT__u64;
    sub_DRUMs__K8* __PVT__u65;
    sub_DRUMs__K8* __PVT__u66;
    sub_DRUMs__K8* __PVT__u67;
    sub_DRUMs__K8* __PVT__u68;
    sub_DRUMs__K8* __PVT__u71;
    sub_DRUMs__K8* __PVT__u72;
    sub_DRUMs__K8* __PVT__u73;
    sub_DRUMs__K8* __PVT__u74;
    sub_DRUMs__K8* __PVT__u75;
    sub_DRUMs__K8* __PVT__u76;
    sub_DRUMs__K8* __PVT__u77;
    sub_DRUMs__K8* __PVT__u78;
    sub_DRUMs__K8* __PVT__u81;
    sub_DRUMs__K8* __PVT__u82;
    sub_DRUMs__K8* __PVT__u83;
    sub_DRUMs__K8* __PVT__u84;
    sub_DRUMs__K8* __PVT__u85;
    sub_DRUMs__K8* __PVT__u86;
    sub_DRUMs__K8* __PVT__u87;
    sub_DRUMs__K8* __PVT__u88;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(enable,0,0);
        VL_OUT8(out_enable,0,0);
        CData/*0:0*/ __PVT__enable_1;
        CData/*0:0*/ __PVT__enable_2;
        CData/*0:0*/ __PVT__enable_3;
        VL_IN16(Z11,10,0);
        VL_IN16(Z12,10,0);
        VL_IN16(Z13,10,0);
        VL_IN16(Z14,10,0);
        VL_IN16(Z15,10,0);
        VL_IN16(Z16,10,0);
        VL_IN16(Z17,10,0);
        VL_IN16(Z18,10,0);
        VL_IN16(Z21,10,0);
        VL_IN16(Z22,10,0);
        VL_IN16(Z23,10,0);
        VL_IN16(Z24,10,0);
        VL_IN16(Z25,10,0);
        VL_IN16(Z26,10,0);
        VL_IN16(Z27,10,0);
        VL_IN16(Z28,10,0);
        VL_IN16(Z31,10,0);
        VL_IN16(Z32,10,0);
        VL_IN16(Z33,10,0);
        VL_IN16(Z34,10,0);
        VL_IN16(Z35,10,0);
        VL_IN16(Z36,10,0);
        VL_IN16(Z37,10,0);
        VL_IN16(Z38,10,0);
        VL_IN16(Z41,10,0);
        VL_IN16(Z42,10,0);
        VL_IN16(Z43,10,0);
        VL_IN16(Z44,10,0);
        VL_IN16(Z45,10,0);
        VL_IN16(Z46,10,0);
        VL_IN16(Z47,10,0);
        VL_IN16(Z48,10,0);
        VL_IN16(Z51,10,0);
        VL_IN16(Z52,10,0);
        VL_IN16(Z53,10,0);
        VL_IN16(Z54,10,0);
        VL_IN16(Z55,10,0);
        VL_IN16(Z56,10,0);
        VL_IN16(Z57,10,0);
        VL_IN16(Z58,10,0);
        VL_IN16(Z61,10,0);
        VL_IN16(Z62,10,0);
        VL_IN16(Z63,10,0);
        VL_IN16(Z64,10,0);
        VL_IN16(Z65,10,0);
        VL_IN16(Z66,10,0);
        VL_IN16(Z67,10,0);
        VL_IN16(Z68,10,0);
        VL_IN16(Z71,10,0);
        VL_IN16(Z72,10,0);
        VL_IN16(Z73,10,0);
        VL_IN16(Z74,10,0);
        VL_IN16(Z75,10,0);
        VL_IN16(Z76,10,0);
        VL_IN16(Z77,10,0);
        VL_IN16(Z78,10,0);
        VL_IN16(Z81,10,0);
    };
    struct {
        VL_IN16(Z82,10,0);
        VL_IN16(Z83,10,0);
        VL_IN16(Z84,10,0);
        VL_IN16(Z85,10,0);
        VL_IN16(Z86,10,0);
        VL_IN16(Z87,10,0);
        VL_IN16(Z88,10,0);
        VL_OUT16(Q11,10,0);
        VL_OUT16(Q12,10,0);
        VL_OUT16(Q13,10,0);
        VL_OUT16(Q14,10,0);
        VL_OUT16(Q15,10,0);
        VL_OUT16(Q16,10,0);
        VL_OUT16(Q17,10,0);
        VL_OUT16(Q18,10,0);
        VL_OUT16(Q21,10,0);
        VL_OUT16(Q22,10,0);
        VL_OUT16(Q23,10,0);
        VL_OUT16(Q24,10,0);
        VL_OUT16(Q25,10,0);
        VL_OUT16(Q26,10,0);
        VL_OUT16(Q27,10,0);
        VL_OUT16(Q28,10,0);
        VL_OUT16(Q31,10,0);
        VL_OUT16(Q32,10,0);
        VL_OUT16(Q33,10,0);
        VL_OUT16(Q34,10,0);
        VL_OUT16(Q35,10,0);
        VL_OUT16(Q36,10,0);
        VL_OUT16(Q37,10,0);
        VL_OUT16(Q38,10,0);
        VL_OUT16(Q41,10,0);
        VL_OUT16(Q42,10,0);
        VL_OUT16(Q43,10,0);
        VL_OUT16(Q44,10,0);
        VL_OUT16(Q45,10,0);
        VL_OUT16(Q46,10,0);
        VL_OUT16(Q47,10,0);
        VL_OUT16(Q48,10,0);
        VL_OUT16(Q51,10,0);
        VL_OUT16(Q52,10,0);
        VL_OUT16(Q53,10,0);
        VL_OUT16(Q54,10,0);
        VL_OUT16(Q55,10,0);
        VL_OUT16(Q56,10,0);
        VL_OUT16(Q57,10,0);
        VL_OUT16(Q58,10,0);
        VL_OUT16(Q61,10,0);
        VL_OUT16(Q62,10,0);
        VL_OUT16(Q63,10,0);
        VL_OUT16(Q64,10,0);
        VL_OUT16(Q65,10,0);
        VL_OUT16(Q66,10,0);
        VL_OUT16(Q67,10,0);
        VL_OUT16(Q68,10,0);
        VL_OUT16(Q71,10,0);
        VL_OUT16(Q72,10,0);
        VL_OUT16(Q73,10,0);
        VL_OUT16(Q74,10,0);
        VL_OUT16(Q75,10,0);
        VL_OUT16(Q76,10,0);
        VL_OUT16(Q77,10,0);
        VL_OUT16(Q78,10,0);
        VL_OUT16(Q81,10,0);
    };
    struct {
        VL_OUT16(Q82,10,0);
        VL_OUT16(Q83,10,0);
        VL_OUT16(Q84,10,0);
        VL_OUT16(Q85,10,0);
        VL_OUT16(Q86,10,0);
        VL_OUT16(Q87,10,0);
        VL_OUT16(Q88,10,0);
        IData/*22:0*/ __PVT__Z11_temp;
        IData/*22:0*/ __PVT__Z12_temp;
        IData/*22:0*/ __PVT__Z13_temp;
        IData/*22:0*/ __PVT__Z14_temp;
        IData/*22:0*/ __PVT__Z15_temp;
        IData/*22:0*/ __PVT__Z16_temp;
        IData/*22:0*/ __PVT__Z17_temp;
        IData/*22:0*/ __PVT__Z18_temp;
        IData/*22:0*/ __PVT__Z21_temp;
        IData/*22:0*/ __PVT__Z22_temp;
        IData/*22:0*/ __PVT__Z23_temp;
        IData/*22:0*/ __PVT__Z24_temp;
        IData/*22:0*/ __PVT__Z25_temp;
        IData/*22:0*/ __PVT__Z26_temp;
        IData/*22:0*/ __PVT__Z27_temp;
        IData/*22:0*/ __PVT__Z28_temp;
        IData/*22:0*/ __PVT__Z31_temp;
        IData/*22:0*/ __PVT__Z32_temp;
        IData/*22:0*/ __PVT__Z33_temp;
        IData/*22:0*/ __PVT__Z34_temp;
        IData/*22:0*/ __PVT__Z35_temp;
        IData/*22:0*/ __PVT__Z36_temp;
        IData/*22:0*/ __PVT__Z37_temp;
        IData/*22:0*/ __PVT__Z38_temp;
        IData/*22:0*/ __PVT__Z41_temp;
        IData/*22:0*/ __PVT__Z42_temp;
        IData/*22:0*/ __PVT__Z43_temp;
        IData/*22:0*/ __PVT__Z44_temp;
        IData/*22:0*/ __PVT__Z45_temp;
        IData/*22:0*/ __PVT__Z46_temp;
        IData/*22:0*/ __PVT__Z47_temp;
        IData/*22:0*/ __PVT__Z48_temp;
        IData/*22:0*/ __PVT__Z51_temp;
        IData/*22:0*/ __PVT__Z52_temp;
        IData/*22:0*/ __PVT__Z53_temp;
        IData/*22:0*/ __PVT__Z54_temp;
        IData/*22:0*/ __PVT__Z55_temp;
        IData/*22:0*/ __PVT__Z56_temp;
        IData/*22:0*/ __PVT__Z57_temp;
        IData/*22:0*/ __PVT__Z58_temp;
        IData/*22:0*/ __PVT__Z61_temp;
        IData/*22:0*/ __PVT__Z62_temp;
        IData/*22:0*/ __PVT__Z63_temp;
        IData/*22:0*/ __PVT__Z64_temp;
        IData/*22:0*/ __PVT__Z65_temp;
        IData/*22:0*/ __PVT__Z66_temp;
        IData/*22:0*/ __PVT__Z67_temp;
        IData/*22:0*/ __PVT__Z68_temp;
        IData/*22:0*/ __PVT__Z71_temp;
        IData/*22:0*/ __PVT__Z72_temp;
        IData/*22:0*/ __PVT__Z73_temp;
        IData/*22:0*/ __PVT__Z74_temp;
        IData/*22:0*/ __PVT__Z75_temp;
        IData/*22:0*/ __PVT__Z76_temp;
        IData/*22:0*/ __PVT__Z77_temp;
        IData/*22:0*/ __PVT__Z78_temp;
        IData/*22:0*/ __PVT__Z81_temp;
    };
    struct {
        IData/*22:0*/ __PVT__Z82_temp;
        IData/*22:0*/ __PVT__Z83_temp;
        IData/*22:0*/ __PVT__Z84_temp;
        IData/*22:0*/ __PVT__Z85_temp;
        IData/*22:0*/ __PVT__Z86_temp;
        IData/*22:0*/ __PVT__Z87_temp;
        IData/*22:0*/ __PVT__Z88_temp;
        IData/*22:0*/ __PVT__Z11_temp_1;
        IData/*22:0*/ __PVT__Z12_temp_1;
        IData/*22:0*/ __PVT__Z13_temp_1;
        IData/*22:0*/ __PVT__Z14_temp_1;
        IData/*22:0*/ __PVT__Z15_temp_1;
        IData/*22:0*/ __PVT__Z16_temp_1;
        IData/*22:0*/ __PVT__Z17_temp_1;
        IData/*22:0*/ __PVT__Z18_temp_1;
        IData/*22:0*/ __PVT__Z21_temp_1;
        IData/*22:0*/ __PVT__Z22_temp_1;
        IData/*22:0*/ __PVT__Z23_temp_1;
        IData/*22:0*/ __PVT__Z24_temp_1;
        IData/*22:0*/ __PVT__Z25_temp_1;
        IData/*22:0*/ __PVT__Z26_temp_1;
        IData/*22:0*/ __PVT__Z27_temp_1;
        IData/*22:0*/ __PVT__Z28_temp_1;
        IData/*22:0*/ __PVT__Z31_temp_1;
        IData/*22:0*/ __PVT__Z32_temp_1;
        IData/*22:0*/ __PVT__Z33_temp_1;
        IData/*22:0*/ __PVT__Z34_temp_1;
        IData/*22:0*/ __PVT__Z35_temp_1;
        IData/*22:0*/ __PVT__Z36_temp_1;
        IData/*22:0*/ __PVT__Z37_temp_1;
        IData/*22:0*/ __PVT__Z38_temp_1;
        IData/*22:0*/ __PVT__Z41_temp_1;
        IData/*22:0*/ __PVT__Z42_temp_1;
        IData/*22:0*/ __PVT__Z43_temp_1;
        IData/*22:0*/ __PVT__Z44_temp_1;
        IData/*22:0*/ __PVT__Z45_temp_1;
        IData/*22:0*/ __PVT__Z46_temp_1;
        IData/*22:0*/ __PVT__Z47_temp_1;
        IData/*22:0*/ __PVT__Z48_temp_1;
        IData/*22:0*/ __PVT__Z51_temp_1;
        IData/*22:0*/ __PVT__Z52_temp_1;
        IData/*22:0*/ __PVT__Z53_temp_1;
        IData/*22:0*/ __PVT__Z54_temp_1;
        IData/*22:0*/ __PVT__Z55_temp_1;
        IData/*22:0*/ __PVT__Z56_temp_1;
        IData/*22:0*/ __PVT__Z57_temp_1;
        IData/*22:0*/ __PVT__Z58_temp_1;
        IData/*22:0*/ __PVT__Z61_temp_1;
        IData/*22:0*/ __PVT__Z62_temp_1;
        IData/*22:0*/ __PVT__Z63_temp_1;
        IData/*22:0*/ __PVT__Z64_temp_1;
        IData/*22:0*/ __PVT__Z65_temp_1;
        IData/*22:0*/ __PVT__Z66_temp_1;
        IData/*22:0*/ __PVT__Z67_temp_1;
        IData/*22:0*/ __PVT__Z68_temp_1;
        IData/*22:0*/ __PVT__Z71_temp_1;
        IData/*22:0*/ __PVT__Z72_temp_1;
        IData/*22:0*/ __PVT__Z73_temp_1;
        IData/*22:0*/ __PVT__Z74_temp_1;
        IData/*22:0*/ __PVT__Z75_temp_1;
        IData/*22:0*/ __PVT__Z76_temp_1;
        IData/*22:0*/ __PVT__Z77_temp_1;
        IData/*22:0*/ __PVT__Z78_temp_1;
        IData/*22:0*/ __PVT__Z81_temp_1;
    };
    struct {
        IData/*22:0*/ __PVT__Z82_temp_1;
        IData/*22:0*/ __PVT__Z83_temp_1;
        IData/*22:0*/ __PVT__Z84_temp_1;
        IData/*22:0*/ __PVT__Z85_temp_1;
        IData/*22:0*/ __PVT__Z86_temp_1;
        IData/*22:0*/ __PVT__Z87_temp_1;
        IData/*22:0*/ __PVT__Z88_temp_1;
        IData/*31:0*/ __PVT__Z11_int;
        IData/*31:0*/ __PVT__Z12_int;
        IData/*31:0*/ __PVT__Z13_int;
        IData/*31:0*/ __PVT__Z14_int;
        IData/*31:0*/ __PVT__Z15_int;
        IData/*31:0*/ __PVT__Z16_int;
        IData/*31:0*/ __PVT__Z17_int;
        IData/*31:0*/ __PVT__Z18_int;
        IData/*31:0*/ __PVT__Z21_int;
        IData/*31:0*/ __PVT__Z22_int;
        IData/*31:0*/ __PVT__Z23_int;
        IData/*31:0*/ __PVT__Z24_int;
        IData/*31:0*/ __PVT__Z25_int;
        IData/*31:0*/ __PVT__Z26_int;
        IData/*31:0*/ __PVT__Z27_int;
        IData/*31:0*/ __PVT__Z28_int;
        IData/*31:0*/ __PVT__Z31_int;
        IData/*31:0*/ __PVT__Z32_int;
        IData/*31:0*/ __PVT__Z33_int;
        IData/*31:0*/ __PVT__Z34_int;
        IData/*31:0*/ __PVT__Z35_int;
        IData/*31:0*/ __PVT__Z36_int;
        IData/*31:0*/ __PVT__Z37_int;
        IData/*31:0*/ __PVT__Z38_int;
        IData/*31:0*/ __PVT__Z41_int;
        IData/*31:0*/ __PVT__Z42_int;
        IData/*31:0*/ __PVT__Z43_int;
        IData/*31:0*/ __PVT__Z44_int;
        IData/*31:0*/ __PVT__Z45_int;
        IData/*31:0*/ __PVT__Z46_int;
        IData/*31:0*/ __PVT__Z47_int;
        IData/*31:0*/ __PVT__Z48_int;
        IData/*31:0*/ __PVT__Z51_int;
        IData/*31:0*/ __PVT__Z52_int;
        IData/*31:0*/ __PVT__Z53_int;
        IData/*31:0*/ __PVT__Z54_int;
        IData/*31:0*/ __PVT__Z55_int;
        IData/*31:0*/ __PVT__Z56_int;
        IData/*31:0*/ __PVT__Z57_int;
        IData/*31:0*/ __PVT__Z58_int;
        IData/*31:0*/ __PVT__Z61_int;
        IData/*31:0*/ __PVT__Z62_int;
        IData/*31:0*/ __PVT__Z63_int;
        IData/*31:0*/ __PVT__Z64_int;
        IData/*31:0*/ __PVT__Z65_int;
        IData/*31:0*/ __PVT__Z66_int;
        IData/*31:0*/ __PVT__Z67_int;
        IData/*31:0*/ __PVT__Z68_int;
        IData/*31:0*/ __PVT__Z71_int;
        IData/*31:0*/ __PVT__Z72_int;
        IData/*31:0*/ __PVT__Z73_int;
        IData/*31:0*/ __PVT__Z74_int;
        IData/*31:0*/ __PVT__Z75_int;
        IData/*31:0*/ __PVT__Z76_int;
        IData/*31:0*/ __PVT__Z77_int;
        IData/*31:0*/ __PVT__Z78_int;
        IData/*31:0*/ __PVT__Z81_int;
    };
    struct {
        IData/*31:0*/ __PVT__Z82_int;
        IData/*31:0*/ __PVT__Z83_int;
        IData/*31:0*/ __PVT__Z84_int;
        IData/*31:0*/ __PVT__Z85_int;
        IData/*31:0*/ __PVT__Z86_int;
        IData/*31:0*/ __PVT__Z87_int;
        IData/*31:0*/ __PVT__Z88_int;
    };

    // INTERNAL VARIABLES
    jpeg_top_trunc1_9_DRUM_8__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub_quantizer(jpeg_top_trunc1_9_DRUM_8__Syms* symsp, const char* name);
    ~sub_quantizer();
    VL_UNCOPYABLE(sub_quantizer);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
