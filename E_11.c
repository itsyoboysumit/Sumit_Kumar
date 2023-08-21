#include <stdio.h>

void main()
{
   int i,j,n,p,q;
   printf("Input number of rows : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     if(i%2==0)
     { p=1;q=0;}
     else
     { p=0;q=1;}
     /*This if else changes the value to 0 and 1 alternatively
     in start of each row*/
      for(j=1;j<=i;j++){
	 if(j%2==0)
	    printf("%d",p);
	 else
	    printf("%d",q);
      }
      /*This if else is used to change value laternaltively
      in the same row ,one after one*/
     printf("\n");
   }
}
