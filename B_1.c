/*write a program to take the total marks of a particular student and provide the Grade
 according to the following table:
         Total Marks           Grade
         less than 40          Fail
         from 40 to 49         D
         from 50 to 59         C
         from 60 to 69         B
         from 70 to 79         A
         from 80 to 89         E
         from 90 to 100        O*/

#include<stdio.h>
int main()
{
    int  n;
    printf("Enter your marks:");
    scanf("%d",&n);
    if (n<40)
    {
        printf("Fail");
    }
    else if (n>=40 && n<=49)
    {
        printf("D");
    }
    else if (n>=50 && n<=50)
    {
        printf("C");

    }
    else if (n>=60 && n<=69)
    {
        printf("B");

    }
    else if (n>=70 && n<=79)
    { 
        printf("A");

    }
    else if (n>=80 && n<=89)
    {
        printf("E");

    }
    else if (n>=90 && n<=100)
    {
        printf("O");

    }
    else
    printf("Wrong input");
    return 0;
}