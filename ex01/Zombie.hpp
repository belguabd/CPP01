#pragma once
#include "Zombie.hpp"
#include <iostream>
class Zombie
{

public:
    Zombie *ZombieHorde(int N, std::string name);
    std::string getName();
    void setName(std::string name);
    void announce(void);
    
private:
    std::string name;
};
