/*   Write a program in C to calculate and print the electricity bill of a given customer.
 The customer id, name and unit consumed by the user should be taken from the keyboard and display 
 the total amount to pay to the customer. The charge are as follows: 
     Unit                                                        Charge/Unit     
     upto 199                                                    @1.20
     200 and above but less than 400                             @1.50
     400 and above but less than 600                             @1.80
     600 and above                                               @2.00
     If bill exceeds Rs.400 then a subcharge of 15% will be charged and the minimum bill should
      be of Rs.100/-  */
#include <stdio.h>
int main()
{
    int custid,conu;
    float chg,surchg=0,gramt=1,netamt=0;
    char custnm[25];
    printf("Enter customer ID:");
    scanf("%d",&custid);
    printf("Enter customer name:");
    scanf("%s",&custnm);
    printf("Enter unit consumed by customer:");
    scanf("%d",&conu);
    if(conu<200)
       chg=1.20;
    else if(conu>=200 && conu<400)
        chg=1.50;
    else if (conu>=400 && conu<600)
        chg=1.80;
    else
        chg=2.0;
    gramt=conu*chg;
    if(gramt>400)
    {
        surchg=gramt*15/100.0;
        netamt=gramt+surchg;

    }
    if(gramt<100)
    netamt=100;
    printf("\nCustomer ID:%d",custid);
    printf("\nCustomer Name:%s",custnm);
    printf("\nUnit cusumed:%d",conu);
    printf("\nAmount charges %f per unit:%f",chg,gramt);
    printf("\nSurcharge Amount:%f",surchg);
    printf("\nNet Amount paid by Customer:%f",netamt);
    return 0;


}

