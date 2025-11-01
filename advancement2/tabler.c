#include <stdio.h>

int main()
{
    int num, limit;

    printf("which table: ");
    scanf("%d", &num);

    printf("untill how much should i print?: ");
    scanf("%d", &limit);
    
    for (int i = 1; i <= limit; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}