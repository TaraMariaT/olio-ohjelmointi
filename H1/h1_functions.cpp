#include "h1_functions.h"
using namespace std;

void calcSum(int a, int b)
{
    int sum = a + b;
    cout << "The sum of the entered numbers is " << sum;
}

void calcDiv(int a, int b)
{
    cout << fixed << setprecision(2);
    if (b == 0) {
        cout << " and the division cannot be performed because the second number is zero." << endl;
    } else {
        float div = static_cast<float>(a) / b;
        cout << " and their division result is " << div << "." << endl;
    }
}

int retSum(int a, int b)
{
    return a + b;
}

float retDiv(int a, int b)
{
    if (b == 0)
        throw runtime_error("the divisor cannot be zero.");
    return static_cast<float>(a) / b;
}
