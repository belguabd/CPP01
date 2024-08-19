#include <iostream>

class Zombie
{
public:
    void announce(void);
    std::string getName(void);
    void setName(std::string name);
    Zombie *newZombie(std::string name);
    void randomChump(std::string name);

private:
    std::string name;
};