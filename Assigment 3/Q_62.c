#include <stdio.h>

int main() {
    int mat[3][3], i, j, max, min;

    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    max = min = mat[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (mat[i][j] > max) {
                max = mat[i][j];
            }
            if (mat[i][j] < min) {
                min = mat[i][j];
            }
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}