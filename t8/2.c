#include <stdio.h>

void findCubes(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int val = *(arr + i * cols + j);
            printf("Cube of element [%d][%d] = %d\n", i, j, val * val * val);
        }
    }
}

int main() {
    int size, i, j;

    printf("Enter array's size: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("\nEnter array elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nCubes of all elements:\n");
    findCubes(&arr[0][0], size, size);  

}