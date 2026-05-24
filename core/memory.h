#pragma once
#include <vector>
#include <cstdint>

class Memory {
public:
    Memory(size_t size);

    uint8_t Read8(uint32_t addr);
    void Write8(uint32_t addr, uint8_t value);

private:
    std::vector<uint8_t> ram;
};
