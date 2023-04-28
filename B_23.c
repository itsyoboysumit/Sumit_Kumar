/*Mr. Kumar is an LIC agent. He offers discount to his policy holders on the annual
premium. However, he also gets commission on the sum assured as per the given tariff.
Sum Assured Discount Commission
Up to ₹ 1,00,000 5% 2%
₹ 1,00,001 and up to ₹ 2,00,000 8% 3%
₹ 2,00,001 and up to ₹ 5,00,000 10% 5%
More than ₹ 5,00,000 15% 7.5%
Write a program to input the sum assured and first annual premium. Calculate the discount
of the policy holder and the commission of the agent. The program displays all the details
as:
Sum assured:
Premium:
Discount on the first premium:
Commission of the agent:*/

#include<stdio.h>
int main()
{
    float sum,pre,dis,com;
    printf("Enter the sum assured:");
    scanf("%f",&sum);
    printf("Enter thr first premium:");
    scanf("%f",&pre);
    if(sum<=100000)
    {
        dis=0.05*pre;
        com=0.02*sum;
    }    
    else if (sum>=100001 && sum<=200000)
    {
        dis=0.08*pre;
        com=0.03*sum;
    }
    else if (sum>=200001 && sum<=500000)
    {
        dis=0.1*pre;
        com=0.04*sum;
    }
    else
    {
        dis=0.15*pre;
        com=0.075*sum;
    }
    printf("Sum Assured:\t\t\t%.2f\nPremium:\t\t\t%.2f\nDiscount on first premium:\t%.2f\nCommision of the agent:\t\t%.2f",sum,pre,dis,com);
    return 0;
    }