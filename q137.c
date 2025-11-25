#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    int r;

    printf("Enter role (1 = ADMIN, 2 = USER, 3 = GUEST): ");
    scanf("%d", &r);

    switch (r) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome, Guest! Please log in for more options.\n");
            break;

        default:
            printf("Invalid role.\n");
    }

    return 0;
}
