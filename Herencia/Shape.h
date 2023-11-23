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
    virtual string draw() = 0;
    //virtual int area() = 0;
    int getValueX();
    int getValueY();
};

#endif