//test grounds for matrics prgrams 
#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter columns: ");
    scanf("%d", &c);

    //declare  mats
    int A[r][c], B[r][c], C[r][c];

    // input  1st mat
    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // input  2nd mat
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    // adding mats 
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // result
    printf("\n--- Sum Matrix (A + B) ---\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
