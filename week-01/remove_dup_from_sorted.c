#include <stdio.h>
#include <assert.h>

/*int remove_dup_from_sorted(int* arr, size_t size)
{
    int start, end, current_big_num, temp_num;
    int* og_arr = NULL;

    assert(arr != NULL);

    start = 1;
    end = 2;
    current_big_num = *arr;
    temp_num = 0;
    og_arr = arr;

    if (size == 0)
    {
        printf("invalid array size");
        return -1;
    }
    if (size == 1)
    {
        return 1;
    }
    if (size == 2)
    {
        return *(arr+1);
    }

    while (end < size)
    {
        if (*(arr+start) <= current_big_num)
        {
            while (end < size && *(arr + end) <= current_big_num)
            {
                end++;
            }
            if (end >= size)
            {
                return start;
            }

            temp_num = *(arr + end);
            arr = arr + start;
            *arr = temp_num;
            arr = og_arr;
            current_big_num = temp_num;
            end++;
            start++;
        }
    }

    return start;
}*/

int remove_dup_from_sorted(int* arr, int size)
{
    assert(arr != NULL);

    if (size <= 1)
    {
        return size;
    }

    int write_idx = 1;

    for (int read_idx = 1; read_idx < size; read_idx++)
    {
        if (*(arr + read_idx) != *(arr + write_idx - 1))
        {
            *(arr + write_idx) = *(arr + read_idx);
            write_idx++;
        }
    }

    return write_idx;
}



int main()
{
    int arr[] = {1, 1, 1, 2, 2, 3, 3};
    int size = sizeof(arr) / sizeof(int);
    printf("%d\n", remove_dup_from_sorted(arr, size));
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}