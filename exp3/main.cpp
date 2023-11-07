#include <verilated.h>
#include <stdio.h>
#include <iostream>
#include <Valu.h>
#include <nvboard.h>

void nvboard_bind_all_pins(Valu *dut);

int main(){
	Valu *dut = new Valu;
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
