#include"22i-0835_C_MetroSystem.h"

/* Muhammad Saad Mursaleen
   22I-0835
   Assignment # 3
   CS-C*/

MetroSystem& MetroSystem::operator+(const MetroStation& station) {
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

MetroSystem& MetroSystem::operator-(const string& name) {
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

