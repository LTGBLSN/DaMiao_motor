//
// Created by 21481 on 2025/12/15.
//

#include "cmsis_os.h"
#include "dm_motor.h"
#include "main.h"

void DM_MOTOR_TASK()
{
    osDelay(2000);
    dm_motor_mode_set(CMD_MOTOR_MODE,DM8009P_01_RIGHT_FRONT);

    while (1)
    {

        DM8009P_01_RIGHT_FRONT.give_tor = 0.0f ;



        osDelay(1);
    }
}