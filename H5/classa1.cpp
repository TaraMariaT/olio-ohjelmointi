#include "ClassA1.h"
using namespace std;

ClassA1::ClassA1(ClassB value):objectB(value)
{
}

string ClassA1::getBinfo()
{
    return objectB.getInfo();
}

void ClassA1::setBinfo(string value)
{
    objectB.setInfo(value);
}
