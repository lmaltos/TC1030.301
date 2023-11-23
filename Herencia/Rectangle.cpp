#include "Rectangle.h"

Rectangle::Rectangle() {
    a = b = 0;
}

Rectangle::Rectangle(int _a, int _b) {
    a = _a;
    b = _b;
}

Rectangle::Rectangle(int _x, int _y, int _a, int _b)
: Shape(_x,_y) {
    a = _a;
    b = _b;
}

string Rectangle::draw() {
    return "Soy un rectangulo";
}