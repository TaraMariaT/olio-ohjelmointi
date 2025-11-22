#include "Animal.h"
#include <iostream>

using namespace std;

Animal::~Animal() {
    cout << "Animal destructor" << endl;
}

void Animal::callOut() const {
    cout << "An animal makes noise" << endl;
}
