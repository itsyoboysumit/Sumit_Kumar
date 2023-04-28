/*An employee wants to deposit certain sum of money under 'Term Deposit' scheme in
Syndicate Bank. The bank has provided the tariff of the scheme, which is given below:
No. of Days Rate of Interest
Up to 180 days 5.5%
181 to 364 days 7.5%
Exact 365 days 9.0%
More than 365 days 8.5%
Write a program to calculate the maturity amount taking the sum and number of days as
inputs.*/
#include<stdio.h>
int main()
{
    int nod;
    float mamt=0,sum=sum*1.0,roi;
    printf("Enter no of days:");
    scanf("%d",&nod);
    printf("Enter the sum amount:");
    scanf("%f",&sum);
    if(nod<180)
     roi=5.5;
    else if(nod>=181 && nod<=364)
     roi=7.5;
    else if(nod==365)
     roi=9.0;
    else
     roi=8.5;
    mamt=sum+sum*(roi/100);
    printf("Maturity Amount= %f",mamt);
    return 0;

}