#include <verilated.h>
#include <stdio.h>
#include <iostream>
#include <Vtop.h>
#include <nvboard.h>

void nvboard_bind_all_pins(Vtop *dut);

int main(){
	Vtop *dut = new Vtop;
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
