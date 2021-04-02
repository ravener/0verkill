#ifndef __TIME_H
#define __TIME_H

#include "cfg.h"

unsigned long_long get_time(void);          /* gets current time in microseconds */
void sleep_until(unsigned long_long time);  /* waits until time passes */
void my_sleep(unsigned long_long time);     /* waits time microseconds */

#endif
