/*
 * global.h
 *
 *  Created on: 13 Oct 2025
 *      Author: HP
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include <display.h>
#include "main.h"
#include "input_reading.h"
#include "softwaretimer.h"
#include "fsm.h"

extern uint32_t red_time;
extern uint32_t yellow_time;
extern uint32_t green_time;

extern uint32_t temp_red_time;
extern uint32_t temp_green_time;
extern uint32_t temp_yellow_time;

extern uint8_t road1_buffer[2];
extern uint8_t road2_buffer[2];

enum status{
	INIT = 0,
	S1 = 1,
	S2 = 2,
	S3 = 3,
	S4 = 4,
	S5 =5,
	RED_ADJUST = 11,
	YELLOW_ADJUST = 12,
	GREEN_ADJUST = 13
};

extern enum status state;
extern uint8_t led_scanning;
#define SCANNING_TIME 250

#endif /* INC_GLOBAL_H_ */
