#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int i = 0, diff = 0;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            diff = str1[i] - str2[i];
            break;
        }
        i++;
    }

    if (diff == 0) {
        printf("Both strings are equal.\n");
    } else if (diff > 0) {
        printf("First string is greater than second string.\n");
    } else {
        printf("First string is less than second string.\n");
    }

    return 0;
}