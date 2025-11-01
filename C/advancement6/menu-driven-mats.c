#include <stdio.h>

int main (){
    int i , j , k , ch , tc;
    int a[10][10], b[10][10] ,c[10][10];
    int r1 , c1, r2, c2;

    printf("please enter the matrics A\n");
    printf("how many rows and coloumn in matrics a?:\n ");
    scanf("%d %d", &r1, &c1);
    for(i = 0 ; i< r1 ; i++){
        for( j= 0 ; j< c1; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("please enter the matrics b\n");
    printf("how many rows and coloumn in matrics b?:\n ");
    scanf("%d %d", &r2, &c2);
    for(i = 0 ; i< r2 ; i++){
        for( j= 0 ; j< c2; j++){
            scanf("%d", &b[i][j]);
        }
    }
    do{
        printf("------menu-----\n");
        printf("which function would you like to perform in the given matrics ?:\n ");
        printf("1: addition\n");
        printf("2: subtract\n");    
        printf("3: multiplication\n");
        printf("4: transpose\n");
        printf("5: exit the program ?\n");
        printf("please enter you choice");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                if (r1 != r2 || c1 != c2) {
                    printf("size matters :-( , cannot perfor the opration due to invalid size\n");
                    break;
                }
                for (i = 0; i < r1; i++)
                    for (j = 0; j < c1; j++)
                        c[i][j] = a[i][j] + b[i][j];
                printf("Result (A + B):\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++)
                        printf("%d\t", c[i][j]);
                    printf("\n");
                }
                break;

            case 2:
                if (r1 != r2 || c1 != c2) {
                    printf("Subtraction not possible! Matrices must be same size.\n");
                    break;
                }
                for (i = 0; i < r1; i++)
                    for (j = 0; j < c1; j++)
                        c[i][j] = a[i][j] - b[i][j];
                printf("Result (A - B):\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++)
                        printf("%d\t", c[i][j]);
                    printf("\n");
                }
                break;

            case 3:
                if (c1 != r2) {
                    printf("Multiplication not possible!\n");
                    break;
                }
                for (i = 0; i < r1; i++)
                    for (j = 0; j < c2; j++)
                        c[i][j] = 0;
                for (i = 0; i < r1; i++)
                    for (j = 0; j < c2; j++)
                        for (k = 0; k < c1; k++)
                            c[i][j] += a[i][k] * b[k][j];
                printf("Result (A x B):\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c2; j++)
                        printf("%d\t", c[i][j]);
                    printf("\n");
                }
                break;

            case 4:
                printf("trainsformation ( transpose ) to which matrics ? a or b ? ");
                scanf("%d", &tc);
                if (tc == 1) {
                    printf("Transpose of A:\n");
                    for (i = 0; i < c1; i++) {
                        for (j = 0; j < r1; j++)
                            printf("%d\t", a[j][i]);
                        printf("\n");
                    }
                } else if (tc == 2) {
                    printf("Transpose of B:\n");
                    for (i = 0; i < c2; i++) {
                        for (j = 0; j < r2; j++)
                            printf("%d\t", b[j][i]);
                        printf("\n");
                    }
                } else {
                    printf("Invalid choice!\n");
                }
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid option!\n");
        }
    } while(ch != 5);

    return 0;
}
