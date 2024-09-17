#include"22i-0835_C_Train.h"



train train::operator+(coach& temp){
	coaches[noOfCoaches++] = temp;
	return *this;

}

train train::operator+(int x)
{
	passengers++;
	return *this;
}

train train::operator-(coach& obj){


	noOfCoaches--;

	return *this;
}

train train::operator+(seat& obj){
	int x = 0;
	while (coaches[x].getseat() >= 10) {
		x++;
	}
	coaches[x].addseat(obj);
	return *this;
}

train train::operator-(seat& obj){
	if (coaches[noOfCoaches].getseat()!=0) {
		coaches[noOfCoaches].removeseat(obj);
	}
	else {
		coaches[noOfCoaches - 1].removeseat(obj);
	}
	return *this;
}

ostream& operator<<(ostream& out, train& obj)
{
	out << "Total Coaches : " << obj.gettCoachNo() << endl;
	out << "Total passengers : " << obj.getPassengers() << endl;
	out << "Total Seats : " << obj.totalseats() << endl;
	return out;

}