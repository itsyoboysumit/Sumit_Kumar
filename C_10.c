//a series of numbers in which each number (Fibonacci number) is the sum of the two preceding numbers.//
// The simplest is the series 1, 1, 2, 3, 5, 8, etc.//
#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c;
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("The Fabonacci series is :\n%d,",a);
    printf("%d,",b);
    for(i=3;i<=n;i++)//here starting the loop from 3 because we have already printed 2 no of the series//
      {
          c=a+b;
          printf("%d,",c);
          a=b;
          b=c;
      }
      return 0;
}