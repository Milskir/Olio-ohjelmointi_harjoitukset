#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;

    carList.emplace_back("BMW", "i8", 2016);
    carList.emplace_back("Toyota", "Corolla", 2010);
    carList.emplace_back("Audi", "A4", 2018);

    cout << "Second car in the list:" << endl;
    carList[1].printData();

    cout << "\nAll cars:" << endl;
    for(const Car &car : carList)
    {
        car.printData();
    }

    return 0;
}
