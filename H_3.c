/*Write a program in C to take two arrays as input.Pass those arrays in a function,named as 
isEqual() and check those arrays are equal or not.*/

#include <stdio.h>

#define MAX 10

void isEqual(int arr1[], int arr2[], int n, int m);
 
int main() {
    int arr1[MAX], arr2[MAX], i, n, m;
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &m);
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < m; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    isEqual(arr1, arr2, n, m);
    return 0;
}

void isEqual(int arr1[], int arr2[], int n, int m) {
    if (n != m) {
        printf("No, both arrays are not equal.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            printf("No, both arrays are not equal.\n");
            return;
        }
    }

    printf("Yes, both arrays are equal.\n");
}
