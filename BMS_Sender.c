#include <stdio.h>
#include <stdlib.h>
#include "BMS_Sender.h"

BMS_ParamT BMS_Param;

int BMS_Sender_GenerateData()
{
  for (int i = 0; i < BMS_SENDER_BUFFER_SIZE; i++)
  {
    BMS_Param.Temp[i] = rand()%(TEMP_MAX - TEMP_MIN) + TEMP_MIN;
    BMS_Param.SoC[i] = rand()%(SOC_MAX - SOC_MIN) + SOC_MIN;
  }
  
  return E_OK;
}

int BMS_Sender_SendData()
{
  printf("Battery_Temperature,  Battery_SoC\n");
  for (int i = 0; i < BMS_SENDER_BUFFER_SIZE; i++)
  {
    printf("%d,  %d\n",BMS_Param.Temp[i],BMS_Param.SoC[i]);
  }
  
  return E_OK;  
}

