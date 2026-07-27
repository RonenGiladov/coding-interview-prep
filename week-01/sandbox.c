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

    printf("\n\n----------\n\n");

    int foo = 7;
    char bar = 'h';
        char* test_ptr = &str;
        printf("%c", *(test_ptr + 2));
    if (foo != bar)
    {
        printf("aaa");
    }
    
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (i == 2)
            {
                break;
            }
            printf("\nj: %d", j);
        }
        
        printf("\n\n%d", i);
    }


    int arr4by4[4][4] = {{1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16}};
    
    printf("\n%d", arr4by4[1][2]);
   
    return 0;
}