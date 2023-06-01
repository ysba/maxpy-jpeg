// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "jpeg_top_trunc1_9_DRUM_8.h"
#include "jpeg_top_trunc1_9_DRUM_8__Syms.h"

//============================================================
// Constructors

jpeg_top_trunc1_9_DRUM_8::jpeg_top_trunc1_9_DRUM_8(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new jpeg_top_trunc1_9_DRUM_8__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , end_of_file_signal{vlSymsp->TOP.end_of_file_signal}
    , enable{vlSymsp->TOP.enable}
    , data_ready{vlSymsp->TOP.data_ready}
    , end_of_file_bitstream_count{vlSymsp->TOP.end_of_file_bitstream_count}
    , eof_data_partial_ready{vlSymsp->TOP.eof_data_partial_ready}
    , data_in{vlSymsp->TOP.data_in}
    , JPEG_bitstream{vlSymsp->TOP.JPEG_bitstream}
    , __PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8{vlSymsp->TOP.__PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8}
    , __PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9{vlSymsp->TOP.__PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9}
    , __PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5{vlSymsp->TOP.__PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5}
    , __PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6{vlSymsp->TOP.__PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6}
    , __PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1{vlSymsp->TOP.__PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1}
    , __PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2{vlSymsp->TOP.__PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

jpeg_top_trunc1_9_DRUM_8::jpeg_top_trunc1_9_DRUM_8(const char* _vcname__)
    : jpeg_top_trunc1_9_DRUM_8(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

jpeg_top_trunc1_9_DRUM_8::~jpeg_top_trunc1_9_DRUM_8() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void sub___024root___eval_debug_assertions(sub___024root* vlSelf);
#endif  // VL_DEBUG
void sub___024root___eval_static(sub___024root* vlSelf);
void sub___024root___eval_initial(sub___024root* vlSelf);
void sub___024root___eval_settle(sub___024root* vlSelf);
void sub___024root___eval(sub___024root* vlSelf);

void jpeg_top_trunc1_9_DRUM_8::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate jpeg_top_trunc1_9_DRUM_8::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    sub___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        sub___024root___eval_static(&(vlSymsp->TOP));
        sub___024root___eval_initial(&(vlSymsp->TOP));
        sub___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    sub___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
}

//============================================================
// Events and timing
bool jpeg_top_trunc1_9_DRUM_8::eventsPending() { return false; }

uint64_t jpeg_top_trunc1_9_DRUM_8::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* jpeg_top_trunc1_9_DRUM_8::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void sub___024root___eval_final(sub___024root* vlSelf);

VL_ATTR_COLD void jpeg_top_trunc1_9_DRUM_8::final() {
    sub___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* jpeg_top_trunc1_9_DRUM_8::hierName() const { return vlSymsp->name(); }
const char* jpeg_top_trunc1_9_DRUM_8::modelName() const { return "jpeg_top_trunc1_9_DRUM_8"; }
unsigned jpeg_top_trunc1_9_DRUM_8::threads() const { return 1; }
