/*Write a program in C for a 2D array of size 3*3 and print the matrix.*/

#include <stdio.h>

#define MAX 100

int main()
{
    int arr[3][3], i,j;
    printf("Enter the elements of the first array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }

    }
    printf("Matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}