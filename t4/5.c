#include <stdio.h>

int main() {
    int i, j;
    int n = 5; 

    for (i = n; i >= 1; i--) {
        for (j = 1; j < i; j++) {
            printf("  ");
        }

        for (j = i; j <= n; j++) {
            printf("%d ", j);
        }

        for (j = n - 1; j >= i; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }
}