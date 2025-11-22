#include "ItalianChef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string name)
    : Chef(name)   // kutsutaan kantaluokan konstruktor
{
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << name << " destruktori" << endl;
}

string ItalianChef::getName()
{
    return name;    // palautetaan kokin nimi
}

void ItalianChef::makePasta()
{
    cout << "Italian Chef " << name << " makes pasta" << endl;
}
