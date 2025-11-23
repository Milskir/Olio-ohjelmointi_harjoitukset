#include "animal.h"
#include "dog.h"
#include <iostream>

using namespace std;

int main()
{
    Animal a;
    a.callOut();

    cout << "-----------------------" << endl;


    Dog d;
    d.callOut();

    cout << "-----------------------" << endl;


    Animal* poly = new Dog();
    poly->callOut();
    delete poly;

    return 0;
}
