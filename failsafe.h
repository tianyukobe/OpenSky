#ifndef __FAILSAFE_H__
#define __FAILSAFE_H__
#include "main.h"
#include "ppm.h"
#include "sbus.h"
#include <stdint.h>

void failsafe_init(void);
void failsafe_enter(void);
void failsafe_exit(void);
void failsafe_tick(void);

extern EXTERNAL_MEMORY volatile uint8_t failsafe_active;
extern EXTERNAL_MEMORY volatile uint16_t failsafe_tick_counter;




#endif
