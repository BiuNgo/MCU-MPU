/*
 * software_timer.h
 *
 *  Created on: Sep 28, 2025
 *      Author: HP
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
void setTimer1(int duration);
extern int timer2_flag;
void setTimer2(int duration1);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
