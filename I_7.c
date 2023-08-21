/*Write a program in C to check weather to given strings are an anagram.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 20

int anagram(char *ptr1, char *ptr2);

int main()
{
    char input1[MAX], input2[MAX];
    int n, m;

    printf("Enter the first string:");
    fgets(input1, sizeof(input1), stdin);

    printf("Enter the second string:");
    fgets(input2, sizeof(input2), stdin);

    n = strlen(input1);
    m = strlen(input2);

    // removing newline character
    if (n > 0 && input1[n - 1] == '\n')
        input1[n - 1] = '\0';
    if (m > 0 && input2[m - 1] == '\n')
        input2[m - 1] = '\0';

    int result = anagram(input1, input2);

    if (result == 0)
    {
        printf("Given string is not anagram.");
    }
    else
    {
        printf("Given string is anagram.");
    }
}

int anagram(char *ptr1, char *ptr2)
{
    int count[256] = {0}; // Assuming ASCII characters

    // Counting the character frequencies of first string
    while (*ptr1 != '\0')
    {
        count[(int)*ptr1]++; /*(int)*ptr1: This converts the character value pointed to by ptr1 into its
         corresponding ASCII value (integer).count[(int)*ptr1]++: This accesses the element in the count
          array corresponding to the ASCII value of the character pointed to by ptr1 and increments its
           value by one.*/
        ptr1++;
    }

    // Subtracting the character frequescies based on second frequencies
    while (*ptr2 != '\0')
    {
        count[(int)*ptr2]--;
        ptr2++;
    }

    // checking if all the charcters frequencies are zero or not
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            return 0; // not anagram
        }
    }
    return 1;
}