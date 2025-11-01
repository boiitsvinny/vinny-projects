// a problem solved on leet
#include <stdio.h>

int main(){
    int n, target;

    printf("enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("enter the elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("enter target sum: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("indices: [%d, %d]\n", i, j);
                return 0;
            }
        }
    }

    printf("no solution found.\n");
    
    return 0;
}
