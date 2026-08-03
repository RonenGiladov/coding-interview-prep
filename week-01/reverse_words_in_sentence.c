#include <stdio.h>
#include <assert.h>
#include <stddef.h>


static void reverse_word(char* str, size_t start, size_t end)
{
    char temp_c = ' ';

    assert(str != NULL);

    while (start < end)
    {
        temp_c = str[start];
        str[start] = str[end];
        str[end] = temp_c;
        start++;
        end--;
    }

}

void reverse_words_in_sentence(char* str, size_t size)
{
    char temp_c;
    size_t start, end;
    size_t i;
    assert(str != NULL);

    temp_c = ' ';
    start = 0;
    end = size - 1;
    i = 0;

    if (size < 1)
    {
        printf("invalid array size");
        return;
    }

    while (start < end)
    {
        temp_c = str[start];
        str[start] = str[end];
        str[end] = temp_c;
        start++;
        end--;
    }

    start = 0;
    
    for (i = 0; i < size; i++)
    {
        if (str[i] == ' ')
        {
            reverse_word(str, start, i-1);
            start = i + 1;
        }
    }

    reverse_word(str, start, size-1);
}

int main()
{
    char* str = "the sky is blue";
    char str2[] = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e', '\0'};
    char str3[] = "the sky is blue";

    reverse_words_in_sentence(str2, 15);
    printf("%s", str2);

    return 0;
}