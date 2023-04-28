/*Write a program to input three numbers (positive or negative). If they are unequal then
display the greatest number otherwise, display they are equal. The program also displays
whether the numbers entered by the user are 'All positive', 'All negative' or 'Mixed
numbers'.
Sample Input: 56, -15, 12
Sample Output:
The greatest number is 56
Entered numbers are mixed numbers.*/
#include<stdio.h>
int main()
{
    int  a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=0 && b>=0 && c>=0)
      printf("All are positive");
    else if(a<=0 && b<=0 && c<=0)
      printf("All are negative");
    else
      printf("Entered numbers are Mixed numbers");
    
    if (a==b==c)
      printf("They are equal");
    else
      {
        if(a>b)
        {
          if(a>c)
          printf("\n The gratest number is:%d",a);
          else
          printf("\nThe gratest number is :%d",c);
        }
        else
        {
          if(b>c)
          printf("\nThe gratest number is :%d",b);
          else
          printf("\nThe gratest number is :%d",c);
        }
      }
    return 0;

   
}