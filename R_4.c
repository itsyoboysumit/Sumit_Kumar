/*Write a program in C to find factorial of a number ussing recurssive function.*/

#include <stdio.h>
int fact(int n);

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Factorial of given number is:%d",fact(n));
}
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}