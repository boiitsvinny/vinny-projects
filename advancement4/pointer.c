#include <stdio.h>

int main()
{
    int n, i;
    
    int *ptr;
    printf("gotta print an array right ? lets do it");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("next number\n");
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    printf("\n print the number using pointer\n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = %d  |  *(ptr+%d) = %d\n", i, arr[i], i, *(ptr + i));
    }

    return 0;
}
