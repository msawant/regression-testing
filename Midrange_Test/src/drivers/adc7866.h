#ifndef ADC7866_H_
#define ADC7866_H_
#include <DataTypes.h>

#define KNX_IP_ADC7866_LINELOSS		(KNX_IP_ADC7866 + 0x0024)
#define KNX_IP_ADC7866_ID_SCRATCH	(KNX_IP_ADC7866 + 0x0030)

typedef struct{
	volatile uint16 ADC7866_DELPADC;
	volatile uint16 PADCCNT;
	volatile uint16 PADC1A_OFF;
	volatile uint16 PADC1B_OFF;
	volatile uint16 PADC2A_OFF;
	volatile uint16 PADC2B_OFF;
	volatile uint16 PADC1A_SCALE;
	volatile uint16 PADC1B_SCALE;
	volatile uint16 PADC2A_SCALE;
	volatile uint16 PADC2B_SCALE;
	volatile uint16 PADC1A_S;
	volatile uint16 PADC1B_S;
	volatile uint16 PADC2A_S;
	volatile uint16 PADC2B_S;
}ADC7866_Regs;

typedef struct{
	volatile uint16 CH1ALPHA;
	volatile uint16 CH2ALPHA;
	volatile uint16 CH1LOSSLO;
	volatile uint16 CH1LOSSHI;
	volatile uint16 CH2LOSSLO;
	volatile uint16 CH2LOSSHI;
}ADC7866_LineLossReg;

typedef struct{
	volatile uint16 MODULE_ID;
	volatile uint16 MODULE_SCRATCH;
}ADC7866_Scratch_ID;

/**************************************************************************\
* Overlay structure typedef definition
\**************************************************************************/
typedef volatile ADC7866_Regs             *ADC7866_RegsOvly;
typedef volatile ADC7866_LineLossReg      *ADC7866_LineLossRegOvly;
typedef volatile ADC7866_Scratch_ID      *ADC7866_ScratchIDRegOvly;

#ifdef __cplusplus
extern "C" {
#endif

int adc7866_get_module_id();
int adc7866_test_scratch();
int adc7866_get_channel_a();
int adc7866_get_channel_b();

#ifdef __cplusplus
}
#endif


#endif /*ADC7866_H_*/
