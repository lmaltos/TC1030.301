#include "Shape.h"
#include "Circle.h"

int main() {
    Shape fig(2,4);
    Circle a(1,2,5);
    cout << fig.draw() 
        << " con valor x en " << fig.getValueX()
        << " y con valor y en " << fig.getValueY()
        << endl;
    cout << a.draw()
        << " con valor x en " << a.getValueX()
        << " y con valor y en " << a.getValueY()
        << endl;
    return 0;
}