/*Write a program in C to find sum of Right diagonal, Left diagonal elements of a matrix.*/

#include <stdio.h>

#define N 10

int main()
{
    int arr[N][N],r=0,l=0,i,j,n;
    printf("Enter the size of the matrix (square matrix):");
    scanf("%d",&n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
            r+=arr[i][i]; /*adding the value of right diagonal and storing the in r variable*/
    }
    for(i=0;i<n;i++){
        l+= arr[i][n-1-i];
    }
    printf("Sum of the right diagonal:%d\n",r);
    printf("Sum of the left deagonal:%d",l);
    return 0;
}
