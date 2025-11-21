#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;

    fgets(str, sizeof(str), stdin);

    if (str[0] != '\0')
        str[0] = toupper(str[0]);

    for (i = 1; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);

    printf("%s", str);

    return 0;
}
