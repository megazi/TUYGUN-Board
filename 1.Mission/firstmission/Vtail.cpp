#include "Vtail.h"
#include  <math.h>

Vtail_StatusTypeDef Vtail_Start(struct __PWM_IN_HandleTypeDef *PWM_In){
 PWM_In->PWM_In_Elevator = PWM_Vtail_Elevator ;
 PWM_In->PWM_In_Rudder = PWM_Vtail_Rudder ;
 PWM_In->PWM_In_Reverse = PWM_Vtail_Reverse ; //AUX kanalından gelen değeri reverse olarak düşündük 
   return Vtail_OK;
}


// Burada 0.25 çarpanı Vtail_Setup fonksiyonundan istendiği zaman değiştirebilmelidir. // Bunu nsaıl yapacağımızı anlamadık.Bir değişken oluşturup ona 0.25 i mi atacağız?
Vtail_StatusTypeDef Vtail_Setup(struct __Vtail_HandleTypeDef *Vtail){
 
if (PWM_Vtail_Reverse<1500){
  fabs(PWM_Vtail_Elevator-1500)*0.25=Result_Elevator;  
  Right=1500-Result_Elevator;
  Left=1500+Result_Elevator;
  fabs(PWM_Vtail_Rudder-1500)*0.25=Result_Rudder;  
  Right=1500+Result_Rudder;
  Left=1500+Result_Rudder;
}
else if(PWM_Vtail_Reverse>1500){
  Right=1000;
  Left=2000;

}
 PWM_Out->PWM_VTail_Right=Right ;
 PWM_Out->PWM_VTail_Left=Left ;

 

    return Vtail_OK;
}





