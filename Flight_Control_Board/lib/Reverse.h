#ifndef _Reverse_H
#define _Reverse_H

#include <Arduino.h>
#include "../lib/PWM_IN.h"
#include "../lib/PWM_OUT.h"
#include "../lib/PWM.hpp"




typedef enum Reverse_Statustypedef {
 Reverse_OK,
 Reverse_ERROR,
} Reverse_Statustypedef;


typedef struct __Reverse_HandleTypeDef{

  int Reverse_coef;

}Reverse_HandleTypeDef;


Reverse_Statustypedef Reverse_Setup(struct __Reverse_HandleTypeDef *Reverse);
Reverse_Statustypedef Reverse_Start(struct __Reverse_HandleTypeDef *Reverse,
struct __PWM_IN_HandleTypeDef *PWM_IN , struct __PWM_OUT_HandleTypeDef *PWM_OUT);


#endif
