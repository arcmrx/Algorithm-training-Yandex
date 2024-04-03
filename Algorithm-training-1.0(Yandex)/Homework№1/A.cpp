#include <iostream>
#include <string>

int main()
{
    int troom, tcond;
    std::string tname;
    std::cin >> troom >> tcond >> tname;
    if(tname == "freeze")
    {
        std::cout << std::min(troom, tcond);
        return 0;
    }
    if(tname == "heat")
    {
        std::cout << std::max(troom, tcond);
        return 0;
    }
    if(tname == "auto")
    {
        std::cout << tcond;
        return 0;
    }
    if(tname == "fan")
    {
        std::cout << troom;
        return 0;
    }
    return 0;
}