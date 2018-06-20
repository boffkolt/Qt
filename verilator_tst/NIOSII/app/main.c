
#include <stdio.h>

#include "system.h"
#include "sys/alt_irq.h"
#include "sys/alt_sys_wrappers.h"
#include "altera_avalon_pio_regs.h"
#include "altera_avalon_jtag_uart_regs.h"
#include "func.h"
#include "func2.h"




int main(void)
{
int leds =1;




   while (1)
 {
#ifdef _TEST_H1
    printf("\nHello from NIOS from QBS-------%X   %d   %o",~foo(leds),leds,leds);
#endif
#ifdef _TEST_H2
    IOWR_ALTERA_AVALON_PIO_DATA(LEDS_BASE,foo2(leds));
   #endif
    usleep(1000000);    									   // wait for 1 sec
     if (leds ==15)
     {leds = 0;}
     else
     {leds = leds+1;}


  }
   return 0;
}
