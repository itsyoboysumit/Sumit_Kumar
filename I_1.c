/*WAP to take one String as input and perform the following operations :
a. How many vowels are present
b. How many consonent are present
c. How many digits are present
d. How many words are present   */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int countVowels(const char *str)
{
    int count = 0;
    while (*str)
    {
        int c = tolower(*str);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
        str++;
    }
    return count;
}

int countConsonent(const char *str)
{
    int count = 0;
    while (*str)
    {
        int c = tolower(*str);
        if (isalpha(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            count++;
        }
        str++;
    }
    return count;
}

int countDigit(const char *str)
{
    int count = 0;
    while (*str)
    {
        if (isdigit(*str))
        {
            count++;
        }
        str++;
    }
    return count;
}

int countWords(const char *ptr)
{
    int count = 0;
    int inWord = 0; /*flag used to check weather in word or out of word*/
    while (*ptr)
    {
        if (isspace(*ptr))
        {
            inWord = 0;
        }
        else
        {
            if (inWord == 0)
            {
                count++;
                inWord = 1;
            }
        }
        ptr++;
    }
    return count;
}

int main()
{
    char string[100];
    printf("Enter the string: ");

    fgets(string, sizeof(string), stdin);

    // remove new line character from the string
    int len = strlen(string);
    if (len > 0 && string[len - 1] == '\n')
    {
        string[len - 1] = '\0';
    }


    /*scanf("%99s",string);  //read upto 99 character to leave space for '\0'
    //LIMITATION: it does count whitespace as input and terminate the loop after whitespace*/


    /*gets(string);  // Read input (Unsafe - Avoid using gets())*/



    printf("Numbers of vowels present in the array is: %d\n", countVowels(string));
    printf("Numbers of consonent present in string is:%d\n", countConsonent(string));
    printf("Numbers of digits present in the string is:%d\n", countDigit(string));
    printf("Numbers of words present in the string is:%d\n", countWords(string));

    return 0;
}