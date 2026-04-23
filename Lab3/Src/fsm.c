/*
 * fsm.c
 *
 *  Created on: 13 Oct 2025
 *      Author: HP
 */
#include "fsm.h"

void fsm_run()
{
	switch(state)
	{
	case INIT:
		if(yellow_time + green_time > red_time){

			update_buffer_when_error();
			turn_all_led_on();
			sevenSegAuto();


			if(is_mode_select_button_pressed()){
				state = RED_ADJUST;
				update_buffer_manual(2, temp_red_time);
				setTimer5(250);

				is_set_button_pressed();
				is_time_adjust_button_pressed();
			}
			break;
		}

		setTimer1(green_time);
		setTimer2(red_time);

		set_road1_buffer(green_time);
		set_road2_buffer(red_time);

		setTimer3(SCANNING_TIME);
		setTimer4(1000);

		state = S1;
		break;
	case S1:
		green1_on();
		red2_on();
		sevenSegAuto();
		updateBufferAuto();


		if(timer1_flag == 1){
			setTimer1(yellow_time);
			set_road1_buffer(yellow_time);
			state = S2;
		}


		if(is_mode_select_button_pressed()){
			state = RED_ADJUST;
			update_buffer_manual(2, temp_red_time);
			setTimer5(250);

			is_time_adjust_button_pressed();
			is_set_button_pressed();
		}
		break;
	case S2:
		yellow1_on();
		red2_on();
		sevenSegAuto();
		updateBufferAuto();


		if(timer1_flag == 1){
			setTimer1(red_time);
			set_road1_buffer(red_time);
			state = S3;
		}


		if(is_mode_select_button_pressed()){
			state = RED_ADJUST;
			update_buffer_manual(2, temp_red_time);
			setTimer5(250);

			is_time_adjust_button_pressed();
			is_set_button_pressed();
		}
		break;
	case S3:
		red1_on();
		red2_on();
		sevenSegAuto();
		updateBufferAuto();


		if(timer1_flag == 1){
			setTimer1(green_time);
			set_road1_buffer(green_time);
			state = S1;
		}

		if(timer2_flag == 1){
			setTimer2(green_time);
			set_road2_buffer(green_time);
			state = S4;
		}


		if(is_mode_select_button_pressed()){
			state = RED_ADJUST;
			update_buffer_manual(2, temp_red_time);
			setTimer5(250);

			is_time_adjust_button_pressed();
			is_set_button_pressed();
		}
		break;
	case S4:
		red1_on();
		green2_on();
		sevenSegAuto();
		updateBufferAuto();


		if(timer2_flag == 1){
			setTimer2(yellow_time);
			set_road2_buffer(yellow_time);
			state = S5;
		}


		if(is_mode_select_button_pressed()){
			state = RED_ADJUST;
			update_buffer_manual(2, temp_red_time);
			setTimer5(250);

			is_time_adjust_button_pressed();
			is_set_button_pressed();
		}
		break;
	case S5:
		red1_on();
		yellow2_on();
		sevenSegAuto();
		updateBufferAuto();


		if(timer2_flag == 1){
			setTimer2(red_time);
			set_road2_buffer(red_time);
			state = S3;
		}


		if(is_mode_select_button_pressed()){
			state = RED_ADJUST;
			update_buffer_manual(2, temp_red_time);
			setTimer5(250);

			is_time_adjust_button_pressed();
			is_set_button_pressed();
		}
		break;
	case YELLOW_ADJUST:
		yellow_blink();
		sevenSegAuto();


		if(is_time_adjust_button_pressed() || is_time_adjust_button_press1s()){
			temp_yellow_time = temp_yellow_time% 99000 + 1000;
			update_buffer_manual(3, temp_yellow_time);
		}


		if(is_set_button_pressed()){
			yellow_time = temp_yellow_time;
		}


		if(is_mode_select_button_pressed()){
			state = GREEN_ADJUST;
			update_buffer_manual(4, temp_green_time);
			setTimer5(250);

			is_time_adjust_button_pressed();
			is_set_button_pressed();
		}
		break;
	case GREEN_ADJUST:
		green_blink();
		sevenSegAuto();

		if(is_time_adjust_button_pressed() || is_time_adjust_button_press1s()){
			temp_green_time = temp_green_time% 99000 + 1000;
			update_buffer_manual(4, temp_green_time);
		}


		if(is_set_button_pressed()){
			green_time = temp_green_time;
		}


		if(is_mode_select_button_pressed()){
			state = INIT;

			is_time_adjust_button_pressed();
			is_set_button_pressed();
		}
		break;
	case RED_ADJUST:
		red_blink();
		sevenSegAuto();

		if(is_time_adjust_button_pressed() || is_time_adjust_button_press1s()){
			temp_red_time = temp_red_time% 99000 + 1000;
			update_buffer_manual(2, temp_red_time);
		}

		if(is_set_button_pressed()){
			red_time = temp_red_time;
		}

		if(is_mode_select_button_pressed()){
			state = YELLOW_ADJUST;
			update_buffer_manual(3, temp_yellow_time);
			setTimer5(250);

			is_time_adjust_button_pressed();
			is_set_button_pressed();
		}
		break;
	default:
		break;
	}
}
