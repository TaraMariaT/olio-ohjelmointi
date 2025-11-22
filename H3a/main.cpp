#include <iostream>
#include "ItalianChef.h"
using namespace std;

int main()
{
    Chef kokki("Gordon Ramsay");

    kokki.makeSalad();
    kokki.makeSoup();

    ItalianChef chef("Anthony Bourdain");

    chef.makeSalad();
    chef.makeSoup();
    chef.makePasta();

    cout << "name of the Italian Chef is " << chef.getName() << endl;

    return 0;
}
