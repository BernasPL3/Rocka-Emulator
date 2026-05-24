#pragma once
#include <cstdint>

class CPU {
public:
    CPU();

    void Reset();
    void Step();

    uint32_t registers[16];

private:
    uint32_t pc;
};
