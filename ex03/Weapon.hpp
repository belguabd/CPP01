#pragma once
#include <iostream>
class Weapon
{
public:
    Weapon(const std::string &type);
    const std::string &getType();
    void setType(const std::string newType);

private:
    std::string type;
};
