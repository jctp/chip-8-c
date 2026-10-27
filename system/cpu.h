#ifndef CHIP8_SYSTEM_CPU_H
#define CHIP8_SYSTEM_CPU_C

typedef struct {
    uint8_t memory[4096];
    uint8_t v[16];

    uint16_t pc;
    uint16_t index;

    uint8_t delay_timer;
    uint8_t sound_timer;
    
    uint16_t stack[16];
    uint8_t sp;
} Chip8Cpu;

#endif