#pragma once


/* Muhammad Saad Mursaleen
   22I-0835
   Assignment # 3
   CS-C*/

#include<iostream>
#include"22i-0835_C_Coach.h"
#include"22i-0835_C_Seat.h"
using namespace std;


class train {
private:
	string name;
	coach coaches[50];
	int noOfCoaches;
	int passengers;

public:
	train() {
		name = "";
		noOfCoaches = 0;
		passengers = 0;
	}

	train(string s) {
		name = s;
		noOfCoaches = 0;
		passengers = 0;
	}
	

	string getTrainName() {
		return name;
	}

	void setTrainName(string s) {
		name = s;
	}

	void operator=(train t) {
		name = t.getTrainName();
		noOfCoaches = t.noOfCoaches;
		passengers = t.getPassengers();
	}


	void setPassengers(int x) {
		passengers = x;
	}

	int getPassengers() {
		return passengers;
	}

	int totalseats() {
		int tot = 0;
		for(int i = 0; i < noOfCoaches; i++) {
			tot += coaches[i].getseat();
		}
		return tot;
	}


	int gettCoachNo() {
		return noOfCoaches;
	}



	train operator+(coach& obj); //add a coach into the train
	train operator+(int x); //add a Passenger into the train
	train operator-(coach& obj); //remove a coach from the train
	train operator+(seat& obj); //Add a seat in a coach
	train operator-(seat& obj); //remove a seat a coach
	friend ostream& operator<<(ostream& out,train&  obj); // this function will display all the elements of the train, including total passengers, berths / seats and coaches
};


