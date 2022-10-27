#include <stdio.h>
#include "BMS_Receiver.h"

void ReadParameters(float* temperature, float* SOC)
{
  char dummy;
  scanf("%f%c%f", temperature, &dummy, SOC);
}

void ReadFromConsoleInput(float* temperature, float* SOC)
{
  ReadParameters(temperature, SOC);
}

void ReadConsolePrintMinMaxSMA()
{
  float temperature, SOC, ChargeRate;
  char title[30];
  fgets(title,30,stdin);
  for (int i=0; i<50; i++)
  {
    ReadFromConsoleInput(&temperature, &SOC);
  }
  
}
