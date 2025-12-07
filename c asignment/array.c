//  Write a C program that stores 5 integers in a one-dimensional array and prints
// them. Extend this to handle a two-dimensional array (3x3 matrix) and
// calculate the sum of all elements

#include <stdio.h>

int main()
{
    int arr[5];
    int matrix[3][3];
    int sum = 0;

    //  Input for 1D Array
    printf("Enter 5 integers for 1D array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Print 1D Array
    printf("\n1D Array Elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    //  Input for 2D Array (3x3 Matrix)
    printf("Enter elements for 3x3 Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];   //  Sum calculation
        }
    }


    printf("\n3x3 Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    printf("\nSum of all elements in 3x3 matrix = %d", sum);

    return 0;
}
