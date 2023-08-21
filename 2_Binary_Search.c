/*Write a program in C to take an array as input from the user and then sort that array, after sorting
write a function to search an element of the array using binary search algo.*/

/*NOTE:- Before searching an element sorting of array is compulsory.*/

#include <stdio.h>
#define MAX 10
int binarySearch(int arr[], int left, int right, int target);
void bubbleSort(int arr[], int n);

int main()
{
    int i, target, n, arr[MAX];
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n); // to short the taken matrix first
    printf("Enter the element to be searched:");
    scanf("%d", &target);
    int left = 0;
    int result = binarySearch(arr, left, n, target);
    if (result != -1)
        printf("Element found at index:%d", result);
    else
        printf("Element not found in array.");
    return 0;
}
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = arr[j];
            }
        }
    }
}
int binarySearch(int arr[], int left, int right, int target)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2; // remember formula

        if (target == arr[mid])
        {
            return mid;
        }
        if (target < arr[mid])
        {
            right = mid - 1; // we will only check left side of the array thats why right is shifted
            // to mid-1 and left will be at same place
        }
        else
        {
            left = mid + 1; // left will shift and right will be at same place
        }
    }
    return -1;
}