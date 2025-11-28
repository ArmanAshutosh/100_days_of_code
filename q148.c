#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;

    // Input for first student
    printf("Enter first student's name: ");
    scanf("%s", s1.name);

    printf("Enter first student's roll: ");
    scanf("%d", &s1.roll);

    printf("Enter first student's marks: ");
    scanf("%f", &s1.marks);

    // Input for second student
    printf("\nEnter second student's name: ");
    scanf("%s", s2.name);

    printf("Enter second student's roll: ");
    scanf("%d", &s2.roll);

    printf("Enter second student's marks: ");
    scanf("%f", &s2.marks);

    // Check if identical
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks) 
    {
        printf("\nBoth structures are IDENTICAL.\n");
    } else {
        printf("\nStructures are NOT identical.\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;

    // Input for first student
    printf("Enter first student's name: ");
    scanf("%s", s1.name);

    printf("Enter first student's roll: ");
    scanf("%d", &s1.roll);

    printf("Enter first student's marks: ");
    scanf("%f", &s1.marks);

    // Input for second student
    printf("\nEnter second student's name: ");
    scanf("%s", s2.name);

    printf("Enter second student's roll: ");
    scanf("%d", &s2.roll);

    printf("Enter second student's marks: ");
    scanf("%f", &s2.marks);

    // Check if identical
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks) 
    {
        printf("\nBoth structures are IDENTICAL.\n");
    } else {
        printf("\nStructures are NOT identical.\n");
    }

    return 0;
}
