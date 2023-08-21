/*
8. Draw the triangle up to nth term
       1
     2 3 4
   5 6 7 8 9
10 11 12 13 14 15 16
*/
#include <stdio.h>

int main() {
    int n, i, j, num = 1;

    printf("Enter the number of lines required: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // print spaces before the numbers
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // print the numbers
        for (j = 1; j <= i; j++) {
            printf("%-5d", num);/*In C language, width specifier is a special character used in the 
            format string of a printf() or scanf() function to specify the minimum width of the field
             for a variable to be printed or read.
For example, consider the printf() statement:
int num = 42;
printf("%5d", num);
Here, %5d is the format string that contains a width specifier. It specifies that the variable num
 should be printed in a field that is at least 5 characters wide. If the number has less than 5 digits,
  extra spaces will be added before the number to fill the field. So, the output of the above code
   will be:
*/
            num++;
        }

        // move to the next line
        printf("\n");
    }

    return 0;
}
