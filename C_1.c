#include<stdio.h>
int main()
{
    int i,n,c=0,d=0;
    printf("Enter 10 digits:");
    for(i=1;i<=10;i++)
    {
       scanf("%d",&n);
       if (n%2==0)
        c++;
       else
       d++;
    }
    printf("\nTotal number of OOD numbers:\t%d",d);
    printf("\nTotal numbers of EVEN numbers:\t%d",c);
    return 0;
}