#ifndef MYCLASE_H
#define MYCLASE_H

class myClase {
  private:
    int a;
    int b;
    float x;
  public:
    myClase(); // constructor
    myClase(int); // otro constructor
    void setA(int a) {
        this->a = a;
    }
    void setB(int _b) {b = _b;}
    void setX(float _x) {x = _x;}
    int getA() {return a;}
    int getB() {return b;}
    float getX() {return x;}
    void myMethod();
    void swap();
};

#endif