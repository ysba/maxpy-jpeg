// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_JPEG_TOP_EXACT_H_
#define VERILATED_JPEG_TOP_EXACT_H_  // guard

#include "verilated.h"

class jpeg_top_exact__Syms;
class sub___024root;

// This class is the main interface to the Verilated model
class jpeg_top_exact VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    jpeg_top_exact__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_IN8(&end_of_file_signal,0,0);
    VL_IN8(&enable,0,0);
    VL_OUT8(&data_ready,0,0);
    VL_OUT8(&end_of_file_bitstream_count,4,0);
    VL_OUT8(&eof_data_partial_ready,0,0);
    VL_IN(&data_in,23,0);
    VL_OUT(&JPEG_bitstream,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    sub___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit jpeg_top_exact(VerilatedContext* contextp, const char* name = "TOP");
    explicit jpeg_top_exact(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~jpeg_top_exact();
  private:
    VL_UNCOPYABLE(jpeg_top_exact);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
