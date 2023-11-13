#include <iostream>
#include "complex.h"

using namespace std;

ostream& operator<<(ostream &os,complex const &obj) {
    os << obj.real << " + i" << obj.imag;
    return os;
}

complex resta(complex const &x, complex const &y) {
    complex ans;
    ans.real = x.real - y.real;
    ans.imag = x.imag - y.imag;
    return ans;
}

int main() {
    complex a(3,8), b(2,4);
    complex c = (a + b) + a - b + (b + a);
    complex d = a - b;
    cout << c << endl;
    return 0;
}