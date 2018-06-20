#include <verilated.h>          // Defines common routines
#include "Vpulsedemo_top.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include "verilated_vcd_c.h"

#ifndef _TEST_H1
#define _TEST_H1

class Vpulsedemo_top_custom {
public:
    Vpulsedemo_top_custom(Vpulsedemo_top *topClass = 0, VerilatedVcdC *_tfp = 0){
        uut = topClass;
        tfp = _tfp;
        main_time = 0;
        clkcnt = 0;
    }

    void simulate();
private:
    void setupPARAM(vlsint64_t time, int value, CData *param);
    void testBenchCallBack();
    void printDebugInfo();

    vluint64_t main_time;
    vluint64_t clkcnt;

    Vpulsedemo_top *uut;
    VerilatedVcdC *tfp;
};
#endif
