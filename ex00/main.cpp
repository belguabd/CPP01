#include "Zombie.hpp"

int main()
{
    Zombie Z;
    Zombie *test;
    test = Z.newZombie("HOME");
    std::cout << test->getName();
    delete test;
}