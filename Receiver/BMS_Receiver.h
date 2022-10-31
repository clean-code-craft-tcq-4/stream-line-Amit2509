#define NUMBER_OF_SAMPLES_FOR_SMA 5
/*extern float Min_Temp;
extern float Max_Temp;
extern float SMA_Temp;
extern float Temp_Array[NUMBER_OF_SAMPLES_FOR_SMA];
extern float Min_SOC;
extern float Max_SOC;
extern float SMA_SOC;
extern float SOC_Array[NUMBER_OF_SAMPLES_FOR_SMA];
extern float Min_ChargeRate;
extern float Max_ChargeRate;
extern float SMA_ChargeRate;
extern float ChargeRate_Array[NUMBER_OF_SAMPLES_FOR_SMA];
*/

float Min_Temp = 0;
float Max_Temp = 0;
float SMA_Temp = 0;
float Temp_Array[NUMBER_OF_SAMPLES_FOR_SMA] = {0};
float Min_SOC = 0;
float Max_SOC = 0;
float SMA_SOC = 0;
float SOC_Array[NUMBER_OF_SAMPLES_FOR_SMA] = {0};
float Min_ChargeRate = 0;
float Max_ChargeRate = 0;
float SMA_ChargeRate = 0;
float ChargeRate_Array[NUMBER_OF_SAMPLES_FOR_SMA] = {0};

int ReadParameters(float* temperature, float* SOC);
void ReadFromConsoleInput(float* temperature, float* SOC);
void FindMinAndMax(float data, float* Min, float* Max);
void FindSMA ();
int PrintMinMaxSMA();
void ReadConsolePrintMinMaxSMA();
