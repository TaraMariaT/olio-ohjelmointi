#include <iostream>
#include <iomanip>
#include "h1_functions.h"

using namespace std;


int main()
{
    int a, b, c;
    float d;

    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    cout << endl;

    c = retSum(a, b);
    cout << a << " + " << b << " = " << c << endl;

    try {
        d = retDiv(a, b);
        cout << fixed << setprecision(2);
        cout << a << " / " << b << " = " << d << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
