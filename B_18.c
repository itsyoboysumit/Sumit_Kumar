/*Given below is a hypothetical table showing rate of income tax for an India citizen, who is
below or up to 60 years.
Taxable income (TI) in ₹                                                               Income Tax in ₹
Up to ₹ 2,50,000                                                                       Nil
More than ₹ 2,50,000 and less than or equal to ₹ 5,00,000                             (TI - 1,60,000) * 10%
More than ₹ 5,00,000 and less than or equal to ₹ 10,00,000                            (TI - 5,00,000) * 20% + 34,000
More than ₹ 10,00,000                                                                 (TI - 10,00,000) * 30% + 94,000
Write a program to input the age and taxable income of a person. If the age is more than 60
years then display the message "Wrong Category". If the age is less than or equal to 60 years
then compute and display the income tax payable along with the name of tax payer, as per the
table given above.*/

#include<stdio.h>
int main()
{
    int age;
    float i,t;
    char name[25];
    printf("Enter the name:");
    scanf("%s",&name);
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter income:");
    scanf("%f",&i);
    if(age>60)
    printf("Wrong Input");
    else
     {
        if(i<=250000)
        t=0;
        else if(i>250000 && i<=500000)
        t=(i-160000)*10/100;
        else if(i>500000 && i<=1000000)
        t=(i-500000)*20/100+34000;
        else
        t=(i-1000000)*30/100+94000;
        printf("\nName:%s",&name);
        printf("\nTaxable Income:%.2f",t);
        
     }
    return 0;
}