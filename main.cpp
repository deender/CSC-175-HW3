#include <iostream>
#include "Polygyon.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;


int main() {
    Polygon* p1;
    Rectangle r1;
    p1 =&r1;
    p1->setHeight(7);
    p1->setWidth(5);
    cout << "The area of the rectangle is: " << p1->getArea() << endl;
    p1->draw(); //draws rectangle

    Triangle t1;
    p1 = &t1;
    p1->setHeight(7);
    p1->setWidth(5);
    cout << "The area of the triangle is: " << p1->getArea() << endl;
    p1->draw();

    //Question 1:
    //Polygon p2;
    // This line gives me an error because Polygon is an abstract class so it can't create a regular object, but it has to be a pointer.

    //Question 2:
   //I still get the same error as before when it was virtual. The compiler now says "getArea is not virtual and cannot be pure".


    return 0;
}
