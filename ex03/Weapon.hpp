#pragma once
#include <iostream>
class Weapon
{
public:
    const std::string &getType();
    void setType(const std::string &newType);

private:
    std::string type;
};
