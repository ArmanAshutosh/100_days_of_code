#include <stdio.h>

int main() {
    int num, digit, count[10] = {0}, max = 0, mostFreqDigit, i;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            mostFreqDigit = i;
        }
    }

    printf("The digit that occurs most is %d\n", mostFreqDigit);

    return 0;
}
