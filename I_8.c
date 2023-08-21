/*WAP to take one string as input and check weather the input is palindrome or not.*/
/*NOTE: "MADAM" is a palindrome string.(from both side we can read madam)*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 20

int isPalindrome(char *str);

int main(){
    char str[MAX];

    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);

    // replacing the newline character with terminator
    int n = strlen(str);
    if(n>0 && str[n-1]=='\n')
    str[n-1]='\0';

    int result = isPalindrome(str);
    if(result==0){
        printf("Given sring is not palindrome.");
    }
    else{
        printf("Given string is palindrome.");
    }
}






int isPalindrome(char *str) {
    int length = strlen(str);
    for(int i=0;i<length/2;i++){
        if(str[i]!=str[length-1-i]){  // MADAM 
            return 0;
        }
    }
    return 1;
}