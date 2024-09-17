

#pragma once

/* Muhammad Saad Mursaleen
   22I-0835
   Assignment # 3
   CS-C*/

#include"22i-0835_C_MetroStation.h"


class MetroSystem {
    MetroStation* metro;
    int tot;

public:
    // Constructor
    MetroSystem() : metro(nullptr), tot(0) {}

    // Destructor
    ~MetroSystem() {
        // Implement code to delete all MetroStation objects in the system
    }

    // Overload + operator to add a metro station
    MetroSystem& operator+(const MetroStation& station);

    // Overload - operator to remove a metro station
    MetroSystem& operator-(const string& name);

    int  gettot() {
        return tot;
    }

    //void MoveTrain(MetroStation* source, MetroStation* dest) {
    //    if (source && dest) {
    //        cout << "Train Moved from " << source->getName() << " to " << dest->getName() << endl;

    //        // Transfer the train to the destination station
    //        dest->setTrain(source->getTrain());

    //        // Clear the source station's currentTrain
    //        source->clearTrain();
    //    }
    //    else {
    //        cout << "Invalid source or destination station." << endl;
    //    }
    //}

 
    // Overload << operator for I/O handling
    friend ostream& operator<<(ostream& os, const MetroSystem& system) {
        MetroStation* temp = system.metro;
        while (temp != nullptr) {
            os << *temp << endl;
            temp = temp->nextStation;
        }
        return os;
    }


};
