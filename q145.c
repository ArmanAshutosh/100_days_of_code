#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, top = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks)
            top = i;
    }
    return s[top];
}

int main() {
    int n = 5;
    struct Student s[5] = {
        {"Rahul", 1, 85.5},
        {"Sneha", 2, 91.0},
        {"Vikram", 3, 78.0},
        {"Anita", 4, 95.5},
        {"Pooja", 5, 88.0}
    };

    struct Student top = getTopStudent(s, n);

    printf("Top Student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll: %d\n", top.roll);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
