#include <iostream>
#include <iomanip>

using namespace std;

void calcSum(int a, int b);
void calcDiv(int a, int b);
int retSum (int a, int b);
float retDiv (int a, int b);

int main()
{
    int a, b, c;
    float d;

    cout << "Enter the first integer" << endl;
    cin>>a;
    cout << "Enter the second integer" << endl;
    cin>>b;

    calcSum(a,b);
    calcDiv(a,b);

    cout << "" << endl;

    c = retSum(a,b);
    cout << a << "+" <<  b << " = " <<c<< endl;
    try {
        d = retDiv(a,b);
        cout << fixed << setprecision(2);
        cout << a << "/" <<  b << " = " <<d<< endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }
    return 0;
}

void calcSum(int a, int b)
{
    int sum = a+b;
    cout << "The sum of the entered numbers is "<<sum;
}

void calcDiv(int a, int b)
{
    cout << fixed << setprecision(2);
    if (b == 0) {
        cout << " and division of them cannot be performed because the second number is zero"<< endl;
    }
    else {
        float div = static_cast<float>(a) / b;
        cout << " and their division result is "<<div<< endl;
    }
}

int retSum (int a, int b)
{
    return a+b;
}

float retDiv (int a, int b)
{
    if (b == 0)
        throw runtime_error("The divisor (second number) cannot be zero.");
    return static_cast<float>(a) / b;
}
