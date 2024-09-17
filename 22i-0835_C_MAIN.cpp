#include"22i-0835_C_MetroSystem.h"
#include"22i-0835_C_Train.h"
#include"22i-0835_C_Coach.h"
#include"22i-0835_C_Seat.h"
#include"22i-0835_C_Triangle.h"
#include"22i-0835_C_Money.h"
#include"22i-0835_C_Point.h"


/* Muhammad Saad Mursaleen
   22I-0835
   Assignment # 3
   CS-C*/

//#include<iostream>
//using namespace std;

int main() {

	//QUESTION 1

	//	triangle t1(1, 1, 1, 1, 1, 1);
	//cout << t1.calculateArea() << endl;
	//t1.check();
	//t1.display();
	//triangle t2(0, 0, 10, 0, 5, 15);
	//if (t1 == t2) {
	//	cout << "EQUAL\n";
	//}
	//else {
	//	cout << "NOT EQUAL\n";
	//}

	//t2.display();


	

  //QUESTION 2

	//train t;
	//cout << t;

	//coach c(5);
	//coach c2(2);
	//t = t + c;
	//cout << t;
	//t = t + c2;
	//cout << t;

	//seat s;
	//t = t + s;
	//cout << t;

	//t = t - s;
	//t = t - c2;
	//cout << t;



	////  //QUESTION  3 
	//  // Example of using the MetroSystem class
	//  MetroSystem metroSystem;

	//  MetroStation station1("Station A");
	//  MetroStation station2("Station B");
	//  MetroStation station3("Station C");


	//  metroSystem = metroSystem + station1 + station2 + station3;
	//  cout << "Metro System:" << endl << metroSystem;
	////  cout << metroSystem.gettot() << endl;

	//  metroSystem = metroSystem - "Station B";
	//  cout << "Metro System after removing Station B:" << endl << metroSystem;

	//  metroSystem = metroSystem - "Station A";
	//  cout << "Metro System after removing Station A:" << endl << metroSystem;

	//  metroSystem = metroSystem + station1;
	//  cout << "Metro System after adding Station A:" << endl << metroSystem;

	//  MetroStation station4;

	//  cout << endl<< "ENTER NEW STATION : ";
	//  cin >> station4;

	//  metroSystem = metroSystem + station4;
	//  cout << "Metro System after adding new station:" << endl << metroSystem;


	 // cout << metroSystem.gettot() << endl;


	  //cout << "QUESTION 4" << endl << endl;

	  //MetroSystem metroSystem2;

	  //train* t1=new train("Khyber");
	  //train* t2=new train("Sindh");
	  //train* t3=new train("Punjab");
	  //train* t5=new train("FURY");
	  //train* t6=new train("MAV");
	  //train* t7=new train("hahaha");


	  //MetroStation station4("Station A",t1);
	  //MetroStation station5("Station B",t2);
	  //MetroStation station6("Station C",t3);



	  //metroSystem2 = metroSystem2+station4 + station5 + station6;

	  //cout << "MetroSystem At Start : \n" << endl << metroSystem2;

	  //station5.MoveTrain(&station6);
	  //station4.MoveTrain(&station5);
	  //
	  //cout <<  metroSystem2;


	  //MetroStation station7("Police Lines");

	  //station7 = station7 + *t6;
	  //station7 = station7 + *t5;
	  //station7 = station7 + *t7;
	  //station7.printtrains();

	  //station7 = station7 - *t5;
	  //station7.printtrains();





//QUESTION 5

	Money m1(1.51);
	Money m2(2.33);
	cout << m1.getDollar() << endl;
	cout << m1.getQuarter() << endl;
	cout << m1.getNickel() << endl;
	cout << m1.getCent() << endl;

	Money m3;
	Dollar d1;
	Quarter q1;
	Nickel n1;
	Cent c1;
	q1.setQuarter(3);
	n1.setNickel(7);
	c1.setCent(50);
	d1.setDollar(2);
	m3 = ++m1;

	cout << m3.getDollar() << endl;
	cout << m3.getQuarter() << endl;
	cout << m3.getNickel() << endl;
	cout << m3.getCent() << endl;

	if (m3 >= m1) {
		cout << "m3 greater";
	}



		return 0;

}