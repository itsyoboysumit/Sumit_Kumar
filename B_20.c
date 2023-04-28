 /*A Mega Shop has different floors which display varieties of dresses as mentioned
below:
1. Ground floor : Kids Wear
2. First floor : Ladies Wear
3. Second floor : Designer Sarees
4. Third Floor : Men's Wear
The user enters floor number and gets the information regarding different items of the
Mega shop. After shopping, the customer pays the amount at the billing counter and the
shopkeeper prints the bill*/
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
#include<stdio.h>
int main()
{
    int n,i,quan;
    float price,amt;
    printf("Enter floor number:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:printf("\nKids wear section\n");
        printf("Item Code\tItem Name\tItem Price\n");
        printf("101\t\tT-Shirt\t\t$15.00\n");
        printf("102\t\tJeans\t\t$25.00\n");
        printf("103\t\tDress\t\t$30.00\n");
        break;
    case 2:printf("Ladies Wear Section\n");
        printf("Item Code\tItem Name\tItem Price\n");
        printf("201\t\tSaree\t\t$30.00\n");
        printf("202\t\tKurti\t\t$15.00\n");
        printf("203\t\tLeggins\t\t$10.00\n");
        break;
    case 3:printf("Designer Saree Section\n");
        printf("Item Code\tItem Name\tItem Price\n");
        printf("301\t\tSilk\t\t$80.00\n");
        printf("302\t\tBanarsi\t\t$50.00\n");
        printf("303\t\tKanjeevaram\t$30.00");
        break;
    case 4:printf("Mean's Wear Section\n");
        printf("Item Code\tItem Name\tItem Price\n");
        printf("401\t\tJeans\t\t$30.00\n");
        printf("402\t\tShirt\t\t$20.00\n");
        printf("403\t\tSuit\t\t$100.00\n");
        break;
    default:printf("Enter valid floor number");
        break;
    }
    printf("\nEnter the item code (101-403) or 0 to exit:");
    scanf("%d",&i);
    while(i!=0)
    {
        switch (i){
            case 101:price=15.00;
                     break;
            case 102:price=25.00;
                     break;
            case 103:price=30.00;
                     break;
            case 201:price=30.00;
                     break;
            case 202:price=15.00;
                     break;
            case 203:price=10.00;
                     break;
            case 301:price=80.00;
                     break;
            case 302:price=50.00;
                     break;
            case 303:price=30.00;
                     break;
            case 401:price=30.00;
                     break;
            case 402:price=20.00;
                     break;
            case 403:price=100.00;
                     break;
            default :printf("Invalid Item Cofe");
                     break;
        }
        printf("Enter Item quantity:");
        scanf("%d",&quan);
        amt=price*quan;
        printf("Total bill Amount:$%.2f",amt);
        break;
    }
    
    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            














                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 