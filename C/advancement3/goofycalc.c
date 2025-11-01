#include <stdio.h>

int main() {
    int choice;
    float balance = 0; // ATM balance starts at 0

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Average, Greatest & Smallest of 3 Numbers\n");
        printf("6. Temperature Conversion\n");
        printf("7. ATM Simulation\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", a + b);
                break;
            }
            case 2: {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", a - b);
                break;
            }
            case 3: {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", a * b);
                break;
            }
            case 4: {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                if (b != 0)
                    printf("Result: %.2f\n", (float)a / b);
                else
                    printf("Error: Division by zero not allowed.\n");
                break;
            }
            case 5: {
                int x, y, z;
                printf("Enter three numbers: ");
                scanf("%d %d %d", &x, &y, &z);

                float avg = (x + y + z) / 3.0;
                int max = (x > y && x > z) ? x : (y > z ? y : z);
                int min = (x < y && x < z) ? x : (y < z ? y : z);

                printf("Average: %.2f\n", avg);
                printf("Greatest: %d\n", max);
                printf("Smallest: %d\n", min);
                break;
            }
            case 6: {
                int c;
                float temp, converted;
                printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter choice: ");
                scanf("%d", &c);

                if (c == 1) {
                    printf("Enter temperature in Celsius: ");
                    scanf("%f", &temp);
                    converted = (temp * 9 / 5) + 32;
                    printf("In Fahrenheit: %.2f\n", converted);
                } else if (c == 2) {
                    printf("Enter temperature in Fahrenheit: ");
                    scanf("%f", &temp);
                    converted = (temp - 32) * 5 / 9;
                    printf("In Celsius: %.2f\n", converted);
                } else {
                    printf("Invalid choice.\n");
                }
                break;
            }
            case 7: {
                int atmChoice;
                float amount;
                printf("\n--- ATM Simulation ---\n");
                printf("1. Deposit\n2. Withdraw\n3. Check Balance\nEnter choice: ");
                scanf("%d", &atmChoice);

                if (atmChoice == 1) {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    if (amount > 0) {
                        balance += amount;
                        printf("Deposited: %.2f\n", amount);
                    } else {
                        printf("Invalid deposit amount.\n");
                    }
                } else if (atmChoice == 2) {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    if (amount > 0 && amount <= balance) {
                        balance -= amount;
                        printf("Withdrawn: %.2f\n", amount);
                    } else {
                        printf("Invalid withdraw amount or insufficient balance.\n");
                    }
                } else if (atmChoice == 3) {
                    printf("Current Balance: %.2f\n", balance);
                } else {
                    printf("Invalid ATM option.\n");
                }
                break;
            }
            case 8:
                printf("Exiting... Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice, try again.\n");
        }
    }
}
