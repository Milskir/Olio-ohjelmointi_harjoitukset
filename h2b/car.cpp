#include "car.h"
#include <iostream>

using namespace std;

Car::Car(string b, string m, int y)
    : brand(b), model(m), yearModel(y)
{
}

void Car::printData() const
{
    cout << "Car: " << brand
         << ", model: " << model
         << ", year: " << yearModel << endl;
}
