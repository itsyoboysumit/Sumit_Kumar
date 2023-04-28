/*A company announces revised Dearness Allowance (DA) and Special Allowances (SA)
for their employees as per the tariff given below:
Basic Dearness Allowance (DA) Special Allowance (SA)
Up to ₹ 10,000 10% 5%
₹ 10,001 - ₹ 20,000 12% 8%
₹ 20,001 - ₹ 30,000 15% 10%
₹ 30,001 and above 20% 12%
Write a program to accept name and Basic Salary (BS) of an employee. Calculate and
display gross salary.
Gross Salary = Basic + Dearness Allowance + Special Allowance*/

#include<stdio.h>
int main()
{
    float sa,da,gs,bs=bs*1.0,psa,pda;
    printf("Enter your basic salary:");
    scanf("%f",&bs);
    if (bs<=10000)
    {
       psa=5.0;
       pda=10.0; 
    }
    else if (bs>=10001 && bs<=20000)
    {
        psa=8.0;
        pda=12.0;
    }
    else if (bs>=20001 && bs<=30000)
    {
        pda=15.0;
        psa=10.0;
    }
    else
    {
        psa=12.0;
        pda=20.0;
    }
    da=pda/100*bs;
    sa=psa/100*bs;
    gs=bs+da+sa;
    printf("Basic salary:%.2f\nDearness Allowance:%.2f\nSpecial Allowance:%.2f\nGross Salary:%.2f",bs,da,sa,gs);
    return 0;
}