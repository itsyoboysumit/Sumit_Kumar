/*
Write a program in C to display the n terms of harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
*/

#include<stdio.h>
int main()
{
    int i,n;
    float s;
    printf("Enter the number:");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++){
        printf("1/%d+",i);
        s=s+1.0/i;
    }
    printf("\nSum of series upto %d terms:%f",n,s);
    return 0;
}