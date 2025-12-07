// Write a C program to create a file, write a string into it, close the file, then
// open the file again to read and display its contents.

#include <stdio.h>

int main()
{
    FILE *fp;
    char data[100];

    //  Create and open file in write mode
    fp = fopen("myfile.txt", "w");

    if (fp == NULL)
    {
        printf("File not created!");
        return 1;
    }

    //  Taking string input from user
    printf("Enter a string to store in file: ");
    gets(data);

    // Writing string to file
    fputs(data, fp);

    //  Closing the file after writing
    fclose(fp);

    //  Opening the same file in read mode
    fp = fopen("myfile.txt", "r");

    if (fp == NULL)
    {
        printf("File not found!");
        return 1;
    }

    //  Reading data from file
    printf("\nData read from file:\n");
    while (fgets(data, 100, fp) != NULL)
    {
        printf("%s", data);
    }

    //  Closing the file after reading
    fclose(fp);

    return 0;
}
