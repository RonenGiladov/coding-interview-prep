#include <stdio.h>
#include <stddef.h>


int move_elements(int array[], size_t size, size_t count)
{
    int temp = 0;

    if (count > size)
    {
        printf("invalid count number");

        return -1;
    }

    for (size_t i = 0; i < count; i++)
    {
        temp = array[0];
        for (size_t j = 0; j < size - 1; j++)
        {
            array[j] = array[j+1];
        }

        array[size-1] = temp;    
    }
    
}

int main()
{
    int array[] = {3, 7, 2, 8, 5, 9, 1, 4};

    move_elements(array, sizeof(array)/sizeof(int), 3);
    for (size_t i = 0; i < 8; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}