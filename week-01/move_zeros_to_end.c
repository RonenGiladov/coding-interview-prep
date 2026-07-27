#include <stdio.h>

void move_zeros_to_end(int arr[], size_t size)
{
    size_t start, end;
    start = 0;
    end = 1;

    if (size == 0)
    {
        printf("Invalid array size\n");
        return;
    }

    while (end < size)
    {
        if (arr[start] != 0)
        {
            start++;
            end++;
            continue;
        }

        while (end < size && arr[end] == 0)
        {
            end++;
        }

        if (end < size && arr[end] != 0)
        {
            arr[start] = arr[end];
            arr[end] = 0;
        }
        else
        {
            return;
        }

        start++;
        end++;
    }
    

}

void move_zeros_to_end_brute(int arr[], size_t size)
{
    if (size <= 0)
    {
        printf("Invalid array size\n");
        return;
    }

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            continue;
        }
        
        for (size_t j = i + 1; j < size; j++)
        {
            if (arr[j] == 0)
            {
                continue;
            }

            arr[i] = arr[j];
            arr[j] = 0;
            break;
        }
    }
}


int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    
    move_zeros_to_end(arr, sizeof(arr)/sizeof(int));
    for (size_t i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}