/*Write a program in C to search an element in an array using linear searching technique.*/

/*NOTE:-in linear search sorting of array is not necessary or required.*/

#include <stdio.h>
#define MAX 10

int linearSearch(int arr[], int n, int target);

int main()
{
    int i, n, target, arr[MAX];
    printf("Enter the size of the matrix:");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d", &target);
    int result = linearSearch(arr, n, target);
    if (result == -1)
    {
        printf("Element not found in the array.");
    }
    else
    {
        printf("Element found at index:%d", result);
    }
}
int linearSearch(int arr[], int n, int target)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if (target == arr[i])
        {
            return (i);
        }
    }
    return (-1);
}