#include <stdio.h>

int main() {
    char str[200];
    int i, lower = 0, upper = 0, digits = 0, special = 0;

    printf("Enter a line of text: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            lower++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            upper++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] != ' ') {
            special++;
        }
    }

    printf("Lowercase letters: %d\n", lower);
    printf("Uppercase letters: %d\n", upper);
    printf("Digits:            %d\n", digits);
    printf("Special symbols:   %d\n", special);

    return 0;
}