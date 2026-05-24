#include "gpu.h"
#include <iostream>

GPU::GPU() {}

void GPU::Init() {
    std::cout << "[GPU] Inicializada\n";
}

void GPU::RenderFrame() {
    std::cout << "[GPU] Frame renderizado\n";
}
