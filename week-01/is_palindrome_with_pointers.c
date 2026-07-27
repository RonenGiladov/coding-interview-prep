#include <stdio.h>
#include <assert.h>

int is_palindrome_with_pointers(const char* str)
{
    const char* end;

    assert(str != NULL);

    end = str;

    while (*end != '\0')
    {
        end++;
    }

    if (*str == *end)
    {
        return 0;
    }

    end--;

    while (str < end)
    {
        if (*str != *end)
        {
            return 0;
        }

        str++;
        end--;
    }

    return 1;
}



int main()
{
    char str[] = {'r', 'a', 'c', 'e', 'c', 'a', 'r', '\0'};
    printf("%d", is_palindrome_with_pointers("raccar"));
    //printf("%d", is_palindrome_with_pointers(str));

    return 0;
}