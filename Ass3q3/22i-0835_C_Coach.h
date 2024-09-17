#pragma once

#include"22i-0835_C_Seat.h"
#include<iostream>
using namespace std;


class coach {
	seat totalseats[10];
	int noSeats;
public:
	coach() {
		noSeats = 0;
	}

	coach(int x) {
		if (x <= 10) {
			noSeats = x;
		}
		else {
			cout << "Seats in one coach cannot be greater than 10" << endl;
		}
	}



	int getseat() {
		return noSeats;
	}
	
	//void setCoachNo(int x) {
	//	noSeats = x;
	//}


	void addseat(seat s) {
		if (noSeats < 9) {
			totalseats[++noSeats] = s;
		}
		else {
			cout << "No of seats already at MAX int this coach" << endl;
		}
	}

	void removeseat(seat s) {
		noSeats--;
	}

};