/*Write a program in C to take one Matrix of size M*N as input and Spare Percentage value as input.
Pass that matrix in a function, named as isSpareMatrix(). This function will check weather it is a
Spare Matrix or not depending on spare percentage value. If that matrix hold more percentage of of
ZERO values than Spare Percentage value then that matrix is known as Spare Matrix. Print the Orginal
with Percentage of ZERO value.*/

#include <stdio.h>

#define MAX_N 10
#define MAX_M 10

void isSpare(int arr[MAX_N][MAX_N], int n, int m, int Spare_percentage);

int main()
{
    int i, j, n, m, spare_percentage;
    int arr[MAX_N][MAX_M];
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d", &n, &m);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Element [%d][%d]:",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter spare percentage value:");
    scanf("%d", &spare_percentage);
    isSpare(arr, n, m, spare_percentage);
}
void isSpare(int arr[MAX_N][MAX_N], int n, int m, int Spare_percentage)
{
    int i, j,c=0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                c++;
            }
        }
    }
    int total_element = n*m;
    float zero_percentage = ((float) c / total_element) * 100;
    if (zero_percentage > Spare_percentage)
    {
        printf("Given matrix is spare matrix with %.2f percent zero value.\n", zero_percentage);
    }
    else
    {
        printf("No, the given matrix is not a Spare Matrix and have %.2f percent zero value.\n", zero_percentage);
    }
    printf("Matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}