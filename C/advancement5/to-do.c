//including both library then defining the variables

#include <stdio.h>
#include <string.h>

#define MAX_TASKS 50
#define MAX_LEN 100

// Function declarations for code
void add_task(char tasks[][MAX_LEN], int *count);
void view_tasks(char tasks[][MAX_LEN], int count);
void delete_task(char tasks[][MAX_LEN], int *count);
void mark_done(char tasks[][MAX_LEN], int count);

// mian body starts
int main() {
    char tasks[MAX_TASKS][MAX_LEN];
    int task_count = 0;
    int choice;

    do {
        printf("\n---- Mini To-Do List Manager ----\n");
        printf("1. Add task\n");
        printf("2. View tasks\n");
        printf("3. Mark task as done\n");
        printf("4. Delete task\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: add_task(tasks, &task_count); break;
            case 2: view_tasks(tasks, task_count); break;
            case 3: mark_done(tasks, task_count); break;
            case 4: delete_task(tasks, &task_count); break;
            case 5: printf("Exiting app...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 5);

    return 0;
}

// Adding a task to the list 

void add_task(char tasks[][MAX_LEN], int *count) {
    if(*count >= MAX_TASKS) {
        printf("Task list full!\n");
        return;
    }
    printf("Enter task description: ");
    scanf(" %[^\n]", tasks[*count]); // reads until newline ( space )
    (*count)++;
}

// Viewing all tasks
void view_tasks(char tasks[][MAX_LEN], int count) {
    if(count == 0) 
    { 
        printf("No tasks yet!\n");
        return; 
    }
    printf("\n--- Tasks ---\n");
    for(int i = 0; i < count; i++) {
        printf("%d: %s\n", i+1, tasks[i]);
    }
}

// Mark task as done (simply append "[DONE]" to strings)
void mark_done(char tasks[][MAX_LEN], int count) {
    if(count == 0) { printf("No tasks to mark!\n"); return; }
    int n;
    printf("Enter task number to mark as done: ");
    scanf("%d", &n);
    if(n < 1 || n > count) { printf("Invalid task number!\n"); return; }
    strcat(tasks[n-1], " [DONE]");
}

// Deleting a task
void delete_task(char tasks[][MAX_LEN], int *count) {
    if(*count == 0) { printf("No tasks to delete!\n"); return; }
    int n;
    printf("Enter task number to delete: ");
    scanf("%d", &n);
    if(n < 1 || n > *count) { printf("Invalid task number!\n"); return; }
    for(int i = n-1; i < *count-1; i++) {
        strcpy(tasks[i], tasks[i+1]); // shift tasks left idk for what reason :3
    }
    (*count)--;
    printf("Task deleted!\n");
}
