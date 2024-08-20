
#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon)
{
    this->name = newName;
    this->weapon = newWeapon;
}

void HumanA::attack()
{
    std::cout << name << " Attacks with their " << HumanA::weapon.getType();
}