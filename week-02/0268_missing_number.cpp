#include <vector>
#include <iostream>

int misssing_number(std::vector<int> nums)
{
    int sum = 0;
    int n = nums.size();
    int expected_sum = (n*(n+1)) / 2;
    
    for (int num : nums)
    {
        sum += num;
    }

    return expected_sum - sum;
}

int main()
{
    std::vector<int> nums = {0,1,2,4};

    std::cout << misssing_number(nums);
}