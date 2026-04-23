/*
 * software_timer.c
 *
 *  Created on: Nov 3, 2025
 *      Author: HP
 */

#include "main.h"



const int TIMER_CYCLE = 10;

int timer1_flag = 0;
int timer1_counter = 0;

int timer2_flag = 0;
int timer2_counter = 0;

void setTimer1(uint32_t duration){
	timer1_counter = duration/TIMER_CYCLE;
	timer1_flag = 0;
}


void timerRun(){
	if(timer1_counter >0){
		timer1_counter--;
		if(timer1_counter <=0){
			timer1_flag =1;
		}
	}

}

void reset()
{
	timer1_counter = 0;
	timer1_flag = 0;
}
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	//if (htim->Instance == TIM2)
	timerRun();
}
