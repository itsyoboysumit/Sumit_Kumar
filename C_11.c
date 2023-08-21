/*Write a C program to find HCF (Highest Common Factor) of two numbers.
Test Data :
Input 1st number for HCF: 24
Input 2nd number for HCF: 28
Expected Output :
HCF of 24 and 28 is : 4*/
#include<stdio.h>
int main()
{
    int i,n,m,c,hcf;
    printf("Enter two numbers:");
    scanf("%d%d",&n,&m);
    printf("Common factors are:");
    if(c=n>m? n:m);
    for(i=1;i<=c;i++)
    {
        if(n%i==0 && m%i==0){
        printf("%d, ",i);
        hcf=i;
        }
    }
    printf("\nHCF of %d and %d is:%d",n,m,hcf);
    return 0;
}