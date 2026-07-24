#include <stdio.h>
#include <assert.h>
#include <string.h>

void string_reversal_old_version(char* str)
{
    int length, i;
    char temp_char_first, temp_char_last;
    char* temp_str;
    char* orignal_str_placement;

    temp_char_first = ' ';
    temp_char_last = ' ';
    length = 0;
    i = 0;

    assert(str != NULL);
    
    temp_str = str;
    orignal_str_placement = str;

    for (; *str != '\0'; str++)
    {
        length++;
    }

    str = orignal_str_placement;

    for (i = 0; i < length / 2; i++)
    {
        temp_str = str;
        temp_char_first = *str;
        str = orignal_str_placement + length - 1 - i;
        temp_char_last = *str;
        *str = temp_char_first;
        str = temp_str;
        *str = temp_char_last;
        str++;
    }
}


void string_reversal(char* str)
{
    char* end;
    char temp_char;

    assert(str != NULL);

    end = str;
    temp_char = ' ';

    while (*end != '\0')
    {
        end++;
    }

    if (*str == *end)
    {
        return;
    }

    end--;

    while (str < end)
    {
        temp_char = *str;
        *str = *end;
        *end = temp_char;
        str++;
        end--;
    }
}

int main()
{
    char str[] = {'e', 'm', 'b', 'e', 'd', 'd', 'e', 'd', '\0'};
    char* str2 = "embedded";
    string_reversal(str);
    printf("%s", str);
    return 0;
}