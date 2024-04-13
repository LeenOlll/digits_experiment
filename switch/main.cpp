#include <Vtop.h>
#include <stdio.h>
#include <iostream>
#include <verilated.h>
#include <nvboard.h>


void nvboard_bind_all_pins(Vtop *dut);

void single_cycle(Vtop *dut){
	dut->eval();
}

int main(){
	Vtop *dut = new Vtop;
	nvboard_bind_all_pins(dut);
	nvboard_init();

	while(1){
		single_cycle(dut);
		nvboard_update();
	}

	delete dut;
	nvboard_quit();
	exit(EXIT_SUCCESS);
}
