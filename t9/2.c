#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    float percentage;
};

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter details of Student %d:\n", i + 1);
        printf("Roll no => ");
        scanf("%d", &s[i].roll_no);

        printf("Name => ");
        scanf(" %[^\n]", s[i].name);  

        printf("Chemistry => ");
        scanf("%d", &s[i].chem_marks);

        printf("Mathematics => ");
        scanf("%d", &s[i].maths_marks);

        printf("Physics => ");
        scanf("%d", &s[i].phy_marks);

        s[i].percentage = (s[i].chem_marks + s[i].maths_marks + s[i].phy_marks) / 3.0;
        printf("\n");
    }

    printf("\n--- Student Marksheet with Percentage ---\n");
    for(i = 0; i < 5; i++) {
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Name   : %s\n", s[i].name);
        printf("Chemistry: %d, Maths: %d, Physics: %d\n",
               s[i].chem_marks, s[i].maths_marks, s[i].phy_marks);
        printf("Percentage: %.2f%%\n\n", s[i].percentage);
    }

}