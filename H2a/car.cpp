#include "car.h"
using namespace std;

void Car::printData() const {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year model: " << yearModel << endl;
}

void Car::setBrand(const string& newBrand) {
    brand = newBrand;
}

void Car::setModel(const string& newModel) {
    model = newModel;
}

void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel;
}
