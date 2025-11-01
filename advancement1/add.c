#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Provide the first number: ");
    scanf("%d", &a);
    
    printf("Provide the second number: ");
    scanf("%d", &b);
    
    int sum = a + b;
    printf("the output of the new sum is %d", sum);
    
    return 0;
}