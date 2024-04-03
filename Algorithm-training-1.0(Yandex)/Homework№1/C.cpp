#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> nums{4};
    for (size_t i = 0; i < 4; ++i)
    {
        std::cin >> nums[i];
    }
    for (size_t i = 0; i < 4; ++i)
    {
        for (size_t j = 0; j < nums[i].size(); j++)
        {
            if (!isdigit(nums[i][j]))
            {
                nums[i].replace(j, 1, "");
            }
        }
        if (nums[i].size() == 7)
        {
            nums[i] = "8495" + nums[i];
        }
        if (nums[i].size() > 7)
        {
            nums[i].replace(0, 1, "8");
        }
        if (i > 0)
        {
            if (nums[i] == nums[0])
            {
                std::cout << "YES\n";
            }
            else
            {
                std::cout << "NO\n";
            }
        }
    }
    return 0;
}