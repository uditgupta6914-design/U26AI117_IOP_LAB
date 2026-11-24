#include <stdio.h>

int isArmstrong(int num) {
    int original = num, digits = 0, temp = num, sum = 0, rem;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        rem = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= rem;
        }
        sum += power;
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is NOT an Armstrong number.\n", n);
    }

    return 0;
}