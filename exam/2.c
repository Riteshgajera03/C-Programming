#include<stdio.h>

int main(){
 

    int rows;
    int cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    int arr[rows][cols];

    printf("Enter elements of the array:\n");
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    float sum = 0;
    
    int totalElements = rows * cols;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            sum += arr[i][j];
        }
    }
    
    float average = sum / totalElements;
    printf("Average of all elements: %.2f\n", average);
}