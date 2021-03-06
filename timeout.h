#ifndef __TIMEOUT_H__
#define __TIMEOUT_H__
#include "hal_timeout.h"

void timeout_init(void);
#define timeout_set(x) hal_timeout_set(x)
#define timeout_set_100us(x) hal_timeout_set_100us(x)
#define timeout_timed_out() hal_timeout_timed_out()
#define timeout_time_remaining() hal_timeout_time_remaining()

#define timeout2_set_100us(x) hal_timeout2_set_100us(x)
#define timeout2_timed_out() hal_timeout2_timed_out()
void timeout2_delay_100us(uint16_t us);




#endif
