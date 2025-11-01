#include <stdio.h>

int main() {
    int a, choice;
    printf("Enter how many numbers you want to insert in an array: ");
    scanf("%d", &a);
    
    int arr[a];  
    for (int i = 0; i < a; i++) {
        printf("Next element!:\n ");
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;

    do {
        printf("\n-----Menu-----\n");
        printf("1. Max and Min value in that array\n");
        printf("2. Sum of all numbers\n");
        printf("3. Avg value of the array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: {
                int max = *ptr;
                int min = *ptr;
                for(int i = 0; i < a; i++){
                    if(*(ptr + i) > max) max = *(ptr + i);
                    if(*(ptr + i) < min) min = *(ptr + i);
                }
                printf("Max = %d, Min = %d\n", max, min);
                break;
            }
            case 2: {
                int sum = 0;
                for(int i = 0; i < a; i++){
                    sum += *(ptr + i);
                }
                printf("Sum = %d\n", sum);
                break;
            }
            case 3: {
                int sum = 0;
                for(int i = 0; i < a; i++){
                    sum += *(ptr + i);
                }
                double avg = (double)sum / a;
                printf("Average = %.2f\n", avg);
                break;
            }
            case 5:{}  // multiply all elements
                for(int i = 0; i < a; i++)
                *(ptr + i) *= 2;
                printf("All elements doubled!\n");
                break;
            
            case 4: {
                printf("Exiting the program...\n");
                break;
            }
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4); 
    return 0;
}
