/*Take 3 sides of a triangle and check whether the triangle is equilateral, isoceles or scalene.
 Provide necessary messages.*/
#include<stdio.h>
int main()
{
    int ab,bc,ac;
    printf("Enter sides of triangle:");
    scanf("%d%d%d",&ab,&bc,&ac);
    if(ab==bc && bc==ac)
    {
        printf("Given triangle is equilateral triangle");

    }
    else if (ab==bc || bc==ac || ac==ab)
    {
        printf("Given triangle is issoscles triangle");
    }
    else
    {
        printf("Given triangle is scalen triangle");
    }
    return 0;
}