#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s;

    printf("Enter status (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    scanf("%d", &s);

    switch (s) {
        case SUCCESS: printf("Operation completed successfully"); break;
        case FAILURE: printf("Operation failed"); break;
        case TIMEOUT: printf("Operation timed out"); break;
        default: printf("Invalid status"); 
    }

    return 0;
}
