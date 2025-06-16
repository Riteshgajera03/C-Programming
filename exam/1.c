#include<stdio.h>

int main(){
 
    int i;
    int marks[5];
    char grade;
    float avarage;

    printf("Enter marks of 5 subjects: \n");
    for(int i = 0; i < 5; i++){
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += marks[i];
    }

    avarage = sum / 5.0;
    printf("Average marks: %.2f\n", avarage);
    if(avarage >= 90){
        grade = 'A';
    } else if(avarage >= 80){
        grade = 'B';
    }
    else if(avarage >= 70){
        grade = 'C';
    } else if(avarage >= 60){
        grade = 'D';
    } else if(avarage >= 50){
        grade = 'E';
    } else {
        grade = 'F';
    }
    printf("Grade: %c\n", grade);

    
}