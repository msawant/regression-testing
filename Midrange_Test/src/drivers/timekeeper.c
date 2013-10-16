/*
 * timekeeper.c
 *
 *  Created on: Oct 15, 2013
 *      Author: msawant
 */

#include "drivers/kmcl2.h"
#include "drivers/timekeeper.h"

TimeKeeper_RegsOvly timekeeper_regs = (TimeKeeper_RegsOvly) KNX_IP_TIMEKEEPER;

int timekeeper_get_module_id(){
	return timekeeper_regs->ID;
}

int timekeeper_test_scratch(){
	int stat;
	uint16 test_dat = 0xbeef;
	timekeeper_regs->SCRATCHPAD = test_dat;
	if(test_dat==timekeeper_regs->SCRATCHPAD){
		stat=1;
	}
	else{
		stat = 0;
	}
	return stat;
}





