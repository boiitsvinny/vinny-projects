#include <stdio.h>

void inputMarks(int marks[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

void displayMarks(int marks[], int n) {
    printf("\nMarks of students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }
}

float averageMarks(int marks[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }
    return (float)sum / n;
}

int highestMark(int marks[], int n) {
    int max = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
    }
    return max;
}

int lowestMark(int marks[], int n) {
    int min = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] < min) {
            min = marks[i];
        }
    }
    return min;
}

int main() {
    int choice, n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];

    while (1) {
        printf("\n--- Student Marks Manager ---\n");
        printf("1. Input Marks\n");
        printf("2. Display Marks\n");
        printf("3. Find Average Marks\n");
        printf("4. Find Highest Marks\n");
        printf("5. Find Lowest Marks\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputMarks(marks, n);
                break;
            case 2:
                displayMarks(marks, n);
                break;
            case 3:
                printf("Average Marks = %.2f\n", averageMarks(marks, n));
                break;
            case 4:
                printf("Highest Marks = %d\n", highestMark(marks, n));
                break;
            case 5:
                printf("Lowest Marks = %d\n", lowestMark(marks, n));
                break;
            case 0:
                printf("Exiting... Bye!\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
