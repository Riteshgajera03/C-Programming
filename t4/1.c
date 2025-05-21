#include <stdio.h>

int main() {
    int start = 41;
    int rows = 5;

    for(int i = 1; i <= rows; i++) {
        for(int j = 0; j < i; j++) {
            printf("%d ", start + j);
        }
        printf("\n");
    }
}