// this is something i didnt create but i definatily understood 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 50
#define NAME_LEN 30
#define SUBJECTS 3

typedef struct {
    char name[NAME_LEN];
    int marks[SUBJECTS];
} Student;

// Function declarations
void add_student(Student *students, int *count);
void print_students(Student *students, int count);
void highest_score(Student *students, int count);
void average_score(Student *students, int count);

int main() {
    Student students[MAX_STUDENTS];
    int student_count = 0;
    int choice;

    do {
        printf("\n---- Mini Student Score Manager ----\n");
        printf("1. Add student\n");
        printf("2. Print all students\n");
        printf("3. Show highest score\n");
        printf("4. Show average scores\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: add_student(students, &student_count); break;
            case 2: print_students(students, student_count); break;
            case 3: highest_score(students, student_count); break;
            case 4: average_score(students, student_count); break;
            case 5: printf("Exiting app...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}

// Add a student
void add_student(Student *students, int *count) {
    if(*count >= MAX_STUDENTS) {
        printf("Student limit reached!\n");
        return;
    }
    printf("Enter student name: ");
    scanf(" %29[^\n]", students[*count].name);

    for(int i = 0; i < SUBJECTS; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &students[*count].marks[i]);
    }
    (*count)++;
}

// Print all students
void print_students(Student *students, int count) {
    if(count == 0) { printf("No students added yet!\n"); return; }
    printf("\n--- Student List ---\n");
    for(int i = 0; i < count; i++) {
        printf("%s: ", students[i].name);
        for(int j = 0; j < SUBJECTS; j++) {
            printf("%d ", students[i].marks[j]);
        }
        printf("\n");
    }
}

// Find highest score among all students
void highest_score(Student *students, int count) {
    if(count == 0) { printf("No students added yet!\n"); return; }
    int max = students[0].marks[0];
    char *top_student = students[0].name;

    for(int i = 0; i < count; i++) {
        for(int j = 0; j < SUBJECTS; j++) {
            if(students[i].marks[j] > max) {
                max = students[i].marks[j];
                top_student = students[i].name;
            }
        }
    }
    printf("Highest score is %d by %s\n", max, top_student);
}

// Calculate average score for each student
void average_score(Student *students, int count) {
    if(count == 0) { printf("No students added yet!\n"); return; }
    for(int i = 0; i < count; i++) {
        int sum = 0;
        for(int j = 0; j < SUBJECTS; j++) sum += students[i].marks[j];
        double avg = (double)sum / SUBJECTS;
        printf("%s average: %.2f\n", students[i].name, avg);
    }
}
