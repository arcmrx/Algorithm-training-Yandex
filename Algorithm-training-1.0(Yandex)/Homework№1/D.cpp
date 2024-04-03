#include <iostream>
#include <cmath>

// 5 - WA

int main()
{
    int a, b, c, cnt = 0;
    std::cin >> a >> b >> c;
    if (a == 0 && sqrt(b) == c)
    {
        std::cout << "MANY SOLUTIONS";
        return 0;
    }
    for (float x = 0; x <= c * c * c; ++x)
    {
        if (sqrt(a * x + b) == c && x == int(x))
        {
            std::cout << x << " ";
            cnt++;
        }
    }
    if (cnt == 0)
    {
        std::cout << "NO SOLUTION";
        return 0;
    }
    return 0;
}