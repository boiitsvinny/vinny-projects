#include <stdio.h>

int main(){
    int a;
    int b;
    printf("which table would you like to know about ?");
    scanf("%d" ,&b);
    int c;

    for (a = 1; a <= 10; a++) {
        c = a * b;
        printf("%d x %d = %d\n", b, a, c);
    }
    return 0;
}
