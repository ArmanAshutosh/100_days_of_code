#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Display before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swap without using a third variable
    a = a + b;  // Step 1: sum of both numbers stored in a
    b = a - b;  // Step 2: subtract b from sum to get original a
    a = a - b;  // Step 3: subtract new b (original a) from sum to get original b

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

