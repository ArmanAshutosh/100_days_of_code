#include <stdio.h>

int main() {
    int num, first, last, temp, count = 0, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    // Find first digit and number of digits
    while (temp >= 10) {
        temp = temp / 10;
        count++;
        power = power * 10;
    }
    first = temp;

    // Swap first and last digits
    num = num % power;      // remove first digit
    num = num / 10;         // remove last digit
    num = last * power + num * 10 + first;

    printf("Number after swapping first and last digit: %d\n", num);

    return 0;
}
