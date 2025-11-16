#include "student.h"

using namespace std;

Student::Student()
    : name(""), studentNumber(0), average(0.0)
{
}

// Setterit
void Student::setName(const string &newName)
{
    name = newName;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}

// Getterit
string Student::getName() const
{
    return name;
}

int Student::getStudentNumber() const
{
    return studentNumber;
}

double Student::getAverage() const
{
    return average;
}
