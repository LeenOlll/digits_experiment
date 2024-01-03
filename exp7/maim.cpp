#include <verilated.h>
#include "Vtop.h"
#include <nvboard.h>
#include <verilated_vcd_c.h>

vluint64_t sim_time = 0;

void nvboard_bind_all_pins(Vtop *dut);

void cycle(Vtop *dut){
	dut->clk ^= 1;
	if(dut->ready) dut->nextdata_n = 0;
	else dut->nextdata_n = 1;
	dut->eval();
}

int main(){
	Vtop *dut = new Vtop;
	nvboard_init();
	nvboard_bind_all_pins(dut);

	Verilated::traceEverOn(true);
	VerilatedVcdC *m_trace = new VerilatedVcdC;
	dut->trace(m_trace, 5);
	m_trace->open("waveform.vcd");

	dut->clrn = 0;
	cycle(dut);
	dut->clrn = 1;

	while(1){
		cycle(dut);
#ifdef trace
		m_trace->dump(sim_time);
#endif
        sim_time++;
		nvboard_update();
	}

	delete dut;
	nvboard_quit();
	return 0;
}
