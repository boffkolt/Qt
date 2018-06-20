#include "func.h"

void Vpulsedemo_top_custom::simulate()
{
    uut->CLOCK = 0;
    uut->x = 0;
    uut->eval();
    while (main_time<=100000)
    {

        if (main_time%10==0)
        {
            uut->CLOCK = uut->CLOCK ? 0 : 1;       // Toggle clock
            uut->eval();            // Evaluate model
            clkcnt++;
        }
      //  uut->CLOCK= foo(20,main_time, clkcnt);

        if (tfp != NULL)
        {
            tfp->dump (main_time);
        }

        testBenchCallBack();
        printDebugInfo();

//    if (main_time==1000)
//        Verilated::gotFinish(true);

        uut->eval();
        main_time++;            // Time passes...
    }

    uut->final();               // Done simulating
}

void Vpulsedemo_top_custom::testBenchCallBack()
{
    setupPARAM(300,1,&uut->x);
    setupPARAM(350,0,&uut->x);
    //setupPARAM(330,1,&uut->x1);
    //setupPARAM(400,0,&uut->x1);
    //setupPARAM(450,1,&uut->x1);
    setupPARAM(450,1,&uut->x);
}

void Vpulsedemo_top_custom::printDebugInfo()
{
    printf("time =\t%d\n",(int)main_time);
    printf("clock =\t%d\n",(int)clkcnt/2);
   // printf("y =\t%d\n",uut->y1);
   // printf("y1 =\t%d\n",uut->y2);
}

void Vpulsedemo_top_custom::setupPARAM(vlsint64_t time, int value, CData *param)
{
    if (main_time==time)
    {
        *param = value;
    }
}
