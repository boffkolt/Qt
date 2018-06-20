#include <verilated.h>          // Defines common routines
#include "Vpulsedemo_top.h"

#include "verilated_vcd_c.h"

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include "func.h"

Vpulsedemo_top *uut;                     // Instantiation of module
vluint64_t main_time = 0;       // Current simulation time

double sc_time_stamp () {       // Called by $time in Verilog
    return main_time;           // converts to double, to match
    // what SystemC does
}

int main(int argc, char** argv)
{
    // turn on trace or not?
    bool vcdTrace = true;
    VerilatedVcdC* tfp = NULL;
    int clkcnt=0;
    Verilated::commandArgs(argc, argv);   // Remember args
    uut = new Vpulsedemo_top;   // Create instance
   // uut->eval();
    if (vcdTrace)
    {
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        uut->trace(tfp, 99);
        std::string vcdname = argv[0];
        vcdname += ".vcd";
        std::cout << vcdname << std::endl;
        tfp->open(vcdname.c_str());
    }

    Vpulsedemo_top_custom sim(uut,tfp);
    sim.simulate();

    if (tfp != NULL)
    {
        tfp->close();
        delete tfp;
    }
    delete uut;

    return 0;
}
