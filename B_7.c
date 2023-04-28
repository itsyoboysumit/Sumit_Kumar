/*Write a C program to remove any negative sign in front of a number.
Input a value (negative):*/

#include<stdio.h>
int main()
{

    double num;
    printf("\nInput a negative value:");
    scanf("%lf",&num);
    num=(num<0)?-num:num;
    printf("The absolute value : %lf",num);
    return 0;

}