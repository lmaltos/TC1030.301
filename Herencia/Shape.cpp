#include "Shape.h"

Shape::Shape() {
    x = y = 0;
}

Shape::Shape(int _x,int _y) {
    x = _x;
    y = _y;
}

string Shape::draw() {
    return "Soy una figura";
}

int Shape::getValueX() {
    return x;
}

int Shape::getValueY() {
    return y;
}