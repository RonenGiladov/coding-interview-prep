#include <stdio.h>
#include <stddef.h>
#include <assert.h>

int string_length(const char* string_ptr)
{
    const char* temp_string_ptr = string_ptr;
    
    assert(string_ptr != NULL);

    for (; *string_ptr != '\0'; string_ptr++) { }

    return string_ptr - temp_string_ptr;
}

int main()
{
    char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};
    printf("%d", string_length(str));
    return 0;
}