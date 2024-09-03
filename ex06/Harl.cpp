#include "Harl.hpp"

void Harl::printDebug(void)
{
    std::cout << "[ DEBUG ] This is a debug message." << std::endl;
    // std::cout << "[ INFO ] This is an info message." << std::endl;
    // std::cout << "[ WARNING ] This is a warning message." << std::endl;
    // std::cout << "[ ERROR ] This is an error message." << std::endl;
}

void Harl::printInfo(void)
{
    std::cout << "[ INFO ] This is an info message." << std::endl;
    // std::cout << "[ WARNING ] This is a warning message." << std::endl;
    // std::cout << "[ ERROR ] This is an error message." << std::endl;
}

void Harl::printWarning(void)
{
    std::cout << "[ WARNING ] This is a warning message." << std::endl;
    // std::cout << "[ ERROR ] This is an error message." << std::endl;
}

void Harl::printError(void)
{
    std::cout << "[ ERROR ] This is an error message." << std::endl;
}
void Harl::printDefault(void)
{
    std::cout << "This is an unknown message." << std::endl;
}

int Harl::getLevel(std::string level)
{
    if (level == "DEBUG")
        return (DEBUG);
    else if (level == "INFO")
        return (INFO);
    else if (level == "WARNING")
        return (WARNING);
    else if (level == "ERROR")
        return (ERROR);
    return (UNKNOWN);
}

void Harl::complain(std::string level)
{
    int levelCase;

    levelCase = getLevel(level);
    switch (levelCase)
    {
        case DEBUG:
            printDebug();
        case INFO:
            printInfo();
        case WARNING:
            printWarning();
        case ERROR:
            printError();
            break;
        default:
            printDefault();
    }
}