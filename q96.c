#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str + start, str + i - 1);
            start = i + 1;
        }
        if (str[i] == '\0')
            break;
        i++;
    }

    printf("Reversed sentence: %s\n", str);
    return 0;
}
