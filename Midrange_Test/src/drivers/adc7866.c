#include "drivers/kmcl2.h"
#include "drivers/adc7866.h"

ADC7866_RegsOvly adc_regs = (ADC7866_RegsOvly) KNX_IP_ADC7866;
ADC7866_LineLossRegOvly adc_lineloss = (ADC7866_LineLossRegOvly) KNX_IP_ADC7866_LINELOSS;
ADC7866_ScratchIDRegOvly adc_scratch_id = (ADC7866_ScratchIDRegOvly) KNX_IP_ADC7866_ID_SCRATCH;

int adc7866_get_module_id(){
	uint16 moduleId=0;
	moduleId  = adc_scratch_id->MODULE_ID;
	return moduleId;
}

int adc7866_test_scratch(){
	int stat;
	uint16 test_dat = 0xbeef;
	adc_scratch_id->MODULE_SCRATCH = test_dat;
	if(test_dat==adc_scratch_id->MODULE_SCRATCH){
		stat=1;
	}
	else{
		stat = 0;
	}
	return stat;
}

