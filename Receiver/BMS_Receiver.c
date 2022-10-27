#include <stdio.h>
#include "BMS_Receiver.h"

void ReadParameters(float* temperature, float* SOC)
{
  char dummy;
  scanf("%f%c%f", temperature, &dummy, SOC);
}

void ReadFromConsoleInput(float* temperature, float* SOC)
{
  ReadParameters(temperature, SOC, ChargeRate);
}
