#pragma once
/* Muhammad Saad Mursaleen
   22I-0835
   Assignment # 3
   CS-C*/

#include<iostream>
using namespace std;

class Dollar {
	int dollar;
public:
	Dollar() {
		dollar = 0;
	}
	Dollar(int x) {
		dollar = x;
	}
	void setDollar(int x) {
		dollar = x;
	}

	int getDollar() {
		return dollar;
	}
};

class Nickel {
	int nickel;

public:

	Nickel() {
		nickel = 0;
	}

	Nickel(int x) {
		nickel = x;
	}
	void setNickel(int x) {
		nickel = x;
	}

	int getNickel() {
		return nickel;
	}
};

class Quarter {
	int quarter;

public:
	Quarter() {
		quarter = 0;
	}
	Quarter(int x) {
		quarter = x;
	}

	void setQuarter(int x) {
		quarter = x;
	}

	int getQuarter() {
		return quarter;
	}
};

class Cent {
	int cent;

public:
	void setCent(int x) {
		cent = x;
	}

	int getCent() {
		return cent;
	}
};



class Money {
	Dollar d;
	Quarter q;
	Nickel n;
	Cent c;

public:
	Money();
	Money(double);

	void setDollar(int x);
	void setQuarter(int x);
	void setNickel(int x);
	void setCent(int x);
	int getDollar();
	int getNickel ();
	int getQuarter();
	int getCent();

	Money operator+(Money m);
	Money operator-(Money m);
	Money operator+(Dollar d);
	Money operator-(Dollar d);
	Money operator+(Nickel d); //
	Money operator-(Nickel d); //
	Money operator+(Quarter d); //
	Money operator-(Quarter d); //
	Money operator+(Cent d); //
	Money operator-(Cent d); //

	Money operator ++();
	Money operator --();

	bool operator >= (Money m);
	bool operator <= (Money m);

	Quarter operator!();
	Nickel operator~();

	Money operator/(int n);
	Money operator*(int n);
};
