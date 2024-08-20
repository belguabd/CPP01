#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}
void HumanB::setWeapon(Weapon newWeapon)
{
    this->weapon = newWeapon;
}

void HumanB::attack()
{
    std::cout << name << "attacks with their" << this->weapon.getType();
}