#include <iostream>
#include "headers/header.h"

int main() {
    Class_Point CoorSys;
    CoorSys.setX(5);
    CoorSys.setY(6);
    std::cout << CoorSys.getX() << std::endl;
    return 0;
}