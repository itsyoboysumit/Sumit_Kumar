/*WAP to take one string as input and change the case of the string.(Lower case will be upper case 
and upper case will be lower case.)*/

#include <stdio.h>
#include <ctype.h>
#define MAX 20

int main(){
    char input[MAX];
    char *ptr= input;

    printf("Enter the string:");
    fgets(input, sizeof(input),stdin);

    while(*ptr){
    if(isupper(*ptr)){
        *ptr=tolower(*ptr);
        ptr++;
    }
    else{
        *ptr=toupper(*ptr);
        ptr++;
    }
    }
    printf("The string is: %s",input);
    return 0;
}
