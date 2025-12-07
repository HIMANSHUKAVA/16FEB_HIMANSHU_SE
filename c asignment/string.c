#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];

    // Taking input from user
    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);


    strcat(str1, str2);


    printf("\nConcatenated String: %s", str1);


    printf("\nLength of Concatenated String: %lu", strlen(str1));

    return 0;
}
