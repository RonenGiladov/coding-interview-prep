#include <stdio.h>
#include <assert.h>

int find_non_repeating_integer(const int* array, size_t size)
{
    size_t j = 0;
    size_t i = 0;

    assert (array != NULL);

    if (size == 0)
    {
        printf("invalid array\n");
        return -1;
    }

    if (size == 1)
    {
        return array[0];
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++) 
        {
            if (i == j)
            {
                continue;
            }
            if (array[i] == array[j])
            {
                break;
            }     
            if (j == size-1)
            {
                return array[i];
            }
        }
    }
    
    printf("no non_repeating_integer found\n");

    return -1;
}

int main()
{
    int array[] = {1, 2, 3, 1, 2, 3};

    printf("%d", find_non_repeating_integer(array, 6));
    return 0;
}