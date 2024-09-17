#include"22i-0835_C_Money.h"

/* Muhammad Saad Mursaleen
   22I-0835
   Assignment # 3
   CS-C*/

Money::Money() {
	d.setDollar(0);
	q.setQuarter(0);
	n.setNickel(0);
	c.setCent(0);
}

Money::Money(double temp) {
	double x = 0;
	int z = 0;

	z = temp * 100;
	// z has total cents

	d.setDollar(z / 100);
	z = z % 100;

	q.setQuarter(z / 25);
	z = z % 25;

	n.setNickel(z / 5);
	z = z % 5;

	c.setCent(z);


//	int y = 0;
	//d.setDollar(temp / 1);
	//y = temp / 1;
	//x = temp - y; //value after decimal

	//x = x * 100;
	//z = x;
	//q.setQuarter(z / 25);
	//z = z % 25;
	//n.setNickel(z / 5);
	//z = z % 5;
	//c.setCent(z);
}

void Money::setDollar(int x) {
	d.setDollar(x);
}

void Money::setQuarter(int x) {
	q.setQuarter(x);
}

void Money::setNickel(int x) {
	n.setNickel(x);
}

void Money::setCent(int x) {
	c.setCent(x);
}

int Money::getDollar() {
	return d.getDollar();
}

int Money::getQuarter() {
	return q.getQuarter();
}

int Money::getNickel() {
	return n.getNickel();
}

int Money::getCent() {
	return c.getCent();
}

Money Money:: operator+(Money m) {
	Money temp;

	int dollar = 0, nickel = 0, quarter = 0, cents = 0;
	int total = (d.getDollar() * 100) + (q.getQuarter() * 25) + (n.getNickel() * 5) + (c.getCent());
	total += (m.d.getDollar() * 100) + (m.q.getQuarter() * 25) + (m.n.getNickel() * 5) + (m.c.getCent());

	dollar = total / 100;
	total = total % 100;

	quarter = total / 25;
	total = total % 25;

	nickel = total / 5;
	total = total % 5;

	cents = total;

	temp.setDollar(dollar);
	temp.setNickel(nickel);
	temp.setQuarter(quarter);
	temp.setCent(cents);

	return temp;

}

Money Money::operator-(Money m) {
	Money temp;

	int dollar = 0, nickel = 0, quarter = 0, cents = 0;
	int total = (d.getDollar() * 100) + (q.getQuarter() * 25) + (n.getNickel() * 5) + (c.getCent());
	total -= (m.d.getDollar() * 100) + (m.q.getQuarter() * 25) + (m.n.getNickel() * 5) + (m.c.getCent());

	dollar = total / 100;
	total = total % 100;

	quarter = total / 25;
	total = total % 25;

	nickel = total / 5;
	total = total % 5;

	cents = total;

	temp.setDollar(dollar);
	temp.setNickel(nickel);
	temp.setQuarter(quarter);
	temp.setCent(cents);

	return temp;
}

Money Money::operator+(Dollar d) {
	Money temp;

	int dollar = 0, nickel = 0, quarter = 0, cents = 0;
	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());
	total += d.getDollar() * 100;
	dollar = total / 100;
	total = total % 100;

	quarter = total / 25;
	total = total % 25;

	nickel = total / 5;
	total = total % 5;

	cents = total;

	temp.setDollar(dollar);
	temp.setNickel(nickel);
	temp.setQuarter(quarter);
	temp.setCent(cents);

	return temp;
}

Money Money:: operator-(Dollar d) {
	Money temp;

	int dollar = 0, nickel = 0, quarter = 0, cents = 0;
	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());
	total -= d.getDollar() * 100;
	dollar = total / 100;
	total = total % 100;

	quarter = total / 25;
	total = total % 25;

	nickel = total / 5;
	total = total % 5;

	cents = total;

	temp.setDollar(dollar);
	temp.setNickel(nickel);
	temp.setQuarter(quarter);
	temp.setCent(cents);

	return temp;
}

Money Money:: operator+(Nickel d) {
		Money temp;

	int dollar = 0, nickel = 0, quarter = 0, cents = 0;
	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());
	total += d.getNickel() * 5;
	dollar = total / 100;
	total = total % 100;

	quarter = total / 25;
	total = total % 25;

	nickel = total / 5;
	total = total % 5;

	cents = total;

	temp.setDollar(dollar);
	temp.setNickel(nickel);
	temp.setQuarter(quarter);
	temp.setCent(cents);

	return temp;
}


Money Money:: operator-(Nickel d) {
	Money temp;

	int dollar = 0, nickel = 0, quarter = 0, cents = 0;
	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());
	total -= d.getNickel() * 5;
	dollar = total / 100;
	total = total % 100;

	quarter = total / 25;
	total = total % 25;

	nickel = total / 5;
	total = total % 5;

	cents = total;

	temp.setDollar(dollar);
	temp.setNickel(nickel);
	temp.setQuarter(quarter);
	temp.setCent(cents);

	return temp;
}

