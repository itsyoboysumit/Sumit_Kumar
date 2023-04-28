/*Write a program to accept a number and check whether the number is divisible by 3 as
well as 5. Otherwise, decide:
(a) Is the number divisible by 3 and not by 5?
(b) Is the number divisible by 5 and not by 3?
(c) Is the number neither divisible by 3 nor by 5?
The program displays the message accordingly.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%3==0 && n%5==0)
      printf("The number is divisible by both 3&5");
    else if(n%3==0 && n%5!=0)
      printf("The numbere is divisible bt 3 but not 5");
    else if(n%3!=0 && n%5==0)
      printf("The numbere is divisible by 5 but not 3");
    else
      printf("The numbere is neither divisible by 5 nor 3");
    return 0;
}