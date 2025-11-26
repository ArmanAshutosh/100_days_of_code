#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i, maxIndex = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    printf("\nTopper:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s[maxIndex].name, s[maxIndex].roll, s[maxIndex].marks);

    return 0;
}
