#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

using namespace std;
class Shape {
  private:
    int x;
    int y;
  public:
    Shape();
    Shape(int,int);
    string draw();
    int getValueX();
    int getValueY();
};

#endif