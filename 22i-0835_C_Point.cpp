#include"22i-0835_C_Point.h"

/* Muhammad Saad Mursaleen
   22I-0835
   Assignment # 3
   CS-C*/

point::point() {
	x = 0;
	y = 0;
}

point::point(int x, int y) {
	this->x = x;
	this->y = y;
}

int point::getx() {
	return x;
}

int point::gety() {
	return y;
}

void point::setx(int a) {
	x = a;
}

void point::sety(int b) {
	y = b;
}
