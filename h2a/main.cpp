#include <iostream>
#include "car.h"
#include "rectangle.h"
#include <memory>
#include "student.h"

using namespace std;

int main()
{

    // Car
    Car myCar;

    myCar.setBrand("BMW");
    myCar.setModel("320i");
    myCar.setYearModel(2007);

    myCar.printData();


    // Rectangle
    Rectangle *rect = new Rectangle;

    rect->setWidth(8.0);
    rect->setHeight(5.0);

    cout << "Rectangle area: " << rect->getArea() << endl;
    cout << "Rectangle circum: " << rect->getCircum() << endl;

    delete rect;
    rect = nullptr;


    // Student
    shared_ptr<Student> student = make_shared<Student>();

    student->setName("Maija Meikalainen");
    student->setStudentNumber(66666);
    student->setAverage(4.25);

    cout << "Student name: " << student->getName() << endl;
    cout << "Student number: " << student->getStudentNumber() << endl;
    cout << "Student average: " << student->getAverage() << endl;

    return 0;
}
