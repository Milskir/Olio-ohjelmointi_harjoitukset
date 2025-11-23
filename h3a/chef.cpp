#include "Chef.h"

using namespace std;

Chef::Chef(string name) : name(name)
{
    cout << "Chef " << this->name << " konstruktori" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << this->name << " destruktori" << endl;
}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup" << endl;
}
