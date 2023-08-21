/*Write a prgram in C to find transpose of a given matrix.*/

#include <stdio.h>

#define N 10

int main()
{
    int arr1[N][N],arr2[N][N],i,j,n,m;
    printf("Enter the size of the matrix (rows and columns):");
    scanf("%d %d",&n,&m);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&arr1[i][j]);
        }

    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            arr2[j][i]=arr1[i][j];/*i,j ko interchange kar do or arr2 ke no of rows and columns ko v print karate time interchange kar do*/
        }
    }
    printf("Transpose of Given matrix is:\n");
    for(i=0;i<m;i++){ /*here m and n is swapped because the new transpose matrix will have m rows and n columns */
        for(j=0;j<n;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
}