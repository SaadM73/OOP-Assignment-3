#pragma once

/* Muhammad Saad Mursaleen
   22I-0835
   Assignment # 3
   CS-C*/

#include<iostream>
using namespace std;

class point{
	int x, y;
public:
	point();
	point(int x, int y);
	int getx();
	int gety();
	void setx(int);
	void sety(int);
};


