#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    // Prompt the user for input
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter valid integers.\n");
        return 1;
    }

    // Perform operations
    int sum = num1 + num2;
    int product = num1 * num2;
    int difference = num1 - num2;

    // Display basic operations
    printf("\n--- Results ---\n");
    printf("Sum: %d + %d = %d\n", num1, num2, sum);
    printf("Difference: %d - %d = %d\n", num1, num2, difference);
    printf("Product: %d * %d = %d\n", num1, num2, product);

    // Check for division by zero before computing quotient and remainder
    if (num2 != 0) {
        int quotient = num1 / num2;
        int remainder = num1 % num2;
        printf("Quotient: %d / %d = %d\n", num1, num2, quotient);
        printf("Remainder: %d %% %d = %d\n", num1, num2, remainder);
    } else {
        printf("Quotient: Undefined (cannot divide by zero)\n");
        printf("Remainder: Undefined (cannot divide by zero)\n");
    }

    return 0;
}