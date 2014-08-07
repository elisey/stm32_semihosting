#ifndef MICRORL_FUNC_H_
#define MICRORL_FUNC_H_

#include "microrl.h"
#include "semihosting.h"

#define microrlNUM_OF_FUNC	10

#define microrl_getChar			SH_GetChar
#define microrl_sendString		SH_SendString


typedef struct {
	const char * name;
	int (*func)(int, const char* const*);
} exFunc_t;

void microrl_run(void *pvParameters);
void microrl_registerExecuteFunc(exFunc_t *func);

#endif
