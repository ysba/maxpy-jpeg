// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_JPEG_TOP__SYMS_H_
#define VERILATED_JPEG_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "jpeg_top.h"

// INCLUDE MODULE CLASSES
#include "sub___024root.h"
#include "sub_dct.h"
#include "sub_quantizer.h"

// SYMS CLASS (contains all model state)
class jpeg_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    jpeg_top* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    sub___024root                  TOP;
    sub_dct                        TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8;
    sub_quantizer                  TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9;
    sub_dct                        TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5;
    sub_quantizer                  TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6;
    sub_dct                        TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1;
    sub_quantizer                  TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2;

    // CONSTRUCTORS
    jpeg_top__Syms(VerilatedContext* contextp, const char* namep, jpeg_top* modelp);
    ~jpeg_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
