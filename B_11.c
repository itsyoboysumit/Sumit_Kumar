/*Write a C program to check whether a number is ODD or EVEN.
Test Data :
25
Expected Output :
ODD 
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%2==0)
     printf("EVEN");
    else
     printf("ODD");
    return 0;
}