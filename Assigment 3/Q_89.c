#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, count = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    printf("Total number of vowels: %d\n", count);
    return 0;
}