#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Opcode handlers

#include "opcodes/alu.h"
#include "opcodes/display.h"
#include "opcodes/flow.h"
#include "opcodes/input.h"
#include "opcodes/memory_operations.h"
#include "opcodes/register_loads_moves.h"
#include "opcodes/rng.h"
#include "opcodes/skips.h"
#include "opcodes/timers.h"
#include "opcodes/_dispatcher.h"

// System components

#include "system/cpu.h"
#include "system/display.h"
#include "system/io.h"
#include "system/memory.h"
#include "system/rom.h"

// Itself

#include "chip8.h"

int main() {
    printf("Hello, world! I'm going to be an interpreter when I grow up!");
    return 0;
}

void emulation_main_loop() {

}