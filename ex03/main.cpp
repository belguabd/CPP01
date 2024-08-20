#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{

    Weapon club = Weapon("AK75");
    HumanB B("HELLO WORLD");
    B.setWeapon(club);
    B.attack();
    club.setType("MP5");
    B.attack();

    // Weapon club = Weapon("hello");
    // std::cout << club.getType();

    // {
    //     Weapon()
    //     HumanA bob("Bob", club);
    //     bob.attack();  // Output: Bob attacks with their crude spiked club
    //     club.setType("some other type of club");
    //     bob.attack();  // Output: Bob attacks with their some other type of club
    // }
    // {
    //     Weapon club("crude spiked club");
    //     HumanB jim("Jim");
    //     jim.setWeapon(club);
    //     jim.attack();  // Output: Jim attacks with their crude spiked club
    //     club.setType("some other type of club");
    //     jim.attack();  // Output: Jim attacks with their some other type of club
    // }

    return 0;
}
