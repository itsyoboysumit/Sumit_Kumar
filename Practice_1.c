/*Defining and accessing memebers of structure.*/

//defining a structure
#include<stdio.h>
struct{
    int id;
    char *name;
    float percentage;
    char *remarks;
}std1,std2;

//accessing memeber of structure
int main(){
    std1.id=1;
    std1.name="sumit";
    std1.percentage=95;
    std1.remarks="excellent";

    std2.id=2;
    std2.name="sourav";
    std2.percentage=96;
    std2.remarks="Outstanding";

    printf("%d\n",std1.id);
    printf("%s\n",std1.name);
    printf("%.2f\n",std1.percentage);
    printf("%s\n",std1.remarks);
    printf("%d\n%s\n%.2f\n%s",std2.id,std2.name,std2.percentage,std2.remarks);

    return 0;
}