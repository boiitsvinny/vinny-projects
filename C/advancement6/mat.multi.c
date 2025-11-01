// mulitplications type thing

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, r2, c1, c2;
    int i, j, k;

    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrices cannot be multiplied. Exiting.\n");
        return 0;
    }

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    // initialize c to 0 for addition
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            c[i][j] = 0;

    // multiplication
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            for (k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];

    // print result
    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }

    return 0;
}
