#include "microrl_func.h"
#include <stdint.h>
int main(void)
{
	microrl_run(0);
	return 0;
}

void assert_failed(uint8_t* file, uint32_t line)
{
	while(1);
}
