/*Write a program in C to find the lenth of the string without using library function.*/

#include <stdio.h>
#include <string.h>

#define MAX 100

int main(){
    char input[MAX];
    printf("Enter the string:");
    //fgets(input,sizeof(input),stdin);

    gets(input); // used here only for ease otherwise not advised to use 

    int len= strlen(input);
    printf("Length of the string is:%d",len);

}