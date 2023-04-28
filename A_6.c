/*Write a c program to convert specified days into years,
 weeks and days. (Note : Ignore Leap year) test --- no. of days = 1329 */

#include<stdio.h>
int main()
{
    int n,y,w,d,x;
    printf("Enter the number:");
    scanf("%d",&n);
    y=n/365;
    x=n%365;
    w=x/7;
    d=x%7;
    printf("Years = %d\n",y);
    printf("Weeks = %d\n",w);
    printf("Days = %d",d);
    return 0;

}