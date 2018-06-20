// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vpulsedemo_top_H_
#define _Vpulsedemo_top_H_

#include "verilated.h"

class Vpulsedemo_top__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vpulsedemo_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(CLOCK,0,0);
    VL_OUT8(PULSE2,0,0);
    VL_IN8(x,2,0);
    VL_IN8(x1,2,0);
    VL_OUT8(y,0,0);
    VL_OUT8(y1,0,0);
    VL_OUT8(y2,3,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(pulsedemo_top__DOT__pulse2_int,0,0);
    VL_SIG16(pulsedemo_top__DOT__counter,10,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__CLOCK,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vpulsedemo_top__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vpulsedemo_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vpulsedemo_top(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vpulsedemo_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vpulsedemo_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vpulsedemo_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vpulsedemo_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vpulsedemo_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vpulsedemo_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vpulsedemo_top__Syms* __restrict vlSymsp);
    static void _eval_settle(Vpulsedemo_top__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(Vpulsedemo_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vpulsedemo_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vpulsedemo_top__Syms* __restrict vlSymsp);
    static void traceChgThis(Vpulsedemo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vpulsedemo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vpulsedemo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vpulsedemo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vpulsedemo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vpulsedemo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vpulsedemo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
