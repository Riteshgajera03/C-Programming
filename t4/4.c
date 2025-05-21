#include <stdio.h>

int main() {
    int i, j;
    int r = 5; 

    for(i = 0; i < r; i++) {
        for(j = 0; j < i; j++) {
            printf("  ");
        }
        
        for(j = 0; j < r - i; j++) {
            printf("%d ", j % 2);
        }

        printf("\n");
    }
}