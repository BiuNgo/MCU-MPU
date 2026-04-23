/*
 * fsm.c
 *
 *  Created on: Nov 3, 2025
 *      Author: HP
 */

#include "main.h"
#include "software_timer.h"
#include "fsm.h"
#include "uart.h"
#include "stdio.h"
#include "string.h"

int val;
enum status state = INIT;
uint8_t uart_flag = 0;
char str[100];

void command_parser_fsm(){
	switch(state){
			case INIT:
	            if (temp == '!') state = START;
	            break;
	        case START:
	            if (temp == 'R') state = R;
	            else if (temp == 'O') state = O;
	            else state = INIT;
	            break;
	        case R:
	            if (temp == 'S') state = S;
	            else state = INIT;
	            break;

	        case S:
	            if (temp == 'T') state = T;
	            else state = INIT;
	            break;

	        case T:
	            if (temp == '#') {
	                state = INIT;
	                uart_flag = 1;
	                setTimer1(3000);

	                val = HAL_ADC_GetValue(&hadc1);
	                sprintf(str, "!ADC=%d#\r\n",val);
	                HAL_UART_Transmit(&huart2, (uint8_t*)str, strlen(str), 1000);
	            } else {
	                state = INIT;
	            }
	            break;
	        case O:
	            if (temp == 'K') state = K;
	            else state = INIT;
	            break;

	        case K:
	            if (temp == '#') {
	                state = INIT;
	                uart_flag = 0;
	                reset();
	            } else {
	                state = INIT;
	            }
	            break;
	    }
}

void uart_communication_fsm (){
	if (uart_flag == 1 && timer1_flag == 1) {
	        val = HAL_ADC_GetValue(&hadc1);
	        sprintf(str, "!ADC=%d#\r\n", val);
	        HAL_UART_Transmit(&huart2, (uint8_t*)str, strlen(str), 1000);
	        HAL_GPIO_TogglePin(RED_LED_GPIO_Port, RED_LED_Pin);
	        setTimer1(3000);
	    }
}
