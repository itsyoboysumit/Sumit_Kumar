/*Write a program for the multiplication of two numbers using recurssive function.*/

#include <stdio.h>
int multi(int m, int n);

int main()
{
    int m, n;
    printf("Enter two numbers:");
    scanf("%d%d", &m, &n);
    printf("Product of both number is:%d", multi(m, n));
}
int multi(int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    else
    {
        return (m + multi(m, n - 1));
    }
}