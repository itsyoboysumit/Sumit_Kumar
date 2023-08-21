/*Wrie a menu driven program to implement basic calculator and perform the following operation
(You will have to use the function with argument passing mechanism) 1.Summation 2.Subtraction
3.Multiplication 4.Division */

#include <stdio.h>
#define MAX 10

int Summation(int,int);
int Subtraction(int,int);
int Multiplication(int,int);
int Division(int,int);

int main()
{
    int a,b,sum,diff,pro,quo,n;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("\t**PRESS**\n1 for SUMMATION\n2 for SUBTRACTION\n3 for MULTIPLICATION\n4 for DIVISION\n5 for EXIT\n");
    for(int i=0;i<MAX;i++){
        printf("\nEnter choice:");
        scanf("%d",&n);
    switch (n){
        case 1:
            sum=Summation(a,b);
            printf("Sum is:%d",sum);
            break;
        case 2:
            diff=Subtraction(a,b);
            printf("Difference is:%d",diff);
            break;
        case 3:
            pro=Multiplication(a,b);
            printf("Product is:%d",pro);
            break;
        case 4:
            quo=Division(a,b);
            printf("Quotient is:%d",quo);
            break;
        default:
            break;
    } 
    if(n==5 || n>5)
    break;
    }
    return 0;
            

}
int Summation(int a,int b){
    return (a+b);
}
int Subtraction(int a,int b){
    return (a-b);
}
int Multiplication(int a, int b){
    return (a*b);
}
int Division(int a,int b){
    return (a/b);
}