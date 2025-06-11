#include <stdio.h>

// User Defined Functions for operations
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return (float)a / b;
}

int modulo(int a, int b) {
    if (b == 0) {
        printf("Error: Modulo by zero!\n");
        return 0;
    }
    return a % b;
}

int main() {
    int choice, a, b;

    while (1) {
        // Menu Display
        printf("\n---- Calculator Menu ----\n");
        printf("Press 1 for + (Addition)\n");
        printf("Press 2 for - (Subtraction)\n");
        printf("Press 3 for * (Multiplication)\n");
        printf("Press 4 for / (Division)\n");
        printf("Press 5 for %% (Modulo)\n");
        printf("Press 0 to Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting program.\n");
            break;
        }

        // Get input numbers
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        // Switch Case for operations
        switch (choice) {
            case 1:
                printf("Result = %d\n", add(a, b));
                break;
            case 2:
                printf("Result = %d\n", subtract(a, b));
                break;
            case 3:
                printf("Result = %d\n", multiply(a, b));
                break;
            case 4:
                printf("Result = %.2f\n", divide(a, b));
                break;
            case 5:
                printf("Result = %d\n", modulo(a, b));
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}