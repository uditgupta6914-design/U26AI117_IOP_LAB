#include <stdio.h>

int main() {
    int n, i, com = 0;
    
    printf("Enter a positive integer (N): ");
    scanf("%d", &n);
    
    if (n <= 1) {
        printf("%d is neither prime nor composite.\n", n);
    } else {

        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                com = 1;
                break;
            }
        }
        
        if (com == 0) {
            printf("%d is a PRIME number.\n", n);
        } else {
            printf("%d is a COMPOSITE number.\n", n);
        }
    }
    
    return 0;
}