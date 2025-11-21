#include <stdio.h>

int main() {
    int n, i, x;
    scanf("%d", &n);

    int arr[n], freq[n];
    
    for (i = 0; i < n; i++)
        freq[i] = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (freq[x] == 1) {
            printf("%d", x);
            return 0;
        }
        freq[x] = 1;
    }

    return 0;
}
