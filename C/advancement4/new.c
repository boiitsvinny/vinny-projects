#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main() {
    int size = 5;
    int len = 0;
    char *str = malloc(size * sizeof(char));
    char ch;
    int vowel_count = 0;

    if(str == NULL) {
        printf("Memory allocation failed LMAOOO\n");
        return 1;
    }

    printf("Type smth you tomfoolermenter and press that ENTER: ");

    while((ch = getchar()) != '\n') {
        str[len++] = ch;

            char lower = tolower(ch);
        if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            vowel_count++;
        }

        if(len >= size) {
            size *= 2;
            str = realloc(str, size * sizeof(char));
            if(str == NULL) {
                printf("Memory reallocation failed\n");
                return 1;
            }
        }
    }

    str[len] = '\0'; 
    printf("\nYou typed: %s\n", str);
    printf("Number of vowels: %d\n", vowel_count);

    free(str);
    str = NULL;
    return 0;
}
