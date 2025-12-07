#include <stdio.h>

int main()
{
    int a = 10;      // normal variable
    int *p;          // pointer variable

    p = &a;          // store address of 'a' in pointer 'p'

    printf("Before modification:\n");
    printf("Value of a = %d\n", a);


    *p = 25;

    printf("\nAfter modification using pointer:\n");
    printf("Value of a = %d\n", a);

    return 0;
}
