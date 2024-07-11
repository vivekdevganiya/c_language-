#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
    float percentage;
};

int main() {
    struct Student students[5];
    int i;

    for (i = 0; i < 5; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        
        printf("Chemistry Marks (out of 100): ");
        scanf("%f", &students[i].chem_marks);
        
        printf("Mathematics Marks (out of 100): ");
        scanf("%f", &students[i].maths_marks);
        
        printf("Physics Marks (out of 100): ");
        scanf("%f", &students[i].phy_marks);

        students[i].percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 300.0 * 100.0;

        printf("\n"); 
    }

    printf("**** Mark Sheet ****\n");
    for (i = 0; i < 5; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry Marks: %.2f\n", students[i].chem_marks);
        printf("Mathematics Marks: %.2f\n", students[i].maths_marks);
        printf("Physics Marks: %.2f\n", students[i].phy_marks);
        printf("Percentage: %.2f%%\n", students[i].percentage);
        printf("\n"); 
    }

    return 0;
}

