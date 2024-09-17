#pragma once
#include <iostream>


using namespace std;

struct MetroStation {
    char* stationName;
    MetroStation* nextStation;
    MetroStation* previousStation;


    MetroStation() {
        stationName = nullptr;
        nextStation = nullptr;
        previousStation = nullptr;
    }

    MetroStation(const string& name) :  nextStation(nullptr), previousStation(nullptr) {
        int x = 0;
        while (name[x] != '\0') {
            x++;
        }
        stationName = new char[x + 1];
        for (int i = 0; i <= x; i++) {
            stationName[i] = name[i];
        }
    }

    ~MetroStation() = default;

    MetroStation(const MetroStation& other) {
        int x = 0;
        while (other.stationName[x] != '\0') {
            x++;
        }

        stationName = new char[x + 1];
        for (int i = 0; i <= x; i++) {
            stationName[i] = other.stationName[i];
        }

       	nextStation = new MetroStation;
        nextStation = other.nextStation;
       	previousStation = new MetroStation;
        previousStation = (other.previousStation);
    }

    void setName(char* name) {
        int x = 0;
        while (name[x] != '\0') {
            x++;
        }
        stationName = new char[x + 1];
        for (int i = 0; i <= x; i++) {
            stationName[i] = name[x];
        }
    }


    char* getName() {
        {
            return stationName;
        }
    }


    friend ostream& operator<<(ostream& os, const MetroStation& station) {
        os << "Station Name: " << station.stationName;
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