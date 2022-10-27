#include <stdio.h>
#include "BMS_Sender.h"
#include "BMS_Receiver.h"


int BMS_Receiver_ReceiveData()
{
  for (int i = 0; i < BMS_RECEIVER_BUFFER_SIZE; i++)
  {
    BMS_Param.Temp[i] = rand()%(TEMP_MAX - TEMP_MIN) + TEMP_MIN;
    BMS_Param.SoC[i] = rand()%(SOC_MAX - SOC_MIN) + SOC_MIN;
  }
}
