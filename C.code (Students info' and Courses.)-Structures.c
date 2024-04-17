#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 50

struct Student {
    char name1[MAX_LEN];
    char name2[MAX_LEN];
    char reg_num[MAX_LEN];
    char courses[3][MAX_LEN];
};

void displayStudentDetails(struct Student student) {
    printf("Name: %s %s\n", student.name1, student.name2);
    printf("Registration Number: %s\n", student.reg_num);
    printf("Courses:\n");
    for (int i = 0; i < 3; i++) {
        printf("- %s\n", student.courses[i]);
    }
}

void editStudentDetails(struct Student *student) {
    printf("Enter new details:\n");
    printf("First Name: ");
    scanf("%s", student->name1);
    printf("Last Name: ");
    scanf("%s", student->name2);
    printf("Registration Number: ");
    scanf("%s", student->reg_num);
    printf("Enter three courses:\n");
    for (int i = 0; i < 3; i++) {
        printf("Course %d: ", i+1);
        scanf("%s", student->courses[i]);
    }
}

int main() {
    struct Student students[2];
    FILE *file;
    char filename[] = "student_details.txt";

    // Get details for two students
    for (int i = 0; i < 2; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("First Name: ");
        scanf("%s", students[i].name1);
        printf("Last Name: ");
        scanf("%s", students[i].name2);
        printf("Registration Number: ");
        scanf("%s", students[i].reg_num);
        printf("Enter three courses:\n");
        for (int j = 0; j < 3; j++) {
            printf("Course %d: ", j+1);
            scanf("%s", students[i].courses[j]);
        }
        printf("\n");
    }

    file = fopen(filename, "w");
    if (file != NULL) {
        for (int i = 0; i < 2; i++) {
            fprintf(file, "Student %d Details:\n", i + 1);
            fprintf(file, "Name: %s %s\n", students[i].name1, students[i].name2);
            fprintf(file, "Registration Number: %s\n", students[i].reg_num);
            fprintf(file, "Courses:\n");
            for (int j = 0; j < 3; j++) {
                fprintf(file, "- %s\n", students[i].courses[j]);
            }
            fprintf(file, "\n");
        }
        fclose(file);
    } else {
        printf("Error: Unable to open file %s\n", filename);
        return 1;
    }

    // Display student details
    printf("Student Details:\n");
    for (int i = 0; i < 2; i++) {
        printf("Student %d:\n", i + 1);
        displayStudentDetails(students[i]);
        printf("\n");
    }

    int student_choice;
    printf("Enter the student number to edit details (1 or 2): ");
    scanf("%d", &student_choice);
    if (student_choice == 1 || student_choice == 2) {
        editStudentDetails(&students[student_choice - 1]);
        printf("Details updated successfully!\n");
    } else {
        printf("Invalid student number!\n");
    }

    return 0;
}


