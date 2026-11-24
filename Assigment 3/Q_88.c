#include <stdio.h>

int main() {
    char str[200], ch;
    int i, found = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    printf("Enter character to search: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Character '%c' found at index %d (position %d).\n", ch, i, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Character '%c' is NOT present in the string.\n", ch);
    }

    return 0;
}