/*
 * display.h
 *
 *  Created on: Oct 13, 2025
 *      Author: HP
 */

#ifndef INC_DISPLAY_H_
#define INC_DISPLAY_H_

#include <global.h>
#include "stdint.h"

void green1_on();
void red1_on();
void yellow1_on();
void green2_on();
void yellow2_on();
void red2_on();

void display7SEG(int num);

void set_road1_buffer(uint32_t time);
void set_road2_buffer(uint32_t time);

void sevenSegAuto();
void updateBufferAuto();
void update_buffer_when_error();

void update_buffer_manual(uint8_t mode, uint32_t time);
void yellow_blink();
void green_blink();
void red_blink();
void turn_all_led_on();

#endif /* INC_DISPLAY_H_ */
