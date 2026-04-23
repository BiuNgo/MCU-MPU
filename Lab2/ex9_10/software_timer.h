/*
 * software_timer.h
 *
 *  Created on: Sep 29, 2025
 *      Author: HP
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
void setTimer1(int duration);
extern int timer2_flag;
void setTimer2(int duration1);
extern int timer3_flag;
void setTimer3(int duration);
extern int timer4_flag;
void setTimer4(int duration);
extern int timer5_flag;
void setTimer5(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
