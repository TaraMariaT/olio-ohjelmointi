#include "Dog.h"
#include <iostream>

using namespace std;

Dog::~Dog() {
    cout << "Dog destructor" << endl;
}

void Dog::callOut() const {
    cout << "Dog barks!" << endl;
}