Money Money::operator+(Quarter d) {
	Money temp;

	int dollar = 0, nickel = 0, quarter = 0, cents = 0;
	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());
	total += d.getQuarter() * 25;
	dollar = total / 100;
	total = total % 100;

	quarter = total / 25;
	total = total % 25;

	nickel = total / 5;
	total = total % 5;

	cents = total;

	temp.setDollar(dollar);
	temp.setNickel(nickel);
	temp.setQuarter(quarter);
	temp.setCent(cents);

	return temp;
}

Money Money::operator-(Quarter d) {
	Money temp;

	int dollar = 0, nickel = 0, quarter = 0, cents = 0;
	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());
	total -= d.getQuarter() * 25;
	dollar = total / 100;
	total = total % 100;

	quarter = total / 25;
	total = total % 25;

	nickel = total / 5;
	total = total % 5;

	cents = total;

	temp.setDollar(dollar);
	temp.setNickel(nickel);
	temp.setQuarter(quarter);
	temp.setCent(cents);

	return temp;
}

Money Money::operator+(Cent d) {
	Money temp;

	int dollar = 0, nickel = 0, quarter = 0, cents = 0;
	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());
	total += d.getCent();
	dollar = total / 100;
	total = total % 100;

	quarter = total / 25;
	total = total % 25;

	nickel = total / 5;
	total = total % 5;

	cents = total;

	temp.setDollar(dollar);
	temp.setNickel(nickel);
	temp.setQuarter(quarter);
	temp.setCent(cents);

	return temp;
}


Money Money::operator-(Cent d) {
	Money temp;

	int dollar = 0, nickel = 0, quarter = 0, cents = 0;
	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());
	total -= d.getCent();
	dollar = total / 100;
	total = total % 100;

	quarter = total / 25;
	total = total % 25;

	nickel = total / 5;
	total = total % 5;

	cents = total;

	temp.setDollar(dollar);
	temp.setNickel(nickel);
	temp.setQuarter(quarter);
	temp.setCent(cents);

	return temp;
}

Money Money:: operator ++() {

	Money temp;

	int dollar = 0, nickel = 0, quarter = 0, cents = 0;

	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());
	
	int x = 0;
	x = total % 25;
	total = total - x;
	
	total = total + 25;

	dollar = total / 100;
	total = total % 100;

	quarter = total / 25;
	total = total % 25;

	nickel = total / 5;
	total = total % 5;

	cents = total;

	temp.setDollar(dollar);
	temp.setNickel(nickel);
	temp.setQuarter(quarter);
	temp.setCent(cents);

	return temp;

}

Money Money:: operator --() {

	Money temp;

	int dollar = 0, nickel = 0, quarter = 0, cents = 0;

	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());
	
	int x = 0;
	x = total % 25;
	total = total - x;
	
//	total = total + 25;

	dollar = total / 100;
	total = total % 100;

	quarter = total / 25;
	total = total % 25;

	nickel = total / 5;
	total = total % 5;

	cents = total;

	temp.setDollar(dollar);
	temp.setNickel(nickel);
	temp.setQuarter(quarter);
	temp.setCent(cents);

	return temp;

}

bool Money::operator>=(Money m)
{
	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());

	int tempTotal = (m.d.getDollar() * 100) + (m.q.getQuarter() * 25) + (m.n.getNickel() * 5) + (m.c.getCent());

	return total >= tempTotal;
}

bool Money::operator<=(Money m)
{
	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());

	int tempTotal = (m.d.getDollar() * 100) + (m.q.getQuarter() * 25) + (m.n.getNickel() * 5) + (m.c.getCent());

	return total <= tempTotal;
}

Quarter Money::operator!() {
	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());
	Quarter temp;
	temp.setQuarter(total / 25);
	return temp;
}


Nickel Money::operator~() {
	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());
	Nickel temp;
	temp.setNickel(total / 25);
	return temp;
}

Money Money::operator/(int n) {

	Money temp;

	int dollar = 0, nickel = 0, quarter = 0, cents = 0;
	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());
	total = total / n;

	dollar = total / 100;
	total = total % 100;

	quarter = total / 25;
	total = total % 25;

	nickel = total / 5;
	total = total % 5;

	cents = total;

	temp.setDollar(dollar);
	temp.setNickel(nickel);
	temp.setQuarter(quarter);
	temp.setCent(cents);

	return temp;
}

Money Money::operator*(int n) {

	Money temp;

	int dollar = 0, nickel = 0, quarter = 0, cents = 0;
	int total = (getDollar() * 100) + (getQuarter() * 25) + (getNickel() * 5) + (getCent());
	total = total * n;

	dollar = total / 100;
	total = total % 100;

	quarter = total / 25;
	total = total % 25;

	nickel = total / 5;
	total = total % 5;

	cents = total;

	temp.setDollar(dollar);
	temp.setNickel(nickel);
	temp.setQuarter(quarter);
	temp.setCent(cents);

	return temp;
}
