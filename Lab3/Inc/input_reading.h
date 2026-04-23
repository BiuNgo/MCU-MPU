/*
 * input_reading.h
 *
 *  Created on: Oct 13, 2025
 *      Author: HP
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#include <global.h>


void button_reading();

int is_mode_select_button_pressed();
int is_time_adjust_button_pressed();
int is_time_adjust_button_press1s();
int is_set_button_pressed();

#endif /* INC_INPUT_READING_H_ */
