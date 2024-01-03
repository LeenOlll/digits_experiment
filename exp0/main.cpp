#include <Vlight.h>
#include <stdio.h>
#include <iostream>
#include <verilated.h>
#include <nvboard.h>


void nvboard_bind_all_pins(Vlight *dut);

void single_cycle(Vlight *dut){
	dut->clk = 0;
	dut->eval();
	dut->clk = 1;
	dut->eval();
}

void reset(int n, Vlight* dut) {
  dut->rst = 1;
  while (n -- > 0) single_cycle(dut);
  dut->rst = 0;
}

int main(){
	Vlight *dut = new Vlight;
	nvboard_bind_all_pins(dut);
	nvboard_init();

	reset(10, dut);

	while(1){
		single_cycle(dut);
		nvboard_update();
	}

	delete dut;
	nvboard_quit();
	exit(EXIT_SUCCESS);
}
