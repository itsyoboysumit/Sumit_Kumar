/*Write a program in C to find sum of rows and columns of a matrix.*/
#include <stdio.h>

#define N 10

int main()
{
    int arr[N][N],i,j,n,m;
    printf("Enter the size of the matrix(rows and columns):");
    scanf("%d %d",&n,&m);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Sum of rows:\n");
    for(i=0;i<n;i++){
        int c=0;
        for(j=0;j<m;j++){
            c+= arr[i][j];
        }
        printf("R[%d]:%d\n",i,c);
        arr[i][m]=c;
    
    }
    printf("Sum of the columns:\n");
    for(j=0;j<m;j++){
        int c=0;
        for(i=0;i<n;i++){
            c+= arr[i][j];
        }
        printf("C[%d]:%d\n",j,c);
        arr[n][j]=c;
    
    }
    arr[n][m]=0;

    printf("Modified Matrix:\n");
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}