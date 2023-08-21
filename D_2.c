/*Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999...].*/

#include<stdio.h>
int main()
{
    long int i,n,c=0;
    int sum=0;
    printf("Input the numbers of terms:");
    scanf("%ld",&n);
        for(i=1;i<=n;i++){
          c=c*10+9;
          sum=sum+c;
          printf("%ld,",c);
        }
    printf("\nThe sum of series:%d",sum);
    return 0;
}