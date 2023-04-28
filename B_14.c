/*An air-conditioned bus charges fare from the passengers based on the distance travelled as
per the tariff given below:
Distance Travelled Fare
Up to 10 km Fixed charge ₹80
11 km to 20 km ₹6/km
21 km to 30 km ₹5/km
31 km and above ₹4/km*/

#include<stdio.h>
int main()
{
    int dt,charge,rate;
    printf("Enter total distance covered:");
    scanf("%d",&dt);
    if (dt<=10)
     printf("Charge is Rs.80");
    else
    {
        if (dt>=11 && dt<=20)
        rate=6;
        else if(dt>=21 && dt<=30)
        rate=5;
        else
        rate=4;
        charge=dt*rate;
        printf("Charge is :%d",charge);
    }
    return 0;

}