#include <stdio.h>
#include <ctype.h>

void checkVowel() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    char lower = tolower(ch);
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
        printf("'%c' is a Vowel.\n", ch);
    } else if (isalpha(ch)) {
        printf("'%c' is NOT a Vowel (it is a Consonant).\n", ch);
    } else {
        printf("'%c' is NOT an alphabet character.\n", ch);
    }
}

int main() {
    checkVowel();
    return 0;
}