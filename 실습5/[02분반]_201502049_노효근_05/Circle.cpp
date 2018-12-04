#include "Circle.h"
#include <iostream>
using namespace std;

void Circle::Circle_InitMembers(int xpos, int ypos, int radius) {
	this->center.Point_setX(xpos);
	this->center.Point_setX(ypos);
	radius = this->radius;
}

void Circle::Circle_ShowRingInfo(void){
	cout << "center : [" << this->center.Point_getX() << "," << this->center.Point_getY() << "]" << endl;
	cout << "radius : " << this->radius << endl;
}

