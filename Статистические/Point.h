#pragma once
class Point {
public:
    int x, y;
    static unsigned int countCreated;
    static unsigned int countAlive;

    Point(int x1 = 0, int y1 = 0);
    ~Point();

    void display();
    static void showInfo();
};

