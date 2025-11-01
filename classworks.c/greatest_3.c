#include <stdio.h>

int main(){
    int i, max;
    int arr[3];
    printf("give the 3 numbers you wanna print :\n");
    for (i = 0 ; i < 3 ; i++){
        printf("next number: ");
        scanf("%d", &arr[i]);
    }
    max = arr[0];

    for (i = 1 ; i < 3 ; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    printf("Greatest number is: %d\n", max);
    return 0;
}
