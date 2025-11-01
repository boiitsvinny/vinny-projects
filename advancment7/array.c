//basic start for array
#include <stdio.h>

int main() {
    int a, sum;
    printf("gimme the length of the array: ");
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) {
        printf("give the next element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    sum = 0;
    for (int i = 0; i < a; i++){
        sum += arr[i];
    }
    printf("\narray elements: ");
    for (int i = 0; i < a; i++)
        printf("%d ", arr[i]);

    printf("\nsum of elements = %d\n", sum);

    return 0;
}