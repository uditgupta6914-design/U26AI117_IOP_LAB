#include <stdio.h>

int main() {
    char str[200], oldChar, newChar;
    int i;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    printf("Enter character to replace: ");
    scanf(" %c", &oldChar);
    printf("Enter new character: ");
    scanf(" %c", &newChar);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }

    printf("Updated string: %s\n", str);
    return 0;
}
