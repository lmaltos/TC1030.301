#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class complex {
  private:
    int real, imag;
  public:
    complex(int _real = 0, int _imag = 0) {
        real = _real;
        imag = _imag;
    }

    complex operator+(complex const &obj) const {
        complex ans;
        ans.real = real + obj.real;
        ans.imag = imag + obj.imag;
        return ans;
    }
    complex operator-(complex const &obj) const {
        return resta(*this,obj);
    }

    friend complex resta(complex const &,complex const &);
    void print() const {
        std::cout << real << " + i" << imag << std::endl;
    }
    friend std::ostream& operator<<(std::ostream&,complex const &);
};

#endif