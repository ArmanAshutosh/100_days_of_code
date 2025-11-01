#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Invalid triangle.\n");
        return 0;
    }

    if (a == b && b == c)
        printf("Equilateral triangle.\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles triangle.\n");
    else
        printf("Scalene triangle.\n");

    return 0;
}
