#pragma once
#include <string>

class Toy {
public:
    Toy(const std::string &name);
    Toy();
private:
    std::string _name;
};

class smart_ptr_toy
{
public:
    smart_ptr_toy();
    smart_ptr_toy(const std::string &name);
    smart_ptr_toy(const smart_ptr_toy& other);
    smart_ptr_toy& operator = (const smart_ptr_toy& other);
    ~smart_ptr_toy();
    void reset();
    private:
    Toy* _obj;
    int* refCounter = nullptr;

};

smart_ptr_toy make_shared_toy(const std::string& name);


