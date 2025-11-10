#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>

using namespace std;

int main()
{
    // Car
    Car car1;

    car1.setBrand("Fiat");
    car1.setModel("Punto");
    car1.setYearModel(2005);

    cout << "Car info:" << endl;
    car1.printData();
    cout << endl;

    //Rectangle
    Rectangle* rectangle1 = new Rectangle;

    rectangle1->setWidth(50);
    rectangle1->setHeight(25);

    cout << "Rectangle info:" << endl;
    cout << "Area: " << rectangle1->getArea() << endl;
    cout << "Circumference: " << rectangle1->getCircum() << endl;
    cout << endl;

    delete rectangle1;

    //Student
    shared_ptr<Student> student1 = make_shared<Student>();

    student1->setName("Jane Doe");
    student1->setStudentNumber(11111);
    student1->setAverage(3.9);

    cout << "Student info:" << endl;
    cout << "Name: " << student1->getName() << endl;
    cout << "Student number: " << student1->getStudentNumber() << endl;
    cout << "Average: " << student1->getAverage() << endl;

    return 0;
}
