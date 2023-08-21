/*Wrie a menu driven program to implement basic calculator and perform the following operation
(You will have to use the function with argument passing mechanism) 1.Summation 2.Subtraction
3.Multiplication 4.Division */

#include <stdio.h>
int sumation(int , int );
int subtraction(int , int );
int multiplication(int , int );
int division(int ,int );

int main()
{
    int a,b,sum,div,mp,quo;
    printf("Enter the first and second number:");
    scanf("%d %d",&a,&b);
    sum=sumation(a,b);
    div=subtraction(a,b);
    mp=multiplication(a,b);
    quo=division(a,b);
    printf("Sum is:%d\nDifference is:%d\nProduct is:%d\nQuotient:%d",sum,div,mp,quo);
    return 0;
}
int sumation(int a, int b){
    int s;
    s=a+b;
    return (s);
}
int subtraction(int a,int b){
    return (a-b);
}
int multiplication(int a,int b){
    return (a*b);
}
int division(int a,int b){
    return (a/b);
}