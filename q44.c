#include <stdio.h>

int main() {
    int i, n;
    float sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    int numerator = 1;
    int denominator = 2;

    for(i = 1; i <= n; i++) {
        sum = sum + (float)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
