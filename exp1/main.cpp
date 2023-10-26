#include <Vmux41b.h>
#include <stdio.h>
#include <iostream>
#include <verilated.h>
#include <nvboard.h>

void nvboard_bind_all_pins(Vmux41b *dut);

int main(){
	Vmux41b *dut = new Vmux41b;
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
