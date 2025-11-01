#include <stdio.h>

int main()
{
    int a , b ;
     printf("gimmme the number to add: ");
     scanf("%d", &a);
    
     printf("gimme the second number to add: ");
     scanf("%d", &b);
    
     int sum; 
     sum = a + b;
     printf("the sum of the given number is %d\n", sum);

     return 0;
}