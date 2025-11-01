// a practise revision for matrics programm 
#include <stdio.h>

int main() {
    int i, j;
    int a[10][10], b[10][10], c[10][10];
    int r , c1 ;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c1);

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c1; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c1; j++){
            scanf("%d", &b[i][j]);
        }
    }
    // Addition
    for(i = 0; i < r; i++){
        for(j = 0; j < c1; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    printf("Sum of A + B:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c1; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}