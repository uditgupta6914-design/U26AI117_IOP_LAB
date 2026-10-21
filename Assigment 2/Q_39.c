#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms (N): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d/%d!", i , i);
        if (i < n) printf("+ ");
    }
    printf("\n");
    return 0;
}