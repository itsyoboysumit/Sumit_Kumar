#include<stdio.h>
int main()
{
    int n,i,k,m,c;
    printf("Enter the numbers in between you want prime numbers:");
    scanf("%d%d",&n,&m);
    for (k=n;k<=m;k++)
    {
        c=0;
        for(i=1;i<=m;i++)
        {
            if (k%i==0)
            c++;
        }
        if(c==2)
        printf("[%d]",k);
    }
    return 0;
}