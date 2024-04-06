#include <verilated.h>
#include <stdio.h>
#include <iostream>
#include "Valu_go.h"
#include <nvboard.h>

void nvboard_bind_all_pins(Valu_go *dut);

int main(){
	Valu_go *dut = new Valu_go;
	nvboard_bind_all_pins(dut);
	nvboard_init();

	while(1){
		dut->eval();
		nvboard_update();
	}

	delete dut;
	nvboard_quit();
	exit(EXIT_SUCCESS);
}
