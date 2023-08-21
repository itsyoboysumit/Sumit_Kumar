#include<stdio.h>

struct student
{
    char name[50];
    int roll;
    float percentage;
    char remarks[23];    

};
int main(){
    struct student std1={"sumit",1,98,"good"};
    struct student std2={"sourav",2,99,"excellent"};
    printf("%s\n%d\n%.2f\n%s\n",std1.name,std1.roll,std1.percentage,std1.remarks);
    printf("%s\n%d\n%.2f\n%s",std2.name,std2.roll,std2.percentage,std2.remarks);
    return 0;
    
}
