#include "Circle.h"

Circle::Circle() {
    r = 1;
}

Circle::Circle(int _x, int _y, int _r) : Shape(_x,_y) {
    r = _r;
}

string Circle::draw() {
    return "Soy un circulo y " + Shape::draw();
}