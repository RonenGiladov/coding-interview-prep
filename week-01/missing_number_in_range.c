#include <stdio.h>
#include <assert.h>


int missing_number_in_range(const int* array, int n)
{
    int diff = n;

    assert(array != NULL);
    
    for (size_t i = 0; i < n; i++)
    {
        diff += i - *(array+i);
    }

    return diff;
}



int main()
{
    int array[] = {1,2,0};

    printf("%d", missing_number_in_range(array, 3));

    return 0;
}