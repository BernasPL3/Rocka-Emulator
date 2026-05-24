#include "memory.h"

Memory::Memory(size_t size)
    : ram(size, 0) {}

uint8_t Memory::Read8(uint32_t addr) {
    return ram[addr];
}

void Memory::Write8(uint32_t addr, uint8_t value) {
    ram[addr] = value;
}
