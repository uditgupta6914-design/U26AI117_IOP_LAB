#include <stdio.h>

int main() {
    char str[200];
    int i = 0, chars = 0, words = 0, inWord = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (str[i] != '\0') {
        chars++;
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
        i++;
    }

    printf("Total characters: %d\n", chars);
    printf("Total words:      %d\n", words);

    return 0;
}