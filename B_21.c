/*Using a switch case statement, write a menu driven program to convert a given
temperature from Fahrenheit to Celsius and vice-versa. For an incorrect choice, an
appropriate message should be displayed.
Hint: c = 5/9*(f-32) and f=1.8*c+32*/

#include<stdio.h>
int main()
{
    int n;
    float f,c;
    printf("Choose option 1 to convert Fahrenheit into celcius and option 2 to convert Celcius into fahrehite:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:printf("Enter the temprature in Fahrenheit:");
        scanf("%f",&f);
        c=5.0/9.0*(f-32.0);
        printf("Temprature in Celcius is:%.2f",c);
        break;
    case 2:printf("Enter the temprature in Celcius:");
        scanf("%f",&c);
        f=1.8*c+32;
        printf("Temprature in Fahrenheit is:%.2f",f);
        break;
    default:
        break;
    }
    return 0;
}