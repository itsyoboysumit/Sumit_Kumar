#include<stdio.h>

int main()
{
    // Ask the user for input
    printf("Enter the number of rows to show the star pattern:  ");

    // Declare variables
    int n, x, y, s = 1, k;

    // Read the input from the user
    scanf("%d",&n);

    // Loop through each row
    for (x = 0; x <= n; x++) {

        // Print the required number of spaces before each star
        for (y = n; y > x; y--) {
            printf(" ");
        }

        // Print the first star on the row
        printf("*");

        // If the current row is not the first row
        if (x > 0) {

            // Print the required number of spaces between the stars
            for (k = 1; k <= s; k++) {
                printf(" ");
            }

            // Increase the number of spaces to be printed in the next row
            s += 2;

            // Print the second star on the row
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
