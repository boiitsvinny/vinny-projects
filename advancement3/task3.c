#include <stdio.h>

void summy(int a, int b)
{
    int sum;
    sum = a + b;
    printf("the sum of the function is %d", sum);
}

int main(){
    int c , x , y;
    printf("do you want me to call the daddy sum? 1 for yes btw ");
    scanf("%d",&c);
    if(c == 1){
        printf("gimme them numbers already ( gimme 2)");
        scanf("%d %d", &x, &y);
        summy( x , y );
    }
    else{
        printf("invalid choice niga");

    }
    return 0;
}