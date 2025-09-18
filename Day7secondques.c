#include <stdio.h>
int main() {
    char ch;

    // Input from the user
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);   // space before %c to skip any leftover newline

    // Check if it's an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Convert to lowercase for easy comparison (optional)
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

        // Check vowel
        if (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u') {
            printf("%c is a Vowel.\n", ch);
        } else {
            printf("%c is a Consonant.\n", ch);
        }
    } else {
        printf("%c is not an alphabet character.\n", ch);
    }

    return 0;
}

