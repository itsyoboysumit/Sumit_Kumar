/*Write a program in C to compare two Strings without using string library fuction*/

#include <stdio.h>
#include <string.h>  // Add this line to include string.h for strlen()

#define MAX 20

int isStringEqual(char *str1, char *str2)  // Change int* to char*
{
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)  // Change str1 != str2 to *str1 != *str2
        {
            return 0; // characters are not equal
        }
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 == '\0')
    {
        return 1; // length of the string is equal
    }
    else
    {
        return 2; // characters are equal, but lengths are different
    }
}

int main()
{
    char input1[MAX], input2[MAX];
    printf("Enter the first string:");
    fgets(input1, MAX, stdin);

    printf("Enter the second string:");
    fgets(input2, MAX, stdin);

    // Remove the newline character from input strings
    input1[strlen(input1) - 1] = '\0';
    input2[strlen(input2) - 1] = '\0';

    int result = isStringEqual(input1, input2);

    if (result == 0)
    {
        printf("Characters of the strings are not equal.\n");
    }
    else if (result == 1)
    {
        printf("Lengths of the strings are equal.\n");
    }
    else
    {
        printf("Lengths of the strings are equal, and both strings are equal.\n");
    }

    return 0;
}
