// trying bubble sorting 
#include <stdio.h>

int main() {
    int n , temp;
    printf("give the n nuber of element you want in the array");
    scanf("%d", &n);
    int arr[n];
    printf("please enter the element of the 5 block array to sort the element: \n");
    for(int i = 0; i < n; i++) {
        printf("Give the next element: ");
        scanf("%d", &arr[i]);
    }
// ascending only btw
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted ascending array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

// decending only btw
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n");
    printf("Sorted decending array: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);


    return 0;
}