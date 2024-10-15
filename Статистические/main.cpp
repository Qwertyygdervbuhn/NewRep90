#include "Point.h"
#include <iostream>
using namespace std;

int main() {
    Point p1(1, 2);
    Point p2(4, 5);
    Point p3(7, 8);

    p1.display();
    p2.display();
    p3.display();

    Point::showInfo();

    {
        Point p4(10, 11);
        p4.display();
        Point::showInfo();
    }

    Point::showInfo();

}
