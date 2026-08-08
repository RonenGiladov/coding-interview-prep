#include <unordered_map>
#include <vector>
#include <iostream>

bool contains_duplicate(std::vector<int> nums)
{
    std::unordered_map<int, int> dictionary;

    for (const int& num : nums)
    {
        dictionary[num] += 1;
        
        if (dictionary[num] > 1)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    std::vector<int> nums = {1, 2, 3, 1};
    std::cout << (contains_duplicate(nums) ? "true" : "false");
}