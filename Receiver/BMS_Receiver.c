#include <stdio.h>
#include "BMS_Receiver.h"

void ReadParameters(float* temperature, float* SOC, float* ChargeRate)
{
  char dummy;
  scanf("%f%c%f", temperature, &dummy, SOC);
}

void ReadFromConsoleInput(float* temperature, float* SOC, float* ChargeRate)
{
  ReadParameters(temperature, SOC, ChargeRate);
}
