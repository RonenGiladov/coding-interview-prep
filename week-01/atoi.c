#include <stdio.h>
#include <assert.h>

long atoi(const char* str)
{
    long string_as_number;
    int sign;
    int current_digit;

    assert(str != NULL);

    string_as_number = 0;
    sign = 1;
    current_digit = 0;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }

    for (; (*str) != '\0' && (*str) >= '0' && (*str) <= '9'; str++)
    {
        current_digit = (*str) - '0';
        string_as_number = string_as_number * 10 + current_digit;
    }

    return sign*string_as_number;
}

int main()
{
    char str[] = {'-','1', '2', '3','a', 'b', '\0'};
    printf("%ld", atoi(str));
    
    return 0;
}