/****************************************************************************
 *  Copyright (C) 2018 RoboMaster.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of 
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 ***************************************************************************/

#ifndef __BSP_CAN
#define __BSP_CAN

#include "can.h"

#define GM6020_FEEDBACK_ID_BASE      0x205
#define GM6020_CAN_CONTROL_ID_BASE   0x1ff
#define GM6020_CAN_CONTROL_ID_EXTEND 0x2ff

#define M3508_FEEDBACK_ID_BASE      0x201
#define M3508_CAN_CONTROL_ID_BASE   0x200
#define M3508_CAN_CONTROL_ID_EXTEND 0x1ff

#define MOTOR_MAX_NUM         4

typedef struct
{
    uint16_t can_id;
    int16_t  set_voltage;
    uint16_t rotor_angle;
    int16_t  rotor_speed;
    int16_t  torque_current;
    uint8_t  temp;
}moto_info_t;

void can_user_init(CAN_HandleTypeDef* hcan);
void set_GM6020_voltage(uint8_t id_range, int16_t v1, int16_t v2, int16_t v3, int16_t v4);
void set_M3508_voltage(uint8_t id_range, int16_t v1, int16_t v2, int16_t v3, int16_t v4);
#endif
