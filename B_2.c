/*Write a program to take the sale amount as input and provide the commmission according to the following table
          Sale Amount              Commission
          Less than 500            Rs. 35
          From 500 to 2000         10% of Sale Amount
          From 2001 to 5000        15% of Sale Amount
          More than 5000           20% of Sale Amount*/

#include <stdio.h>
int main()
{
    int sa;
    printf("Enter sale amount:");
    scanf("%d",&sa);
    if (sa<500)
    {
        printf("Commision: Rs.35");

    }
    else if (sa>=500 && sa<=2000)
    {
        printf("Commision:%f",0.1*sa);

    }
    else if (sa>=2001 && sa<=5000)
    {
        printf("Commision:%f",0.15*sa);

    }
    else
    printf("Commision:%f",0.2*sa);
    return 0;
    
}