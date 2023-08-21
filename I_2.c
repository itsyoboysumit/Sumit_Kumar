/*Write a program in C to find the lenth of the string without using library function.*/

#include <stdio.h>
#define MAX 100

int main()
{
    char input[MAX];
    int length = 0;

    printf("Enter the string:");
    //fgets(input,MAX,stdin);
    gets(input); // used only for simplicity but it is unsafe to use
    while (input[length] != 0)
    {
        length++;
    }
    printf("Lenth of the string is:%d", length);

    return 0;
}