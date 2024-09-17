#include"MetroSystem.h"
#include"22i-0835_C_Train.h"
#include"22i-0835_C_Coach.h"
#include"22i-0835_C_Seat.h"


int main() {

    //QUESTION 2

    train t;
    cout << t;

    coach c(5);
    coach c2(2);
    t = t + c;
    cout << t;
    t = t + c2;
    cout << t;

    seat s;
    t = t + s;
    cout << t;

    t = t - s;
    t = t - c2;
    cout << t;



  //  //QUESTION  3 4
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


  //  cout << metroSystem.gettot() << endl;


    return 0;
}