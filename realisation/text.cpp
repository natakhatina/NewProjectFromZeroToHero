#include "../headers/header.h"

int Class_Point::getX() const {
    return x;
}

void Class_Point::setX(int x) {
    if ((x>=-100)&&(x<=100)) {
        Class_Point::x = x;
    }
}

int Class_Point::getY() const {
    return y;
}

void Class_Point::setY(int y) {
    if ((y>=-100)&&(y<=100)) {
        Class_Point::y = y;
    }
}