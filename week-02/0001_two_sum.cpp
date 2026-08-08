#include <vector>
#include <iostream>
#include <unordered_map>

std::vector<int> two_sum(std::vector<int> nums, int target)
{
    std::unordered_map<int, int> dictionary;
    int diff = 0;
    
    for (int i = 0; i < nums.size(); i++)
    {
        diff = target - nums[i];
        if (dictionary.find(nums[i]) != dictionary.end())
        {            
            return {dictionary[nums[i]], i};
        }
        else
        {
            dictionary[diff] = i;
        }
    }

    return {};
}

int main()
{
    std::vector<int> nums = {2, 7, 11, 15};
    std::vector<int> nums2 = {3, -1, -5};
    int target = 9;
    int target2 = -6;
    std::vector<int> result = two_sum(nums, target);

    std::cout << result[0] << " " << result[1];
    
    return 0;
}
