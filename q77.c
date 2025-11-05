#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, diag[10], k = 0, distinct = 1;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    if(r != c) {
        printf("Not a square matrix — diagonal check not applicable.\n");
        return 0;
    }

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            if(i == j)
                diag[k++] = a[i][j];
        }
    }

    for(i = 0; i < k; i++) {
        for(j = i + 1; j < k; j++) {
            if(diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
    }

    if(distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
