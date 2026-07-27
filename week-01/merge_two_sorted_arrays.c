#include <stdio.h>
#include <assert.h>


void merge_two_sorted_arrays(int* nums1, int* nums2, int size_1, int size_2)
{
    int nums1_i, nums2_i, write_i;
    nums1_i = size_1 - size_2 - 1;
    nums2_i = size_2 - 1;
    write_i = size_1 - 1;

    assert(nums1 != NULL && nums2 != NULL);
    
    if (size_1 < 2 || size_2 == 0) 
    {
        printf("invalid size for array");
        return;
    }

    while (nums2_i >= 0)
    {
        if (nums1[nums1_i] > nums2[nums2_i])
        {
            nums1[write_i] = nums1[nums1_i];
            nums1_i--;
        }
        else if (nums1[nums1_i] <= nums2[nums2_i])
        {
            nums1[write_i] = nums2[nums2_i];
            nums2_i--;
        }

        write_i--;
    }
}

int main()
{
    int num1[] = {1, 2, 3, 4, 5, 0, 0};
    int num2[] = {1, 2};
    merge_two_sorted_arrays(num1, num2, 7, 2);
    for (size_t i = 0; i < 6; i++)
    {
        printf("%d ", num1[i]);
    }
    
    return 0;
}