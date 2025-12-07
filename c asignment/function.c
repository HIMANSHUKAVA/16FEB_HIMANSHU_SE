// Write a C program that calculates the factorial of a number using a function.
// Include function declaration, definition, and call.

#include <stdio.h>


int factorial(int n) /* define the function*/
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n, result;

    printf("Enter The Number: ");
    scanf("%d", &n);

// call the function
    result = factorial(n);

    printf("The factorial is : %d", result);

    return 0;
}
