#include<stdio.h>
int main()
{
    int i,n,s=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        s=s*i;
    }
    printf("Factorial of %d is:%d",n,s);
    return 0;
}