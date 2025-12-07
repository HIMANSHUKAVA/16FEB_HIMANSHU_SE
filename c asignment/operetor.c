# include <stdio.h>

int main()
{
    int a, b;

    // Input from user
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    // Arithmetic operation
    printf("Sum = %d\n", a + b);

    // Relational operator
    if (a == b)
    {
        printf("hello\n");
    }

    // Logical + Modulus operator (Odd number check)
    if (a % 2 == 1)
    {
        printf("hello\n");
    }

    return 0;
}
