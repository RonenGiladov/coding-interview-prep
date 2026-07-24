#include <stdio.h>
#include <assert.h>


int string_to_integer(const char* str)
{
    int converted_str = 0;
    int sign = 1;
    int flag = 1;
    assert(str != NULL);
    
    if (*str == '-')
    {
        sign = -1;
        str++;
    }

    for ( ; ((*str) >= 'a' && (*str) <= 'z') || ((*str) >= 'A' && (*str) <= 'Z'); str++)
    {
        converted_str = converted_str * 10 + ((*str) - 'a' + 1);
    }

    return sign*converted_str;
}

int string_number_to_integer(const char* str)
{
    int sign = 1;
    int converted_str = 0;

    assert(str != NULL);

    if (*str == '-')
    {
        sign = -1;
        str++;
    }

    for ( ; ((*str) >= '0' && (*str) <= '9'); str++)
    {
        converted_str = converted_str * 10 + ((*str) - '0');
    }

    return sign*converted_str;
}

int main()
{
    char str[] = {'a', 'b', 'c', '1', '2', '3', '\0'}; 
    const char* str2 = "abc123";
    printf("%d\n", string_to_integer(str));
    printf("%d", string_interger_to_integer(str2));
}