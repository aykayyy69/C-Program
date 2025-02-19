#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int vowelCount = 0, consonantCount = 0, spaceCount = 0, digitCount = 0;
    
    printf("Enter a line of text: ");
    scanf("%[^\n]", str); // Reads input until a newline is encountered

    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        } 
        // Check for consonants
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonantCount++;
        } 
        // Check for digits
        else if (ch >= '0' && ch <= '9') {
            digitCount++;
        } 
        // Check for spaces
        else if (ch == ' ') {
            spaceCount++;
        }
    }

    printf("\nVowels: %d\nConsonants: %d\nSpaces: %d\nDigits: %d\n", vowelCount, consonantCount, spaceCount, digitCount);
    
    return 0;
}
