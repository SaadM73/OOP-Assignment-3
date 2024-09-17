#include"22i-0835_C_Triangle.h"

/* Muhammad Saad Mursaleen
   22I-0835
   Assignment # 3
   CS-C*/

triangle::triangle() {
	a.setx(0);
	a.sety(0);
	b.setx(0);
	b.sety(0);
	c.setx(0);
	c.sety(0);
}

triangle::triangle(triangle& obj) {
	this->a.setx(obj.a.getx());
	this->a.sety(obj.a.gety());
	this->b.setx(obj.b.getx());
	this->b.sety(obj.b.gety());
	this->c.setx(obj.c.getx());
	this->c.sety(obj.c.gety());
}

triangle::triangle(int x1, int y1,int x2,int y2,int x3, int y3) {
	a.setx(x1);
	a.sety(y1);	
	b.setx(x2);
	b.sety(y2);	
	c.setx(x3);
	c.sety(y3);
}


int triangle::calculateArea() {
	int area=0;
	area =  (a.getx() * (b.gety() - c.gety())) + (b.getx() * (c.gety() - a.gety())) + (c.getx() * (a.gety() - b.gety()));
	if (area < 0) {
		area *= -1;
	}
	area /= 2;
	return area;
}

bool triangle::check() {
	bool flag = 0;
	int l1 = 0, l2 = 0, l3 = 0;
	l1 = pow(pow(a.getx() - b.getx(), 2) + pow(a.gety() - b.gety(), 2), 1 / 2);
	l2 = pow(pow(a.getx() - c.getx(), 2) + pow(a.gety() - c.gety(), 2), 1 / 2);
	l3 = pow(pow(c.getx() - b.getx(), 2) + pow(c.gety() - b.gety(), 2), 1 / 2);

	if ((l1 + l2) > l3) {
		flag = 1;
	}

	if (!flag) {
		cout << "Wrong vertices Entered\n Triangle not formed\n\n";
	}
	else {
		cout << "Triangle Formed\n\n";

	}
	return flag;

}

void triangle::display() {
	float l1 = 0, l2 = 0, l3 = 0;
	l1 = pow(b.getx() - a.getx(), 2) + pow(b.gety() - a.gety(), 2);
//	l1 = pow(l1, 1 / 2);
	l2 = pow(c.getx() - a.getx(), 2) + pow(c.gety() - a.gety(), 2);
//	l2 = pow(l2, 1 / 2);
	l3 = pow(c.getx() - b.getx(), 2) + pow(c.gety() - b.gety(), 2);
//	l3 = pow(l, 1 / 2);


	if (l1 == l2 && l2==l3 && l1==l3) {
		cout << "TYPE : Equilateral\n";

	}
	else if(l1 != l2 && l2 != l3 && l1!=l3) {
		cout << "TYPE : Scalene\n";
	}
	else {
		cout << "TYPE : Isosceles\n";

	}
	cout << "AREA : " << this->calculateArea() << endl;


}

bool triangle::operator==( triangle& obj) {
	return (a.getx() == obj.a.getx() && a.gety() == obj.a.gety() && b.getx() == obj.b.getx() && b.gety() == obj.b.gety()&& c.getx() == obj.c.getx() && c.gety() == obj.c.gety());
}



