/*
Write a program in C to accept an Integer number as input and perform the following
operations on that integer number
a. Print the total number of digits present in that inputted number
b. Print summation of all the digits present in that inputted number
c. Reverse the inputted number and print it
d. Check whether the inputted number is a Palindrome number or not.
e. Check whether the inputted number is an Armstrong number or not.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,c=0,d,sum=0,r=0,d2,sum2=0;

    printf("Enter a number:");
    scanf("%d",&n);

    for(i=n;i>0;i=i/10){
        d=i%10;
        c=c+1;
        sum2=sum2+d;
        sum=sum+pow(d,3);
        r=r*10+d;
    }
    printf("\nTotal No. of digits:\t%d",c);
    printf("\nSum of digits:\t\t%d",sum2);
    printf("\nReverse of %d is:\t%d",n,r);

    if(n==r)
        printf("\n%d is Palindrome Number",n);
    else
        printf("\n%d is not a Palindrome Number",n);
    
    if(n==sum)
        printf("\n%d is Armstrong Number",n);
    else
        printf("\n%d is not a Armstrong Number",n);
    
    return 0;
}
