/*
 * software_timer.h
 *
 *  Created on: Nov 3, 2025
 *      Author: HP
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern UART_HandleTypeDef huart2;
extern TIM_HandleTypeDef htim2;
extern int timer1_flag;
extern int timer2_flag;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
void timerRun();
void setTimer1(uint32_t duration);
void setTimer2(uint32_t duration);
void reset();

#endif /* INC_SOFTWARE_TIMER_H_ */
