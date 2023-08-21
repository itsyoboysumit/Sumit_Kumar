/*Write a program in C to reverse a string without using library function.*/

#include <stdio.h>
#define MAX 50

void reverseString(char *str1) {
    char input2[MAX];
    int length = 0;   // Calculate the length of the input string
    while (*str1 != '\0' && *str1 != '\n') {
        length++;
        str1++;
    }
    str1--; // Move back to the last character before null-terminator

    // Reverse the string and store it in input2
    for (int i = 0; i <= length; i++) {
        input2[i] = *str1;
        str1--;
    }
    input2[length + 1] = '\0'; // Add null-terminator to the reversed string

    printf("The reverse of the string is: %s\n", input2);
}

int main(){
    char input1[MAX];

    printf("Enter the string:");
    fgets(input1, sizeof(input1), stdin);

    reverseString(input1);
    return 0;
}

