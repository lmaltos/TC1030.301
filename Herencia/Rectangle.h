#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {
  private:
    int a;
    int b;
  public:
    Rectangle();
    Rectangle(int,int);
    Rectangle(int,int,int,int);
    string draw();
};

#endif