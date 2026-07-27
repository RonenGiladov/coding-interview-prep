#include <stdio.h>


void rotate_matrix(int n, int matrix[n][n])
{
    int temp_number = 0;
    int i = 0, j = 0;
    int size = n;
    for (i = 0; i < size; i++)
    {
        for (j = i+1; j < size; j++)
        {
            temp_number = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp_number;
        }
    }

    temp_number = 0;
    
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < (size / 2) ; j++)
        {
            temp_number = matrix[i][j];
            matrix[i][j] = matrix[i][size - j - 1];
            matrix[i][size - j - 1] = temp_number;
        }
    }
    
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    
    int matrix2[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

         
    int matrix3[2][2] = {{1, 2},
                        {3, 4}};


    rotate_matrix(2,matrix3);                 
    rotate_matrix(4,matrix);
    rotate_matrix(3,matrix2);        

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}