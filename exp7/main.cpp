#include <nvboard.h>
#include <verilated.h>
#include "Vtop.h"
#include "verilated_vcd_c.h"

static Vtop* top;
VerilatedContext* contextp = NULL;
VerilatedVcdC* m_trace = NULL;

void cycle() {
    top->clk = !top->clk;
    top->eval();
    contextp->timeInc(10);
    //m_trace->dump(contextp->time());
}

void init() {
    contextp = new VerilatedContext;
    m_trace = new VerilatedVcdC;
    top = new Vtop;
    contextp->traceEverOn(true);
    top->trace(m_trace,10);
    m_trace->open("waveform.vcd");
}

void sim_exit() {
    cycle();
    m_trace->close();
}

void nvboard_bind_all_pins(Vtop* top);

int main() {
    init();
    nvboard_bind_all_pins(top);
    nvboard_init();
    top->clrn = 1;
    cycle();
    top->clrn = 0;
    cycle();
    top->clrn = 1;

    while(1) {
        top->eval();
        nvboard_update();
        cycle();
    }

    sim_exit();
}
