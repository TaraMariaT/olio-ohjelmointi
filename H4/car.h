#ifndef CAR_H
#define CAR_H

#include <string>
#include "Engine.h"
#include "Wheel.h"
using namespace std;

class Car {
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

    string model;
    string brand;

public:
    Car();
    Car(string m, string b);

    void setEngine();
    void setWheels();

    string getModel();
    string getBrand();

    void setModel(string m);
    void setBrand(string b);

    void printDetails();
};

#endif
