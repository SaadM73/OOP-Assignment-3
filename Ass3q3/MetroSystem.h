
#pragma once
#include"MetroStation.h"

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
    MetroSystem& operator+(const MetroStation& station) {
        if (metro != nullptr) {
            MetroStation* temp = metro;
            while (temp->nextStation != nullptr) {
                temp = temp->nextStation;
            }
            temp->nextStation = new MetroStation(station);
            temp->nextStation->previousStation = temp;

        }
        else {
            metro = new MetroStation(station);
        }
        tot++;
        return *this;
    }

    // Overload - operator to remove a metro station
    MetroSystem& operator-(const string& name) {
        MetroStation* temp = metro;
        while (temp != nullptr) {
            if (temp->stationName == name) {
                if (temp->previousStation != nullptr) {
                    temp->previousStation->nextStation = temp->nextStation;
                }
                else {
                    metro = temp->nextStation;
                }
                if (temp->nextStation != nullptr) {
                    temp->nextStation->previousStation = temp->previousStation;
                }
                delete temp;
                break;
            }
            temp = temp->nextStation;
        }
        tot--;
        return *this;
    }

    int  gettot() {
        return tot;
    }

    // Overload = operator to store a metro station
    //MetroSystem& operator=(const MetroSystem& other) {
    //    if (this != &other) {
    //        // Implement code to deep copy the MetroSystem
    //    }
    //    return *this;
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
