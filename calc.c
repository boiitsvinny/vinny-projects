#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;

    printf("Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter the first number:");
    scanf("%f", &a);
    
    printf("Enter the second number:");
    scanf("%f", &b);
    
    if (choice == 1)
    {
        result = a + b;
        printf("sum = %.2f\n", result);
    }
    else if (choice == 2)
    {
        result = a - b;
        printf("subtraction result = %.2f\n", result);
    }
    else if (choice == 3)
    {
        result = a * b;
        printf("multiplied when it gives = %.2f\n", result);
    }
    else if (choice == 4)
    {
        if (b != 0)
            result = a / b;
        else
            printf("error , not divisible by 0 \n");
        printf("divied , it gives = %.2f\n", result);
    }
    else
    {
        printf("Invalid choice of yours .\n------exiting-----\n");
    }
    return 0;
}