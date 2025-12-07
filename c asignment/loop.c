#include <stdio.h>

int main()
{
    int p = 1;

    // FOR LOOP
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    // WHILE LOOP
    while (p < 10)
    {
        printf("%d ", p);
        p++;
    }

    printf("\n");

    // DO-WHILE LOOP
    int x = 1;
    do
    {
        printf("%d ", x);
        x++;
    }
    while (x <= 10);

    return 0;
}
