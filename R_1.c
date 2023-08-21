/*Write down a recurssive program to find out a fibonacci sereis.*/

#include <stdio.h>

int fib(int n);

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("Fibonacci series of given numer is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
    return 0;
}
int fib(int n)
{
    if (n <= 0)
        return 0; // Base case for n = 0
    else if (n == 1)
        return 1; // Base case for n = 1
    else
        return fib(n - 1) + fib(n - 2);
}