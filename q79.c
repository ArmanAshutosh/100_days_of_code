#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, k;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal of the matrix:\n");

    // Traverse upper diagonals (including main diagonal)
    for(k = 0; k < c; k++) {
        i = 0;
        j = k;
        while(i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Traverse lower diagonals
    for(k = 1; k < r; k++) {
        i = k;
        j = c - 1;
        while(i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
