#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, next;

    printf("First %d Fibonacci numbers: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    printFibonacci(5);
    printFibonacci(10);
    printFibonacci(15);

    return 0;
}