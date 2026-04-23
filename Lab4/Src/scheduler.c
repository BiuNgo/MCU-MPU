/*
 * scheduler.c
 *
 *  Created on: Oct 27, 2025
 *      Author: HP
 */

#include "main.h"
#include "software_timer.h"
#include "scheduler.h"


sTasks SCH_tasks_G[SCH_MAX_TASKS];
uint8_t current_index_task = 0;


void SCH_Add_Task ( void (*pFunction)() , uint32_t DELAY, uint32_t PERIOD){
	if(current_index_task < SCH_MAX_TASKS){
		SCH_tasks_G[current_index_task].pTask = pFunction;
		SCH_tasks_G[current_index_task].Delay = DELAY/TIMER_CYCLE;
		SCH_tasks_G[current_index_task].Period =  PERIOD/TIMER_CYCLE;
		SCH_tasks_G[current_index_task].RunMe = 0;

		SCH_tasks_G[current_index_task].TaskID = current_index_task;

		current_index_task++;
	}
}

void SCH_Update(void){
	int i = 0;
	while( i < current_index_task){
		if(SCH_tasks_G[i].pTask == 0x0000) {
			i++;
			continue;
		}
		if (SCH_tasks_G[i].Delay > 0){
			SCH_tasks_G[i].Delay --;
		}else{
			SCH_tasks_G[i].RunMe += 1;
			SCH_tasks_G[i].Delay = SCH_tasks_G[i].Period;
		}
		i++;
	}
}

void SCH_Dispatch_Tasks(void){
	int i = 0;
	while ( i < current_index_task){
		if(SCH_tasks_G[i].pTask != 0 && SCH_tasks_G[i].RunMe > 0){
			SCH_tasks_G[i].RunMe--;
			SCH_tasks_G[i].pTask();
			if(SCH_tasks_G[i].Period == 0) SCH_Delete_Task(i);
		}
		i++;
	}

}


void SCH_Delete_Task(uint32_t index){
    if (SCH_tasks_G[index].pTask == 0) {
    	return;
    }
    SCH_tasks_G[index].pTask = 0x0000;
    SCH_tasks_G[index].Delay = 0;
    SCH_tasks_G[index].Period = 0;
    SCH_tasks_G[index].RunMe = 0;
    return;
}

UART_HandleTypeDef huart2;

