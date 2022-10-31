#include <stdio.h>
#include "BMS_Receiver.h"

float Min_Temp = 0;
float Max_Temp = 0;
float SMA_Temp = 0;
float Temp_Array[NUMBER_OF_SAMPLES_FOR_SMA] = {0};
float Min_SOC = 0;
float Max_SOC = 0;
float SMA_SOC = 0;
float SOC_Array[NUMBER_OF_SAMPLES_FOR_SMA] = {0};


int ReadConsole(float* temperature, float* SOC)
{
  char ReadDummy_Ch;
  return scanf("%f%c%f", temperature, &ReadDummy_Ch, SOC);
}

void ReadParameters(float* SOC,float* temperature)
{
  ReadConsole(temperature, SOC);
  
  /*Shifting the elements in the array for Moving Average calculation*/
   for(int prmsloop = 0; prmsloop<NUMBER_OF_SAMPLES_FOR_SMA-1; prmsloop++)
  {
    Temp_Array[prmsloop] = Temp_Array[prmsloop+1];
    SOC_Array[prmsloop] = SOC_Array[prmsloop+1];
  }
  
  /*Inserting the latest data into the last element of array*/
  Temp_Array[NUMBER_OF_SAMPLES_FOR_SMA-1] = *temperature;
  SOC_Array[NUMBER_OF_SAMPLES_FOR_SMA-1] = *SOC;
 
  return;
}

void FindMinAndMax(float data, float* Min, float* Max)
{
   if (data < *Min)
   {
     *Min = data;
   }
   else if (data > *Max)
   {
     *Max = data;
   }
   else
   {
     /*Do nothing*/
   }
}

void FindSMA ()
{
  float Temp_Sum = 0;
  float SOC_Sum = 0;
  
    for (int SMALoop = 0; SMALoop < NUMBER_OF_SAMPLES_FOR_SMA; SMALoop++)
    {
      Temp_Sum +=Temp_Array[SMALoop];
      SOC_Sum +=SOC_Array[SMALoop];
    }
  
  SMA_Temp = Temp_Sum/NUMBER_OF_SAMPLES_FOR_SMA;
  SMA_SOC = SOC_Sum/NUMBER_OF_SAMPLES_FOR_SMA;
 
}

int PrintMinMaxSMA()
{
    printf("Temperature: Min = %f, Max = %f, SMA = %f\n", Min_Temp, Max_Temp, SMA_Temp);
    printf("SOC: Min = %f, Max = %f, SMA = %f\n", Min_SOC, Max_SOC, SMA_SOC);
  
  return 1;
}

void ReadConsolePrintMinMaxSMA()
{
  float temperature, SOC, ChargeRate;
  char ReadTitle[50];
  fgets(ReadTitle,50,stdin);

  for (int NoofParms=0; NoofParms<50; NoofParms++)
  {
    ReadParameters(&SOC,&temperature );
    FindMinAndMax(temperature, &Min_Temp, &Max_Temp);
    FindMinAndMax(SOC, &Min_SOC, &Max_SOC);
    FindSMA();
    PrintMinMaxSMA();
  }
  
}
