//
// Created by 21481 on 2025/3/17.
//
#include "main.h"
#include "cmsis_os.h"
#include "can.h"
#include "dma.h"
#include "usart.h"
#include "gpio.h"

#include "board_LED.h"
#include "uart_printf.h"
#include "uart_sent.h"
#include "bsp_can.h"
#include "CAN_receive.h"
#include "can_sent.h"
#include "dm_motor.h"

void can_sent()
{
    while (1)
    {
        DM4310_01.give_tor = 0.5f ;
        Dm_Can_Send(DM4310_01);
        CAN1_cmd_chassis(0,0,0,0);
        osDelay(1);
    }

}




