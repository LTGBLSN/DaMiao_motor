//
// Created by 21481 on 2025/12/15.
//

#include "cmsis_os.h"
#include "dm_motor.h"
#include "main.h"

void DM_MOTOR_TASK()
{
    osDelay(2000);
    dm_motor_mode_set(CMD_MOTOR_MODE, DM4310_01);

    while (1)
    {

//        DM4310_01.give_tor = (float )rc_ch1*0.002f ;
//        DM4310_01.give_tor = 0.5f ;



        osDelay(1);
    }
}