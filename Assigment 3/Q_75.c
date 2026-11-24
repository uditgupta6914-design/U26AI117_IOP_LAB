#include <stdio.h>

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

long long calculateNCR(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter values of N and R (N >= R): ");
    scanf("%d %d", &n, &r);

    if (n < r || n < 0 || r < 0) {
        printf("Invalid input. Ensure N >= R >= 0.\n");
    } else {
        printf("nCr = %lld\n", calculateNCR(n, r));
    }

    return 0;
}