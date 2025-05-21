#include <stdio.h>

int main() 
{
    int rows = 6;
    int cols = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j == 0 ||                        
               (i == 0 && j < cols - 1) ||        
               (i == 2 && j < cols - 1) ||        
               (i == 1 && j == cols - 1))         
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}