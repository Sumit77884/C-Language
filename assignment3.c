#include <stdio.h>

int main() {
    char uppercaseChar, lowercaseChar;

    // Read a character in uppercase
    printf("Enter a character in uppercase: ");
    scanf(" %c", &uppercaseChar);

    // Convert to lowercase
    lowercaseChar = uppercaseChar + 32;

    // Print the character in lowercase
    printf("The character in lowercase is: %c\n", lowercaseChar);

    return 0;
}
