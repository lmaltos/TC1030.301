#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
    Shape fig(2,4);
    Circle a(1,2,5);
    Rectangle rect1(2,5);
    Rectangle rect2(5,6,7,8);
    cout << fig.draw() 
        << " con valor x en " << fig.getValueX()
        << " y con valor y en " << fig.getValueY()
        << endl;
    cout << a.draw()
        << " con valor x en " << a.getValueX()
        << " y con valor y en " << a.getValueY()
        << endl;
    cout << rect1.draw()
        << " con valor x en " << rect1.getValueX()
        << " y con valor y en " << rect1.getValueY()
        << endl;
    cout << rect2.draw()
        << " con valor x en " << rect2.getValueX()
        << " y con valor y en " << rect2.getValueY()
        << endl;
    return 0;
}