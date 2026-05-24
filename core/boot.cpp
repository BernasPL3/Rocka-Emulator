#include "cpu/cpu.h"
#include "gpu/gpu.h"
#include "audio/audio.h"

int main() {
    CPU cpu;
    GPU gpu;
    Audio audio;

    gpu.Init();
    audio.Init();

    while(true) {
        cpu.Step();
        gpu.RenderFrame();
    }

    return 0;
}
