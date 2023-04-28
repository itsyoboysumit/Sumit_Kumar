/* write a program in c to accept two integer numbers with proper message.
Perform different operations using the following operators : '+,-,*,/,%'
Expected output:
    First Number- 15
    Second Number- 4
    Summation- 19
    Subtraction- 11
    Multiplication- 60
    Division- 3
    Remainder- 3
    */
#include<stdio.h>
int main()
{
    int a,b,sum,diff,multiplication,division,remainder;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    printf("First number = %d\n",a);
    printf("Second number = %d\n",b);
    sum = a+b;
    printf("Summation = %d\n",sum);
    diff = a-b;
    printf("Difference = %d\n",diff);
    multiplication = a*b;
    printf("Multiplication = %d\n",multiplication);
    division = a/b;
    printf("Division = %d\n",division);
    remainder = a%b;
    printf("Remainder =%d\n",remainder);
    return 0;
}