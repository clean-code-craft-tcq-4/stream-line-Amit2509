#define BMS_SENDER_BUFFER_SIZE  50

typedef struct{
  int Temp[BMS_SENDER_BUFFER_SIZE];
  int SoC[BMS_SENDER_BUFFER_SIZE];
}BMS_ParamT;

extern BMS_ParamT BMS_Param;
void BMS_Sender_GenerateData();
void BMS_Sender_SendData();
