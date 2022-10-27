#include <stdio.h>
#include <assert.h>
#include "BMS_Sender.h"

int main()
{
  int result;
  result = BMS_Sender_GenerateData();
  assert (result == E_OK);
  
  result = BMS_Sender_SendData();
  assert (result == E_OK); 
}
