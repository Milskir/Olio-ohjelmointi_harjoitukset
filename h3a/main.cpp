#include "Chef.h"
#include "ItalianChef.h"
#include <iostream>
using namespace std;

int main()
{
    Chef basic("Gordon Ramsay");
    basic.makeSalad();
    basic.makeSoup();

    cout << "---------------------" << endl;

    ItalianChef italian("Anthony Bourdain");
    italian.makeSalad();
    italian.makeSoup();
    italian.makePasta();

    cout << "name of the Italian Chef is " << italian.getName() << endl;

    return 0;
}
