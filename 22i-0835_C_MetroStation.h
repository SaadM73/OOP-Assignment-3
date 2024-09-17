#pragma once
#include <iostream>
#include"22i-0835_C_Train.h"

/* Muhammad Saad Mursaleen
   22I-0835
   Assignment # 3
   CS-C*/

using namespace std;

struct MetroStation {
    char* stationName;
    MetroStation* nextStation;
    MetroStation* previousStation;
    train* currentTrain;
    int totalTrains;


    MetroStation() {
        stationName = nullptr;
        nextStation = nullptr;
        previousStation = nullptr;
        currentTrain = nullptr;
        totalTrains = 0;
    }

    MetroStation(const string& name);

    MetroStation(const string& name, train* initialTrain);

    ~MetroStation() = default;

    MetroStation(const MetroStation& other);

    void setName(char* name);


    char* getName() {
        {
            return stationName;
        }
    }

    void MoveTrain(MetroStation* dest);

    void setTrain(train* Train) {
        currentTrain = Train;

    }

    MetroStation& operator+(train& t1);


    MetroStation& operator-(train t1);


    void printtrains();


    friend ostream& operator<<(ostream& os,  MetroStation& station) {
        os << "Station Name: " << station.stationName << endl;

        if (station.currentTrain == nullptr) {
            os << "No Train" << endl;
        }
        else {
            os << "Train : " << station.currentTrain->getTrainName() << endl;
        }
        return os;
    }

    friend istream& operator>>(istream& is, MetroStation& station) {
        const int Size = 100; 
        char buffer[Size];
        is >> buffer;

        int length = 0;
        while (buffer[length] != '\0') {
            length++;
        }

        station.stationName = new char[length + 1];
        for (int i = 0; i <= length; i++) {
            station.stationName[i] = buffer[i];
        }

        return is;
    }
};