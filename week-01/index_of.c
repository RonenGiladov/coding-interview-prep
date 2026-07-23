#include <stdio.h>

int index_of(const int array[], size_t size, int number)
{
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == number)
        {
            return i;
        }
    }
    
    return -1;
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    printf("%d", index_of(array, 5, 3));
    return 0;
}