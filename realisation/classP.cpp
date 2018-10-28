#include "../headers/classP.h"
#include <math.h>

int Class_Point::getX() {
    return x;
}

int Class_Point::getY(){
    return y;
}

Class_Point::Class_Point(int x1, int y1) {
    x=x1;
    y=y1;
}

double Distance (Class_Point A,Class_Point B){
    double dist=sqrt(pow((A.getX()-B.getX()),2)+pow((A.getY()-B.getY()),2));
    return dist;
}