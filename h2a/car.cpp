#include "car.h"
#include <iostream>

using namespace std;

Car::Car()
    : brand(""), model(""), yearModel(0)
{
}

void Car::printData() const
{
    cout << "Car: " << brand
         << ", model: " << model
         << ", year: " << yearModel << endl;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}
