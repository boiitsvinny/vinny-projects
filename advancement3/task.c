#include <stdio.h>

int main()
{
    int n, sq, i;
    printf("gimme a number that i will print upto the sqare fuk");
    scanf("%d", &n);
    for (i=0; i<=n; i++)
    {
        sq = i * i;
        printf("there goes the table : %d\n", sq);
    }
    return 0;
}