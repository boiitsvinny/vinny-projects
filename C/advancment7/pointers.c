//trying out pointers
#include <stdio.h>

int main() {
    int x = 42;
    int *ptr = &x;

    printf("x = %d\n", x);
    printf("&x = %p\n", &x);
    printf("ptr = %p\n", ptr);
    printf("*ptr = %d\n", *ptr);
}
