#include<stdio.h>
int main()
{
    int n,i,m=1,j;
    printf("Enter the numbers of terms:");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++){
            m=i*j;
            printf("%d*%d=%d, ",i,j,m);
        }
        printf("\n");
    }
    return 0;
}