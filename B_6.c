/*Write a C program that accepts a real number x and prints out the corresponding value of
sin(1/x) using 4-decimal places.*/

#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    printf("Enter a real number:");
    scanf("%f",&x);
    if (x==0)
    {
    printf("Not possible");
    }
    else
    {
    y=sin(1/x);
    printf("\nValue of sin (1/x) is:%f",y);
    }
    return 0;

}