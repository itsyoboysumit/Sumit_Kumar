/*Write a program in C to take an array as input. Pass that array in a function , named as doSort()
This function will do a sort that data in descending order.Print the orignal and sorted array.*/

#include <stdio.h>
#define MAX 10

void doSort(int arr[], int n);

int main()
{
    int n,i,arr[MAX];
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        printf("Element [%d]:",i);
        scanf("%d",&arr[i]);
    }
    doSort(arr,n);

    printf("Updated array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void doSort(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
