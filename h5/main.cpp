#include <iostream>
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"

using namespace std;

int main()
{

    int a = 5;

    cout << "a:n arvo on: " << a
         << " ja osoite on: " << &a << endl;

    int *pointerA = &a;

    cout << "Pointerin osoittama osoite on: " << pointerA << endl;
    cout << "Pointerin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    int &refA = a;

    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    int b = 6;

    refA = 100;
    cout << "a: " << a << ", refA: " << refA << endl;

    pointerA = &b;
    cout << "Pointerin osoittama osoite on: " << pointerA << endl;
    cout << "Pointerin osoittaman muistipaikan arvo on: " << *pointerA << endl;



    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB:  " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;



    ClassB &refB = objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");

    cout << "objB:  " << objB.getInfo() << endl;
    cout << "objA2: " << objA2.getBinfo() << endl;

    return 0;
}
