#include <stdio.h>

int main()
{
    int a;
    printf("Enter how many numbers you want to insert in an array: ");
    scanf("%d", &a);

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("Next :\n ");
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;

    for (int i = a; i > 0 ; i--)
    {
        *ptr = *ptr * 2;
        ptr++;
    }
    ptr = arr; 
    for (int i = 0; i < a; i++)
    {
        printf("next pointer of array is %d\n", *(ptr + i));
    }
    return 0;
}
