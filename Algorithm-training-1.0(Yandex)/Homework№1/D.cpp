#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if (c < 0)
    {
        std::cout << "NO SOLUTION";
        return 0;
    }
    else if ((a + b) == c * c && (2 * a + b) == c * c)
    {
        std::cout << "MANY SOLUTIONS";
        return 0;
    }
    else
    {
        if (a != 0 && (c * c - b) / a == (c * c - b))
        {
            std::cout << (c * c - b);
            return 0;
        }
        else
        {
            std::cout << "NO SOLUTION";
            return 0;
        }
    }
    return 0;
}