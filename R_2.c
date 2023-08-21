/*Write a program in C to find out HCF using recurssive function.*/

#include <stdio.h>
int hcf(int a,int b);

int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("HCF of given number is: %d",hcf(a,b));
}
int hcf(int a,int b){
    int r=a%b;
    if(r==0){
        return b;
    }
    else{
        return (hcf(b,r));
    }
}