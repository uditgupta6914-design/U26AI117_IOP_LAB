#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("\nCharacter\tASCII Code\n");
    printf("---------\t----------\n");
    for (i = 0; name[i] != '\0'; i++) {
        printf("'%c'\t\t%d\n", name[i], (int)name[i]);
    }

    return 0;
}