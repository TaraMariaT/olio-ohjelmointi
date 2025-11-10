#include "car.h"
#include <iostream>
using namespace std;

Car::Car(const string& b, const string& m, int y)
    : brand(b), model(m), yearModel(y) { }

void Car::printData() const {
    cout << "Brand: " << brand << ", "
         << "Model: " << model << ", "
         << "Year: " << yearModel << endl;
}
