#include<stdio.h>

int main(){

    int arr[10];
    int i;
    int *ptr;
    int count = 0;
    ptr = arr;


    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", ptr + i);
    }
    printf("Odd elements are:\n");
    for(i = 0; i < 10; i++){
        if(*(ptr + i) % 2 != 0){
            printf("%d ", *(ptr + i));
        }
    }
    printf("\n");

}