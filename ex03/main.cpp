#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
int main()
{
    Weapon W;
    W.setType("AK75");
    HumanB B("HOME");
    B.attack();
    W.setType("MP5");
    B.attack();


}