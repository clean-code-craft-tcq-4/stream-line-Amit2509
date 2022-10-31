#include <stdio.h>
#include <assert.h>
#include "BMS_Receiver.h"


void testFindMinAndMax()
{
  /*Test Case: 1*/
  float data = 3;
  float Min = 5;
  float Max = 7;
  FindMinAndMax(data, &Min, &Max);
  assert(Min == 3);
  assert(Max == 7);
  
  /*Test Case: 2*/
  data = 6;
  Min = 5;
  Max = 7;
  FindMinAndMax(data, &Min, &Max);
  assert(Min == 5);
  assert(Max == 7); 
  
  /*Test Case: 3*/
  data = 8;
  Min = 5;
  Max = 7;
  FindMinAndMax(data, &Min, &Max);
  assert(Min == 5);
  assert(Max == 8); 
}




int main()
{
  
  ReadConsolePrintMinMaxSMA(); 
  
  
  testFindSMA();
  
 // testPrintMinMaxSMA();
  
 // ReadConsolePrintMinMaxSMA();
  
  return 0;
  
}
