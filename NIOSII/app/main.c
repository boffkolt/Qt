#include "stdio.h"
//#include "sys/alt_irq.h"
#include "system.h"
#include "alt_sys_wrappers.h"
#include "alt_types.h"
//#include "FreeRTOS.h"
//#include "task.h"

int main()
{
    alt_u32 a = 0x80005511;
    alt_u32 swapa = 0;
    typedef struct
    {
        alt_u32 fir;
        alt_u8 sec1;
        unsigned sec_1:1;
        unsigned sec_2:1;
        unsigned sec_3:1;
        unsigned sec_4:1;
        unsigned sec_5:4;
        alt_u8 sec2;
        alt_u8 sec3;
        alt_u32 oth[2];
    }testStruct;

    typedef struct
    {
        alt_u32 fiv;
        alt_u8 six1;
        unsigned six_1:1;
        unsigned six_2:1;
        unsigned six_3:1;
        unsigned six_4:1;
        unsigned six_5:4;
        alt_u8 six2;
        alt_u8 six3;
        alt_u32 oth2[58];
    }testStruct1;



    testStruct *pmem __attribute__ ((aligned (1), packed)) = (testStruct*) ONCHIP_MEMORY2_0_BASE;
    testStruct1 *pmem1 __attribute__ ((aligned (1), packed)) = (testStruct1*) (ONCHIP_MEMORY2_0_BASE+(sizeof(testStruct)));
   // alt_u32 A[63];
    alt_u32 *pA      = (alt_u32*) ONCHIP_MEMORY2_0_BASE;
    //&A = pA;
//    pA=A;
  //  *A =(alt_u32*) ONCHIP_MEMORY2_0_BASE;
 printf("Hello from Nios II!\n");
while(1)
{
*(alt_u8*) LEDS_BASE = *(alt_u8*)SW_BASE;
//swapa = ALT_CI_SWAP_0(a);
    printf("adr = %x",(int)*(alt_u32*)(ONCHIP_MEMORY2_0_BASE+8));
    printf("adr = %x",(int)(alt_u32*)(ONCHIP_MEMORY2_0_BASE+4));
    printf("adr = %x",ONCHIP_MEMORY2_0_BASE+4);
   printf("adr = %x",(alt_u32*)pA[60]);
    printf("adr = %x",(int)(pmem->oth[2]));
    pmem->sec_1 = 1;
    pmem1->fiv=25;
    printf("a= %x\nswapa = %x",a,swapa);
    //A[3]=155;
usleep(10000);
}
return 0;
}
