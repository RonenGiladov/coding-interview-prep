#include <iostream>
#include <vector>

std::vector<int> find_all_missing_numbers(std::vector<int>& nums)
{
    std::vector<int> missing_numbers;
    int index = 0;

    for (int num : nums)
    {
        index = std::abs(num) - 1;
        if (nums[index] > 0)
        {
            nums[index] *= -1;
        }
    }

    for (size_t i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            missing_numbers.push_back(i+1);
        }
    }

    return missing_numbers;
}


int main()
{
    std::vector<int> nums = {1, 3, 3, 4, 1};
    std::vector<int> missing_numbers = find_all_missing_numbers(nums);
    for (int num : missing_numbers)
    {
        std::cout << num << " ";
    }
}