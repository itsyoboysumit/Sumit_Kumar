/* Write a program in C to Check Whether a Number can be expressed as Sum of Two Prime
Numbers.
Test Data :
Input a positive integer: 16
Expected Output :
16 = 3 + 13
16 = 5 + 11*/
#include<stdio.h>
int main()
{
    int i,n,a,b,j,c;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        a=i;
        b=n-i;
        c=0;
        for(j=1;j<=a;j++){
            if(a%j==0){
            c++;
            }
        }
        if(c==2){
            c=0;
            for(j=1;j<=b;j++){
                if(b%j==0)
                c++;
            }
            if(c==2){
            printf("%d=%d+%d\n",n,a,b);
            }

        }
    }
    return 0;
}