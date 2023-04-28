/*Write a C program to check whether a triangle can be formed by the given value for the
angles.
Test Data :
40 55 65
Expected Output :
The triangle is not valid*/

#include <stdio.h>
int main()
{
    int ab,bc,ac,s=0;
    printf("Enter sid%es of triangle:");
    scanf("%d%d%d",&ab,&bc,&ac);
    s=ab+bc+ac;
    if(s==180)
    printf("Triangle is valid");
    else
    printf("Thr triangle is not valid");
    return 0;
}