#include <stdio.h>

int main()
{
    int r, c;
    printf("give the number of rows of them matrix: ");
    scanf("%d", &r);
    printf("give the number of columns of them matrix: ");
    scanf("%d", &c);

    int A[r][c];
    // taking inputs
    printf("gimme them matrix numbers please:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // printing the input matrix
    printf("\n--- the matrix ---\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // printing transpose matrix
    printf("\n--- the transpose of the matrix ---\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", A[j][i]);
        }
        printf("\n"); 
    }

    return 0;
}
