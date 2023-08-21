/*Write a program in C for addition of two Matrices of same size.*/

#include <stdio.h>

#define N 10

int main(){
    int arr1[N][N],arr2[N][N],sum[N][N],i,j,n,m;
    printf("Enter the size of the matrix(rows and columns):");
    scanf("%d  %d",&n,&m);
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];

        }
    }
    printf("Sum of the two matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;


}