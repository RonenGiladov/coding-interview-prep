#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

std::vector<int> how_many_numbers_are_smaller(const std::vector<int>& nums)
{
    std::unordered_map<int, int> dictionary;
    std::vector<int> result(nums.size());
    std::vector<int> sorted_nums = nums;
    
    std::sort(sorted_nums.begin(), sorted_nums.end());
    dictionary[sorted_nums[0]] = 0; 

    for (size_t i = 1; i < nums.size(); i++)
    {
        if (sorted_nums[i] != sorted_nums[i-1])
        {
            dictionary[sorted_nums[i]] = static_cast<int>(i);
        }
    }

    for (size_t i = 0; i < nums.size(); i++)
    {
        result[i] = dictionary[nums[i]];
    }
    
    return result;
}


std::vector<int> how_many_numbers_are_smaller_brute_force(std::vector<int>& nums)
{
    std::vector<int> result;
    int number_of_smaller_numbers = 0;

    for (size_t i = 0; i < nums.size(); i++)
    {
        number_of_smaller_numbers = 0;
        for (size_t j = 0; j < nums.size(); j++)
        {
            if (j == i)
            {
                continue;
            }

            if (nums[i] > nums[j])
            {
                number_of_smaller_numbers++;
            }
        }

        result.push_back(number_of_smaller_numbers);
    }
    
    return result;
}
 
int main()
{

    std::vector<int> nums = {7,7,7,7};
    std::vector<int> nums2 = {6,5,4,8};
    std::vector<int> nums3 = {1,2,3,4};
    std::vector<int> nums4 = {1,2,2,3,8};

    std::vector<int> result = how_many_numbers_are_smaller(nums4);
    
    for (int num: result)
    {
        std::cout <<num << " ";
    }

    return 0;
}