#include <stdio.h>

int main() {
    int size;
    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    int a[size][size], transpose[size][size];

    // Reading array elements
    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Transposing the matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    // Displaying the transpose
    printf("Transpose of the matrix is:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

}