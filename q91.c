#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;
    char ch;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j++] = ch;
        }
        i++;
    }
    result[j] = '\0';

    printf("String after removing vowels: %s", result);
    return 0;
}
