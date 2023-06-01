// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_copyB_9_DRUM_8.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_copyB_9_DRUM_8__Syms.h"
#include "sub_DRUMs__K8.h"

void sub_DRUMs__K8___ctor_var_reset(sub_DRUMs__K8* vlSelf);

sub_DRUMs__K8::sub_DRUMs__K8(jpeg_top_copyB_9_DRUM_8__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    sub_DRUMs__K8___ctor_var_reset(this);
}

void sub_DRUMs__K8::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

sub_DRUMs__K8::~sub_DRUMs__K8() {
}
