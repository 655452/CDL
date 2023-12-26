#include <stdio.h>
#include <stdbool.h>

int main() {
    int c;
    bool inWhitespace = false;

    while ((c = getchar()) != EOF) {
        // Check if the character is a whitespace character
        if (c == ' ' || c == '\t' || c == '\n') {
            // If we are not already in a whitespace sequence, print one space
            if (!inWhitespace) {
                putchar(' ');
                inWhitespace = true;
            }
        } else {
            // If the character is not a whitespace character, print it
            putchar(c);
            inWhitespace = false;
        }
    }

    return 0;
}
