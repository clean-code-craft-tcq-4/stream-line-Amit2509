#define BMS_SENDER_BUFFER_SIZE  50

#define TEMP_MIN        0
#define TEMP_MAX        45
#define SOC_MIN         20
#define SOC_MAX         80

#define E_OK   0

typedef struct{
  int Temp[BMS_SENDER_BUFFER_SIZE];
  int SoC[BMS_SENDER_BUFFER_SIZE];
}BMS_ParamT;

extern BMS_ParamT BMS_Param;
int BMS_Sender_GenerateData();
int BMS_Sender_SendData();
