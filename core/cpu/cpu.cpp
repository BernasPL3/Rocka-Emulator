#include "cpu.h"
#include <iostream>

CPU::CPU() {
    Reset();
}

void CPU::Reset() {
    pc = 0;

    for(int i = 0; i < 16; i++) {
        registers[i] = 0;
    }

    std::cout << "[CPU] Reset completo\n";
}

void CPU::Step() {
    pc += 4;

    std::cout << "[CPU] Executando instrução em: "
              << pc << "\n";
}
