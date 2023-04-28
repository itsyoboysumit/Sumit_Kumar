/*'Kumar Electronics' has announced the following seasonal discounts on purchase of certain
items.
Purchase Amount Discount on Laptop Discount on Desktop PC
Up to ₹ 25000 0.0% 5.0%
₹ 25,001 to ₹ 50,000 5% 7.5%
₹ 50,001 to ₹ 1,00,000 7.5% 10.0%
More than ₹ 1,00,000 10.0% 15.0%
Write a program to input name, amount of purchase and the type of purchase (`L' for
Laptop and 'D' for Desktop) by a customer. Compute and print the net amount to be paid
by a customer along with his name.
(Net amount = Amount of purchase - discount)*/
#include <stdio.h>

int main() {
    int pamt;
    char name[25], tp;
    float pod, d, namt;
    
    printf("Enter name: ");
    scanf("%s", name);
    
    printf("Type of purchase (L or D): ");
    scanf(" %c", &tp);
    
    printf("Amount of purchase: ");
    scanf("%d", &pamt);
    
    printf("Name: %s\n", name);
    
    if (tp == 'L') {
        if (pamt <= 25000)
            pod = 0.0;
        else if (pamt >= 25001 && pamt <= 50000)
            pod = 5.0;
        else if (pamt >= 50001 && pamt <= 100000)
            pod = 7.5;
        else
            pod = 10.0;
    } else if(tp =='D') {
        if (pamt <= 25000)
            pod = 5.0;
        else if (pamt >= 25001 && pamt <= 50000)
            pod = 7.5;
        else if (pamt >= 50001 && pamt <= 100000)
            pod = 10.0;
        else
            pod = 15.0;
    }else
    printf("Wrong Input");
    
    d = pamt * pod / 100;
    namt = pamt - d;
    printf("Amount of purchase:%d",pamt);
    printf("\nDiscount:%.2f",d);
    printf("\nNet Amount: %.2f\n", namt);
    
    return 0;
}
