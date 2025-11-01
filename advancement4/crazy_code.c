#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int count_vowels(char *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        char lower = tolower(str[i]);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            count++;
    }
    return count;
}

int count_consonants(char *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        if (isalpha(str[i]))
        {
            char lower = tolower(str[i]);
            if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u')
                count++;
        }
    }
    return count;
}

int count_digits(char *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        if (isdigit(str[i]))
            count++;
    }
    return count;
}

void reverse_string(char *str)
{
    int i = 0, j = strlen(str) - 1;
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int is_palindrome(char *str)
{
    int i = 0, j = strlen(str) - 1;
    while (i < j)
    {
        if (tolower(str[i]) != tolower(str[j]))
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main()
{
    int size = 10, len = 0, choice;
    char *str = malloc(size * sizeof(char));
    char ch;

    if (str == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Type the string that we are about to perform functions upon (press ENTER to finish): ");

    while ((ch = getchar()) != '\n')
    {
        str[len++] = ch;
        if (len >= size)
        {
            size *= 2;
            str = realloc(str, size * sizeof(char));
            if (str == NULL)
            {
                printf("Memory reallocation failed sorry\n");
                return 1;
            }
        }
    }
    str[len] = '\0';

    do
    {
        printf("\n---- Menu ----\n");
        printf("1 Count vowels\n");
        printf("2 Count consonants\n");
        printf("3 Count digits\n");
        printf("4 Reverse string\n");
        printf("5 Check palindrome\n");
        printf("6 Print string\n");
        printf("7 Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Vowels: %d\n", count_vowels(str));
            break;
        case 2:
            printf("Consonants: %d\n", count_consonants(str));
            break;
        case 3:
            printf("Digits: %d\n", count_digits(str));
            break;
        case 4:
            reverse_string(str);
            printf("Reversed string: %s\n", str);
            break;
        case 5:
            printf("Palindrome: %s\n", is_palindrome(str) ? "Yes" : "No");
            break;
        case 6:
            printf("String: %s\n", str);
            break;
        case 7:
            printf("Exiting....\n");
            break;
        default:
            printf("Invalid choice!, run again\n");
        }
    } while (choice != 7);
    free(str);
    return 0;
}