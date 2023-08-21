/*Write a program to check weather the given substring is present in the given string.*/

#include<stdio.h>
#include<string.h>
#define MAX 50

int isSubstringPresent(char const *string, char const *substring);

int main(){
    char string[MAX];
    printf("Enter the string:");
    fgets(string,sizeof(string),stdin);
    // removing newline character
    string[strlen(string)-1]='\0';


    printf("Enter the substring:");
    char substring[MAX];
    fgets(substring, sizeof(substring), stdin);
    //removing newline character
    substring[strlen(substring)-1]='\0';
    
    int result= isSubstringPresent(string,substring);
    if(result==0){
        printf("No, substring is not present in given string.");
    }
    else{
        printf("Yes, substring is present in current string.");
    }
    return 0;
}

int isSubstringPresent(char const *string, char const *substring){
    if(strstr(string,substring)!=NULL){
        return 1; // string is present
    }
    else{
        return 0; //string is not present
    }

    
}