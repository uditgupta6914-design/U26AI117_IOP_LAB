#include <stdio.h>

int main() {
    int mat[3][3], i, j, rowSum;

    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        rowSum = 0;
        for (j = 0; j < 3; j++) {
            rowSum += mat[i][j];
        }
        printf("Sum of Row %d: %d\n", i + 1, rowSum);
    }

    return 0;
}