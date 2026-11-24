#include <stdio.h>

int readAndFindLength(char str[]) {
    printf("Enter a line of text: ");
    scanf(" %[^\n]", str);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char text[200];
    int len = readAndFindLength(text);

    printf("Length of the string: %d\n", len);
    return 0;
}