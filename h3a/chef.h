#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

class Chef
{
protected:
    std::string name;

public:
    Chef(std::string name);
    ~Chef();

    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H
