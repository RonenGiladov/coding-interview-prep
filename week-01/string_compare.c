#include <stdio.h>
#include <assert.h>

int string_compare1(const char* str1, const char* str2)
{
    for ( ; *str1 != '\0' && *str2 != '\0'; str1++, str2++)
    {
        if ((*str1) - 48 > (*str2) - 48)
        {
            return 1;
        }
        if ((*str1) - 48 < (*str2) - 48)
        {
            return -1;
        }
    }

    if (*str1 == '\0' && *str2 != '\0')
    {
        return -1;
    }
    if (*str2 == '\0' && *str1 != '\0')
    {
        return 1;
    }

    return 0;
}

int string_compare(const char* str1, const char* str2)
{
    assert(str1 != NULL && str2 != NULL);
     
    for ( ; *str1 != '\0' && *str2 != '\0'; str1++, str2++)
    {
        if ((*str1) < (*str2))
        {
            return -1;
        }
        if ((*str1) > (*str2))
        {
            return 1;
        }
    }

    if (*str1 == '\0' && *str2 != '\0')
    {
        return -1;
    }
    if (*str2 == '\0' && *str1 != '\0')
    {
        return 1;
    }

    return 0;

}

int main()
{
    char str1[] = {'F', 'a', 'n', '\0'}, str2[] = {'F', 'u', 'n', '\0'};
    printf("%d", string_compare(str1, str2));
    return 0;
}