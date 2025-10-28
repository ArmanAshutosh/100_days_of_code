#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input number
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum of first n natural numbers
    for(i = 1; i <= n; i++) {
        sum += i;  // same as sum = sum + i
    }

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
