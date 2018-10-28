#include <iostream>
#include "headers/classP.h"
#include "realisation/classP.cpp"


int main() {
    Class_Point A(0,0),B(3,4);

    double dist=Distance(A,B);
    std::cout << dist << std::endl;
    return 0;
}