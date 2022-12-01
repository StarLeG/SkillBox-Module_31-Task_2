#pragma once

#include <string>
#include "toy.h"

class Dog {
public:
    Dog(const std::string &name, smart_ptr_toy toy, int age);

    Dog();

    Dog(const std::string &name);

    Dog(int age);


private:
    std::string _name;
    int _age;
    smart_ptr_toy lovelyToy;

};
