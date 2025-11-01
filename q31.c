#include <stdio.h>

int main() {
    int num, i;
    int binary[32]; // Assuming 32-bit integer
    int index = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (num > 0) {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }

    printf("Binary: ");
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
