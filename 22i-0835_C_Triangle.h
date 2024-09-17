#pragma once


/* Muhammad Saad Mursaleen
   22I-0835
   Assignment # 3
   CS-C*/

#include"22i-0835_C_Point.h"

class triangle {
	point a;
	point b;
	point c;

public:
	triangle();
	triangle(triangle& obj);
	triangle(int x1, int y1, int x2, int y2, int x3, int y3);
	int calculateArea();
	bool check();
	void display();
	bool operator==(triangle& obj);

	friend class point;
};

