#include <stdio.h>
#include <assert.h>

int find_duplicate(int* nums, size_t size)
{
    int current_num = 0;

    assert(nums != NULL);

    for (size_t i = 0; i < size; i++)
    {
        
        if (nums[i] < 0)
        {
            current_num = (nums[i] * -1) - 1;
        }
        else
        {
            current_num = nums[i] - 1;
        }

        if (nums[current_num] < 0)
        {
            return (current_num + 1);
        }

        nums[current_num] *= -1;
    }

    return 0;
}




int main()
{
    int nums[] = {5,4,1,3,1};
    printf("%d", find_duplicate(nums, sizeof(nums)/sizeof(int)));
    return 0;
}