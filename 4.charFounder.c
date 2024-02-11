#include <stdio.h>

int main() {
    char c;					// Declaring an variable to store the input character from user.

    printf("Enter any letter: ");		// User prompt
    scanf("%c", &c);				// Store input character

    if (c >= 'A' && c <= 'Z') {		
        printf("%c is a capital letter.\n", c);		// If the character is uppercase
    }else if (c >= 'a' && c <= 'z') {
        printf("%c is a small letter.\n", c);		// If the character is lowercase
    }else {
        printf("%c is not a letter.\n", c);		// If it is not an alphabet
    }

    return 0;
}