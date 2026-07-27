#include <stdio.h>
#include <assert.h>

void move_array_by_one(int* arr, int size)
{
    int prev, next, i;

    assert(arr != NULL);

    if (size < 2)
    {
        return;
    }
    if (size == 2)
    {
        arr[1] = arr[0];
        arr[0] = 0;
        return;
    }

    prev = arr[0];
    next = arr[1];
    i = 1;

    while (arr[i] != 0)
    {
        arr[i] = prev;
        prev = next;
        next = arr[i + 1];
        i++;
    }

    arr[i] = prev;
    arr[0] = 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 0};

    move_array_by_one(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}