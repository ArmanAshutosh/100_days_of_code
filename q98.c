#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len;

    printf("Enter full name: ");
    gets(name);

    len = strlen(name);
    printf("Result: ");

    // Print first initials
    if (name[0] != ' ')
        printf("%c. ", name[0]);

    for (i = 1; i < len; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ' && name[i + 1] != '\0' && strchr(name + i, ' '))
            printf("%c. ", name[i]);
        else if (name[i - 1] == ' ' && name[i] != ' ' && !strchr(name + i, ' ')) {
            printf("%s", name + i);
            break;
        }
    }

    printf("\n");
    return 0;
}
