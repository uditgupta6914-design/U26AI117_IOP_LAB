#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100], copyStr[200];

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    // 1. Length
    printf("\nLength of first string: %zu\n", strlen(str1));

    // 2. Copy
    strcpy(copyStr, str1);
    printf("Copied string: %s\n", copyStr);

    // 3. Compare
    int cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("Comparison: Both strings are equal.\n");
    } else if (cmp > 0) {
        printf("Comparison: First string is greater.\n");
    } else {
        printf("Comparison: Second string is greater.\n");
    }

    // 4. Concatenate
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // 5. Reverse (Note: strrev is available in MinGW/Windows GCC & Turbo C)
    printf("Reversed copy of first string: %s\n", strrev(copyStr));

    return 0;
}