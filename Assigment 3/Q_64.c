#include <stdio.h>

int main() {
    int mat[3][3], transpose[3][3], i, j;

    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}