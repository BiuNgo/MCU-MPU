/*
 * fsm.h
 *
 *  Created on: Nov 3, 2025
 *      Author: HP
 */

#ifndef INC_FSM_H_
#define INC_FSM_H_

#include "uart.h"

extern ADC_HandleTypeDef hadc1;
void command_parser_fsm();
void uart_communication_fsm();


#endif /* INC_FSM_H_ */
