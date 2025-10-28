#include <stdio.h>

int main() {
    float num1, num2, sum, difference, product, quotient;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Checking for division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("\nResults:\n");
        printf("Sum = %.2f\n", sum);
        pr
