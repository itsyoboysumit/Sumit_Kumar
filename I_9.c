/*Write a program to extract a substring from a given string.*/

#include <stdio.h>
#include <string.h>
#define MAX 30

void subString(char source[], char destination[], int start, int end)
{
    if (start < 0 || end >(int) strlen(source) || start >= end)
    {
        strcpy(destination, "Invalid indices");
    }
    else
    {
        int len = end - start + 1;
        strncpy(destination, source + start, len);
        destination[len] = '\0';
    }
}

int main()
{
    char source[MAX];
    printf("Enter the string:");
    fgets(source, sizeof(source), stdin);

    int start, end;
    printf("Enter the starting index of substring:");
    scanf("%d", &start);
    printf("Enter the end index of substring:");
    scanf("%d", &end);

    char extractedSubstring[MAX];
    subString(source, extractedSubstring, start, end);
    printf("Extracted substring is:%s", extractedSubstring);

    return 0;
}