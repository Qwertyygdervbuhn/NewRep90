#include "Point.h"
#include <iostream>
using namespace std;

unsigned int Point::countCreated = 0;
unsigned int Point::countAlive = 0;

Point::Point(int x1, int y1) {
    x = x1;
    y = y1;
    countCreated++;
    countAlive++;
}

Point::~Point() {
    countAlive--;
}

void Point::display() {
    cout << "X: " << x << " Y: " << y << endl;
}

void Point::showInfo() {
    cout << "Created objects: " << countCreated << endl;
    cout << "Alive objects: " << countAlive << endl;
}
