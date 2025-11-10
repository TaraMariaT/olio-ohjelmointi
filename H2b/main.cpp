#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;

    carList.push_back(Car("Fiat", "Punto", 2005));
    carList.push_back(Car("Ford", "Fiesta", 2002));
    carList.push_back(Car("Peugeot", "408", 2010));

    cout << "Second car on the list:" << endl;
    carList[1].printData();
    cout << endl;

    cout << "All cars on the list:" << endl;
    for (size_t i = 0; i < carList.size(); i++) {
        carList[i].printData();
    }

    return 0;
}
