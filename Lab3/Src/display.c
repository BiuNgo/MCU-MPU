/*
 * led_display.c
 *
 *  Created on: Oct 13, 2025
 *      Author: HP
 */
#include <display.h>

void green1_on()
{
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_SET);
}


void red1_on()
{
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_RESET);
}

void yellow1_on()
{
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_SET);
}


void green2_on()
{
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, GPIO_PIN_SET);
}


void red2_on()
{
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, GPIO_PIN_RESET);
}


void yellow2_on()
{
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, GPIO_PIN_SET);
}

void display7SEG(int num) {
	switch (num) {
	 	       case 0:
	 	           HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
	 	           break;
	 	       case 1:
	 	           HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
	 	           break;
	 	       case 2:
	 	           HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	 	           break;
	 	       case 3:
	 	           HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	 	           break;
	 	       case 4:
	 	           HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	 	           break;
	 	       case 5:
	 	           HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	 	           break;
	 	       case 6:
	 	           HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	 	           break;
	 	       case 7:
	 	           HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
	 	           break;
	 	       case 8:
	 	           HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	 	           break;
	 	       case 9:
	 	           HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
	 	           HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	 	           break;
	 	       default:
	 	           HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
	 	           HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
	 	           break;
	 	       }
}


void set_road1_buffer(uint32_t time)
{
	uint32_t real_time = time/1000;
	road1_buffer[0] = real_time/10;
	road1_buffer[1] = real_time%10;
}

void set_road2_buffer(uint32_t time)
{
	uint32_t real_time = time/1000;
	road2_buffer[0] = real_time/10;
	road2_buffer[1] = real_time%10;
}

void sevenSegAuto()
{

	if(timer3_flag == 1){
		led_scanning = (led_scanning + 1) % 4;
		setTimer3(SCANNING_TIME);
	}

	switch(led_scanning)
	{
	case 0:
		display7SEG(road1_buffer[0]);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
		break;
	case 1:
		display7SEG(road1_buffer[1]);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
		break;
	case 2:
		display7SEG(road2_buffer[0]);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
		break;
	case 3:
		display7SEG(road2_buffer[1]);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
		break;
	default:
		break;
	}
}


void updateBufferAuto()
{
	if(timer4_flag == 1){
		setTimer4(1000);

		if(road1_buffer[1] == 0){
			road1_buffer[1] = 9;
			road1_buffer[0]--;
		}
		else road1_buffer[1]--;


		if(road2_buffer[1] == 0){
			road2_buffer[1] = 9;
			road2_buffer[0]--;
		}
		else road2_buffer[1]--;
	}
}


void update_buffer_when_error()
{
	road1_buffer[0] = 8;
	road1_buffer[1] = 8;
	road2_buffer[0] = 8;
	road2_buffer[1] = 8;
}


void red_blink()
{
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, GPIO_PIN_SET);
	if(timer5_flag == 1){
		HAL_GPIO_TogglePin(RED1_GPIO_Port, RED1_Pin);
		HAL_GPIO_TogglePin(RED2_GPIO_Port, RED2_Pin);
		setTimer5(250);
	}
}

void green_blink()
{
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, GPIO_PIN_SET);
	if(timer5_flag == 1){
		HAL_GPIO_TogglePin(GREEN1_GPIO_Port, GREEN1_Pin);
		HAL_GPIO_TogglePin(GREEN2_GPIO_Port, GREEN2_Pin);
		setTimer5(250);
	}
}

void yellow_blink()
{
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, GPIO_PIN_SET);
	if(timer5_flag == 1){
		HAL_GPIO_TogglePin(YELLOW1_GPIO_Port, YELLOW1_Pin);
		HAL_GPIO_TogglePin(YELLOW2_GPIO_Port, YELLOW2_Pin);
		setTimer5(250);
	}
}


void update_buffer_manual(uint8_t mode, uint32_t time)
{
	uint32_t real_time = time/1000;

	road1_buffer[0] = 0;
	road1_buffer[1] = mode;

	road2_buffer[0] = real_time/10;
	road2_buffer[1] = real_time%10;
}

void turn_all_led_on()
{
	HAL_GPIO_WritePin(GPIOB, RED1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, GREEN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, YELLOW1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, RED2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, GREEN2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, YELLOW2_Pin, GPIO_PIN_RESET);
}
