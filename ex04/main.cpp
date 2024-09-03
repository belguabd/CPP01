#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
    if(ac != 3)
        std::cerr << "Usage: ./replace filename s1 s2" << std::endl;
    std::fstream fs;
    fs.open("test.txt", std::fstream::in | std::fstream::out);
    if (!fs.is_open())
    {
        std::cerr << "Error opening file." << std::endl;
        return (1);
    }
    std::string line;
    std::string stringFound = av[1];
    std::string stringReplace = av[2];
    std::string result;
    while (getline(fs, line))
        result += line + '\n';
    size_t i = 0;
    std::string newResult;
    while (i < result.size())
    {
        if (result.substr(i, stringFound.size()) == stringFound)
        {
            newResult += stringReplace;
            i += stringFound.size();
        }
        else
            newResult += result[i++];
    }
    fs.close();
    fs.open("test.txt", std::fstream::out | std::fstream::trunc);
    fs << newResult;
}
