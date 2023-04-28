#include<stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("The first %d natural numbers:\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum=sum+i;
    }
    avg=sum/n*1.0;
    printf("\nThe sum of natural numbers upto %d terms :%d\n",n,sum);
    printf("The average of natural numbers upto %d terms :%.2f",n,avg);
    return 0;
}