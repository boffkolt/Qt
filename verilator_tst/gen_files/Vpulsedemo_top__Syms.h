// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vpulsedemo_top__Syms_H_
#define _Vpulsedemo_top__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vpulsedemo_top.h"

// SYMS CLASS
class Vpulsedemo_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vpulsedemo_top*                TOPp;
    
    // CREATORS
    Vpulsedemo_top__Syms(Vpulsedemo_top* topp, const char* namep);
    ~Vpulsedemo_top__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
