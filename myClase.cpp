#include "myClase.h"
#include <iostream>

using namespace std;

myClase::myClase() {
    a = 1;
    b = 2;
    x = 4.3;
}

myClase::myClase(int n) {
    a = n;
    b = 0;
    x = 6.5;
}

void myClase::myMethod() {
    cout << a << " "
        << b << " "
        << x << endl;
}

void myClase::swap() {
    int c;
    c = a;
    a = b;
    b = c;
}