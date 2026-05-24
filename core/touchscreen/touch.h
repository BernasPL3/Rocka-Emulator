#pragma once

class TouchScreen {
public:
    TouchScreen();

    void TouchDown(int px, int py);
    void TouchMove(int px, int py);
    void TouchUp();

    int GetX() const;
    int GetY() const;
    bool IsPressed() const;

private:
    int x;
    int y;
    bool pressed;
};
