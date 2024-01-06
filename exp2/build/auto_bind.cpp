#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->data, BIND_RATE_SCR, BIND_DIR_IN , 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->led, BIND_RATE_SCR, BIND_DIR_OUT, 3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->hex, BIND_RATE_SCR, BIND_DIR_OUT, 8, DEC0P, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G);
	nvboard_bind_pin( &top->inst_led, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD4);
}
