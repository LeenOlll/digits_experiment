#include <nvboard.h>
#include "Valu.h"

void nvboard_bind_all_pins(Valu* top) {
	nvboard_bind_pin( &top->A, BIND_RATE_SCR, BIND_DIR_IN , 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->B, BIND_RATE_SCR, BIND_DIR_IN , 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->big_up_mode, BIND_RATE_SCR, BIND_DIR_IN , 1, BTNU);
	nvboard_bind_pin( &top->big_down_mode, BIND_RATE_SCR, BIND_DIR_IN , 1, BTND);
	nvboard_bind_pin( &top->small_down_mode, BIND_RATE_SCR, BIND_DIR_IN , 1, BTNL);
	nvboard_bind_pin( &top->small_up_mode, BIND_RATE_SCR, BIND_DIR_IN , 1, BTNR);
	nvboard_bind_pin( &top->mode, BIND_RATE_SCR, BIND_DIR_OUT, 3, LD15, LD14, LD13);
	nvboard_bind_pin( &top->result, BIND_RATE_SCR, BIND_DIR_OUT, 4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->of, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD4);
	nvboard_bind_pin( &top->zf, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD5);
	nvboard_bind_pin( &top->cf, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD6);
}
