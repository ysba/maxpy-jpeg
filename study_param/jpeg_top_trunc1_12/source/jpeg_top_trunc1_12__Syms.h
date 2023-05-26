// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_JPEG_TOP_TRUNC1_12__SYMS_H_
#define VERILATED_JPEG_TOP_TRUNC1_12__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "jpeg_top_trunc1_12.h"

// INCLUDE MODULE CLASSES
#include "sub___024root.h"

// SYMS CLASS (contains all model state)
class jpeg_top_trunc1_12__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    jpeg_top_trunc1_12* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    sub___024root                  TOP;

    // CONSTRUCTORS
    jpeg_top_trunc1_12__Syms(VerilatedContext* contextp, const char* namep, jpeg_top_trunc1_12* modelp);
    ~jpeg_top_trunc1_12__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard