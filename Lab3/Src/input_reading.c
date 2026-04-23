/*
 * input_reading.c
 *
 *  Created on: Oct 14, 2022
 *      Author: HP
 */
#include "input_reading.h"
#define N0_OF_BUTTONS 				       3
#define DURATION_FOR_PRESSED	   		   100
#define BUTTON_IS_PRESSED                  GPIO_PIN_RESET
#define BUTTON_IS_RELEASED                 GPIO_PIN_SET

static GPIO_PinState buttonBuffer[N0_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer0[N0_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer1[N0_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer2[N0_OF_BUTTONS];

static uint8_t flagForButtonPress1s[N0_OF_BUTTONS] = {0};
static uint8_t flagForButtonPress[N0_OF_BUTTONS] = {0};

static uint16_t counterForButtonPress1s[N0_OF_BUTTONS];


void button_reading(){
	for(int i = 0; i < N0_OF_BUTTONS; i ++){
		debounceButtonBuffer2[i] = debounceButtonBuffer1[i];
		debounceButtonBuffer1[i] = debounceButtonBuffer0[i];

		if(i == 0){
			debounceButtonBuffer0[i] = HAL_GPIO_ReadPin(Mode_select_button_GPIO_Port, Mode_select_button_Pin);
		}
		else if(i == 1){
			debounceButtonBuffer0[i] = HAL_GPIO_ReadPin(Time_adjust_button_GPIO_Port, Time_adjust_button_Pin);
		}
		else if(i == 2){
			debounceButtonBuffer0[i] = HAL_GPIO_ReadPin(Set_button_GPIO_Port, Set_button_Pin);
		}


		if(debounceButtonBuffer0[i] == debounceButtonBuffer1[i] &&
				debounceButtonBuffer1[i] == debounceButtonBuffer2[i]){

			if(buttonBuffer[i] != debounceButtonBuffer2[i]){

				buttonBuffer[i] = debounceButtonBuffer2[i];

				if(buttonBuffer[i] == BUTTON_IS_PRESSED){

					flagForButtonPress[i] = 1;

					counterForButtonPress1s[i] = DURATION_FOR_PRESSED;
				}
			}

			else{

				counterForButtonPress1s[i]--;

				if(counterForButtonPress1s[i] == 0){
					if(buttonBuffer[i] == BUTTON_IS_PRESSED){
						flagForButtonPress1s[i] = 1;
					}
					counterForButtonPress1s[i] = DURATION_FOR_PRESSED;
				}
			}
		}
	}
}


int is_mode_select_button_pressed()
{
	if(flagForButtonPress[0] == 1){
		flagForButtonPress[0] = 0;
		return 1;
	}
	return 0;
}


int is_time_adjust_button_pressed()
{
	if(flagForButtonPress[1] == 1){
		flagForButtonPress[1] = 0;
		return 1;
	}
	return 0;
}


int is_time_adjust_button_press1s()
{
	if(flagForButtonPress1s[1] == 1){
		flagForButtonPress1s[1] = 0;
		return 1;
	}
	return 0;
}


int is_set_button_pressed()
{
	if(flagForButtonPress[2] == 1){
		flagForButtonPress[2] = 0;
		return 1;
	}
	return 0;
}

