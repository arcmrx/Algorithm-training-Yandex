#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b)
    {
        std::cout << "YES";
        return 0;
    }
    else
    {
        std::cout << "NO";
        return 0;
    }
}