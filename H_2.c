/*Write a menu driven program using function with argument passing mechanism to perform the following 
operation on a particular program.
1. Print all the factor of that number.
2. Print all the prime factor of that number.
3. Print the factorial of that number.
4. Check weather the number is prime or not.
5. Check weather number is a Fibonacci number or not
6. Count the number of digit present in that number.
7. Check the number is Armstrong number or not.
8. Check that number is a perfect number or not.*/

#include <stdio.h>
#include <math.h>

#define MAX 50

void Factor(int a);
void Prime_Factor(int a);
int Factorial(int a);
void Check_Prime(int a);
int Fibonacci(int a);
void Digit_Present(int a);
void Armstrong_Number(int a);
void Perfect_Number(int a);

int main(){
    int n,i,k;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("\tPRESS\n*****************************\n1. for FACTOR \n2. for PRIME FACTOR \n3. for FACTORIAL \n4. for CHECK PRIME OR NOT \n5. for FIBONACCI \n6. to COUNT DIGIT \n7. for ARMSTRONG NUMBER \n8. for PERFECT NUMBER\n9. for EXIT\n**************************");
    for(i=0;i<MAX;i++){
        printf("\nEnter Choice:");
        scanf("%d",&k);
        switch (k)
        {
        case 1:
            Factor(n);
            break;
        case 2:
            Prime_Factor(n);
            break;
        case 3:
            printf("Factorial of given number is:%d ",Factorial(n));
            break;
        case 4:
            Check_Prime(n);
            break;
        case 5:
            printf("Fibonacci series of the given number:\n");
            for(int j=0;j<n;j++){
                printf("%d ",Fibonacci(j));
            }
            break;
        case 6:
            Digit_Present(n);
            break;
        case 7:
            Armstrong_Number(n);
            break;
        case 8:
            Perfect_Number(n);
            break;
        case 9:
            printf("EXITED....");
            break;
        default:
            printf("Wrong Input!");
            break;
        }
    if(k==9){
        break;
    }

    }
    return 0;
}
void Factor(int a){
    int i;
    printf("Factors are:\n");
    for(i=1;i<=a;i++){
        if(a%i==0){
            printf("%d ",i);
        }
    }
}
void Prime_Factor(int a){
    printf("Prime Factors are:");
    for(int i=1;i<=a;i++){
        if(a%i==0){
            int c=0;
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    c++;
                }
            }
            if(c==2){
                printf("%d ",i);
            }
        }
    }
}
int Factorial(int a){
    if(a==0 || a==1){
        return 1;
    }
    else{
        return a*Factorial(a-1);
    }
}
void Check_Prime(int a){
    int i,c=0;
    for(i=1;i<=a;i++){
        if(a%i==0)
        c++;
    }
    if(c==0){
        printf("Prime Number\n");
    }
    else{
        printf("Not Prime Number\n");
    }

}
int Fibonacci(int a){
    if(a==0)
      return 0;
    else if (a==1)
      return 1;
    return Fibonacci(a-1)+Fibonacci(a-2);
}
void Digit_Present(int a){
    int i,c=0;
    for(i=a;i>0;i=i/10){
        c++;
    }
    printf("\nNumber of digit present:%d \n",c);
}
void Armstrong_Number(int a){
    int i,c=0;
    double e=0, d=0;
    for(i=a;i>0;i=i/10){
        c=i%10;
        e= pow(c,3);
        d += e;
    }
    if(a==d){
        printf("Yes,Armstrong Number.\n");
    }
    else
        printf("No, not a Armstrong Number\n");
}
void Perfect_Number(int a){
    int i,c=0;
    for(i=1;i<a;i++){
        if(a%i==0)
        c += i;
    }
    if(a==c){
        printf("Yes,Perfect Number.\n");
    }
    else{
        printf("No, not a perfect number.\n");
    }
}


