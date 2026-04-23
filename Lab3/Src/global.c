/*
 * global_variable.c
 *
 *  Created on: 24 Oct 2022
 *      Author: HP
 */

#include <global.h>


uint32_t red_time = 5000;
uint32_t green_time = 3000;
uint32_t yellow_time = 2000;


uint32_t temp_red_time = 1000;
uint32_t temp_green_time = 1000;
uint32_t temp_yellow_time = 1000;


uint8_t road1_buffer[2] = {0};
uint8_t road2_buffer[2] = {0};


enum status state = INIT;


uint8_t led_scanning = 0;

