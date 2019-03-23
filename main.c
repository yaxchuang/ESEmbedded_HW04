#include "blink.h"
#include "reg.h"
#include <stdint.h>

int main(void)
{
	button_init();
	uint32_t a;
	
	while(1){
		a = READ_BIT(GPIO_BASE(GPIO_PORTA) + GPIOx_IDR_OFFSET, IDRy_BIT(0));
		if(a != 0)
			blink(LED_BLUE);
	}
}
