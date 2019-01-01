#include "S32K144.h"
#include "gpio.h"
#include "clock.h"
#include "wdog.h"
#include "nvic.h"
#include "pit.h"
#include "ftm.h"
#include "adc.h"
#include "pdb.h"
#include "can.h"
#include "uart.h"
#include "flash.h"

	int main(void)
	{
		/*sys init*/
		WDOG_Disable();
		CLK_InitRunMode(); //run mode clock initial

		/*init led*/
		GPIO_Init(PTD, 0, OUT_PUT, 1); //blue

		while(1)
		{
			DelayMs(10);
		}
	}


