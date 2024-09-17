#include"22i-0835_C_MetroStation.h"

/* Muhammad Saad Mursaleen
   22I-0835
   Assignment # 3
   CS-C*/


MetroStation::MetroStation(const string& name) : nextStation(nullptr), previousStation(nullptr), currentTrain(nullptr) {
    int x = 0;
    while (name[x] != '\0') {
        x++;
    }
    stationName = new char[x + 1];
    for (int i = 0; i <= x; i++) {
        stationName[i] = name[i];
    }
    totalTrains = 0;

}

MetroStation:: MetroStation(const string& name, train* initialTrain) : nextStation(nullptr), previousStation(nullptr), currentTrain(initialTrain) {
    int x = 0;
    while (name[x] != '\0') {
        x++;
    }
    stationName = new char[x + 1];
    for (int i = 0; i <= x; i++) {
        stationName[i] = name[i];
    }
    totalTrains = 1;

}

MetroStation::MetroStation(const MetroStation& other) {
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
    currentTrain = new train;
    currentTrain = other.currentTrain;

}

void MetroStation::setName(char* name) {
    int x = 0;
    while (name[x] != '\0') {
        x++;
    }
    stationName = new char[x + 1];
    for (int i = 0; i <= x; i++) {
        stationName[i] = name[x];
    }
}

void MetroStation::MoveTrain(MetroStation* dest) {
    cout << "Train Moved from " << this->getName() << " to " << dest->getName() << endl;

    // Transfer the train to the destination station
    dest->currentTrain->setTrainName(currentTrain->getTrainName());

    // Clear the source station's currentTrain
    currentTrain->setTrainName("No Train");
    totalTrains = 0;
}


MetroStation& MetroStation::operator+(train& t1) {

    cout << "Train " << t1.getTrainName() << " added to " << stationName << endl;
    train* temp = new train[totalTrains + 1];
    for (int i = 0; i < totalTrains; i++) {
        temp[i] = currentTrain[i];
    }

    temp[totalTrains] = t1;

    delete[] currentTrain;
    currentTrain = temp;
    totalTrains++;

    return *this;
}

MetroStation& MetroStation::operator-(train t1) {

    cout << "Train " << t1.getTrainName() << " removed from " << stationName << endl;
    int x = -1;
    for (int i = 0; i < totalTrains; i++) {
        if (currentTrain[i].getTrainName() == t1.getTrainName()) {
            x = i;
            break;
        }
    }

    if (x != -1) {
        for (int i = x; i < totalTrains - 1; i++) {
            currentTrain[i] = currentTrain[i + 1];
        }
        totalTrains--;
    }

    return *this;
}


void MetroStation::printtrains() {

    cout << "Total trains in station " << stationName << endl;
    for (int i = 0; i < totalTrains; i++) {
        cout << "Train : " << currentTrain[i].getTrainName() << endl;
    }
    cout << endl;
}