#include "Point.h"
#include <iostream>
using namespace std;

void Point::Point_initMembers(int xpos, int ypos) {
	this->x = xpos;
	this->y = ypos;
}

void Point::Point_ShowPointinfo() {
	cout << "[" << this->x << "," << this->y << "]" << endl;
}

void Point::Point_setX(int xpos) {
	this->x = xpos;
}

void Point::Point_setY(int ypos) {
	this->y = ypos;
}

int Point::Point_getX(void){
	return this->x;
}

int Point::Point_getY(void) {
	return this->y;
}

