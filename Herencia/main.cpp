#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Cilindro.h"
#include <list>

int main_old() {
    Shape fig(2,4);
    Circle a(1,2,5);
    Rectangle rect1(2,5);
    Rectangle rect2(5,6,7,8);
    Cilindro c;
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
    /**/
    cout << c.draw()
        << " con valor x en " << c.getValueX()
        << " y con valor y en " << c.getValueY()
        << endl;
        /**/
    return 0;
}

int main() {
    Shape fig(2,4);
    Circle a(1,2,5);
    Rectangle rect1(2,5);
    Rectangle rect2(5,6,7,8);
    Cilindro c;
    list<Shape*> lista;
    lista.push_back(&fig);
    lista.push_back(&a);
    lista.push_back(&rect1);
    lista.push_back(&rect2);
    lista.push_back(&c);
    for (list<Shape*>::iterator it = lista.begin();
        it != lista.end();
        it++) {
            Shape *p = *it;
        cout << p->draw() 
            << " con valor x en " << p->getValueX()
            << " y con valor y en " << p->getValueY()
            << endl;
    }
    return 0;
}