/**
 * @file logtest.h
 * @author Keten (2863861004@qq.com)
 * @brief 
 * @version 0.1
 * @date 2024-09-13
 * 
 * @copyright Copyright (c) 2024
 * 
 * @attention :
 * @note :
 * @versioninfo :
 */

#ifndef LOGTEST_H 
#define LOGTEST_H 

#ifdef __cplusplus
extern "C"{
#endif

/*----------------------------------include-----------------------------------*/
#include "bsp_log.h"
#include "aciton.h"
#include "motor.h"
#include "freertos.h"
/*-----------------------------------macro------------------------------------*/

/*----------------------------------typedef-----------------------------------*/
typedef struct 
{
    float kp;
    float ki;
    float kd;
    float target;
    float current;
    float error;
    float integral;
    float derivative;
    float output;
}pid_controller;
/*----------------------------------variable----------------------------------*/

/*-------------------------------------os-------------------------------------*/

/*----------------------------------function----------------------------------*/

/*------------------------------------test------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif	/* LOGTEST_H */
