
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Factors are:");
    for (i=1;i<=n;i++){
       if(n%i==0)
       printf("%d ",i);
    }

printf("Factors are:");
    for (i=1;i<=n;i++){
       if(n%i==0){
          k=0;
          for(j=1;j<=i;j++){
            if(i%j==0)
            k++;
          }
          if(k==2)
          printf("%d",i);
       }
    }
    return 0;
}
        