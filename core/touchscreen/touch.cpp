#include "touch.h"
#include <iostream>

TouchScreen::TouchScreen() {
    x = 0;
    y = 0;
    pressed = false;
}

void TouchScreen::TouchDown(int px, int py) {
    x = px;
    y = py;
    pressed = true;

    std::cout << "[Touch] Pressionado em "
              << x << ", " << y << "\n";
}

void TouchScreen::TouchMove(int px, int py) {
    x = px;
    y = py;

    if (pressed) {
        std::cout << "[Touch] Movendo para "
                  << x << ", " << y << "\n";
    }
}

void TouchScreen::TouchUp() {
    pressed = false;

    std::cout << "[Touch] Soltou a tela\n";
}

int TouchScreen::GetX() const {
    return x;
}

int TouchScreen::GetY() const {
    return y;
}

bool TouchScreen::IsPressed() const {
    return pressed;
}
