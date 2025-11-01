#include<stdio.h>

int main(){
    int a , n , sum;
    sum = 0;
    printf("gimme the number you already know wtf i am gonna do");
    scanf("%d",&n);
    for(a=0; a<=n;a++){
        if( a % 2 == 0 ){
            sum = sum + a;
            printf("%d\n", sum);
        }

    }
    return 0;
}