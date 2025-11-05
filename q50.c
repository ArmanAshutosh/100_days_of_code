#include <stdio.h>

int main() {
    int i, j, space;

    for(i = 5; i >= 1; i--) {           // rows from 5 to 1
        for(space = 5; space > i; space--) {
            printf(" ");                // print leading spaces
        }
        for(j = 1; j <= i; j++) {
            printf("*");                // print stars
        }
        printf("\n");                   // next line
    }

    return 0;
}
