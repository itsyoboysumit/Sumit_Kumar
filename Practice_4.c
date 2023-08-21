/*designated initialization*/

#include <stdio.h>
#define MAX 3
typedef struct manufacturar
{
    char model[30];
    int price;
    int avg;
    char type[30];
} car;

int main()
{
    car car1 = {.avg=45,.model="splender",.price=850000,.type="petrol"};
    car car2 = {.model="glamour",.avg=55,.price=110000,.type="electric"};
    printf("\n************\n%s\n%s\n%d\n%d\n************\n%s\n%s\n%d\n%d\n*************",car1.model,car1.type,car1.avg,car1.price,car2.model,car2.type,car2.price,car2.avg);
    
    return 0;
}