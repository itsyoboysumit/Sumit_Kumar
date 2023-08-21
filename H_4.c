/*Write a program in C to take one Matrix of size M*N as input and.Pass the matrix in a function,
named makeDiagonalZero().This function will assign 0 to all diagonal elements of the matrix.Print
the original and modified matrix. */

#include <stdio.h>
#define MAX 10

void makeDiagonalZero(int arr[MAX][MAX],int n);

int main(){
    int arr[MAX][MAX],i,n;
    printf("Enter the rows and columns of the matrix:");
    scanf("%d",&n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Matrix:\n");
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    makeDiagonalZero(arr,n);
    return 0;
}
void makeDiagonalZero(int arr[MAX][MAX],int n){
    printf("Updated matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                arr[i][j]=0;
            }
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
}