#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n) == 1) {
        printf("%d is a Prime number (Returned 1).\n", n);
    } else {
        printf("%d is NOT a Prime number (Returned 0).\n", n);
    }

    return 0;
}