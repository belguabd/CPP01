
#include "Zombie.hpp"

int main()
{
    Zombie zombie;
    std::string name;
    int N;
    Zombie *ZombieHorde;
    N = 3;
    name = "THE WALKING DEAD";
    ZombieHorde = zombie.ZombieHorde(N, name);
    ZombieHorde[0].getName();
    for (int i = 0; i < N; i++)
        std::cout << ZombieHorde[i].getName() << std::endl;
    delete[] ZombieHorde;
}