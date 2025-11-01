#include <stdio.h>

int main(){
    int avg , i , sum;
    int arr[5];
    printf("we are taking inut of 5 subject for calc your percentage :3 :\n");
    for(i = 0 ; i < 5 ; i++ ){
        printf(" enter you marks: ");
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / 5 ;
    printf("the avg of teh numbers is %d \n", avg);


    return 0;
}    