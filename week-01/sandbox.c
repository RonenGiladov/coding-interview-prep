#include <stdio.h>
#include <errno.h>

int main()
{
    double x = 5.0;
    int y = 5;
    unsigned int u_y = -5;
    int arr[] = {1, 2, 3, 4, 5};
    int* array_ptr = NULL;
    array_ptr = &arr[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array_ptr[i]);
    }

    int* ptr = NULL;
    ptr = &y;
    printf("\n%d", *ptr);
    //printf("%d", 2%1);
    //printf("x:%f, y:%u", x, u_y);

    if ('F' > 'A')
    {

        printf("\n%d", 'a' - 'a');
    }
    printf("\n\n");

    char str[] = {'a', 'b', 'c', 'd', '\0'};
    char* ptr_str = &str[0];
    char* temp_ptr = ptr_str;
    ptr_str = ptr_str+4-1;
    
    *ptr_str = 'a';
    ptr_str = temp_ptr;

    printf("%s", ptr_str);
    
    return 0;
}