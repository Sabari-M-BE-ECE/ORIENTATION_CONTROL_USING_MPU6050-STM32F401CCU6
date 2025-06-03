/*
 * appcallback.c
 *
 *  Created on: May 31, 2025
 *      Author: sabar
 */

#include "main.h"
extern uint32_t counter;
extern uint32_t channel_1;
extern uint32_t channel_2;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(htim);
  counter =0;
  channel_1=8000;
  channel_2=4000;

}
/**
  * @brief  PWM Pulse finished callback in non-blocking mode
  * @param  htim TIM handle
  * @retval None
  */
void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim)
{
  /* Prevent unused argument(s) compilation warning */
 // UNUSED(htim);
   if(htim->Channel== HAL_TIM_ACTIVE_CHANNEL_1 ){
	channel_1=0;
   }
   if(htim->Channel== HAL_TIM_ACTIVE_CHANNEL_2 ){
    channel_2=0;
   }

}
void HAL_TIM_ErrorCallback(TIM_HandleTypeDef *htim)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(htim);

  /* NOTE : This function should not be modified, when the callback is needed,
            the HAL_TIM_ErrorCallback could be implemented in the user file
   */
}



