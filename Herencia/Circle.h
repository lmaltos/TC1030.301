#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle : public Shape {
  private:
    int r;
  public:
    Circle();
    Circle(int,int,int);
    string draw();
};

#endif