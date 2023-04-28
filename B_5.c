/*Write a program that reads two numbers and divide the first number by second number. 
If the division not possible print "Division not possible."*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter both numbers :");
    scanf("%d%d",&a,&b);
    if (a%b==0)
    {
        printf("%f",a*1.0/b);
    }
    else
    printf("Division not possible");
    return 0;
}