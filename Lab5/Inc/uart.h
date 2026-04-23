/*
 * uart.h
 *
 *  Created on: Nov 3, 2025
 *      Author: HP
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include "main.h"

extern uint8_t buffer_flag;
extern uint8_t temp;
void uart_call();

enum status{
	INIT = 0,
	START = 1,
	R = 3,
	S = 4,
	T = 5,
	O = 6,
	K = 7

};

extern uint8_t buffer[];
extern uint8_t index_buffer;

#endif /* INC_UART_H_ */
