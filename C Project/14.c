#include <stdio.h>

int main() 
{
    int num, reverse = 0, remainder;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) 
    {
        remainder = num % 10;           // Get last digit
        reverse = reverse * 10 + remainder;  // Build reversed number
        num /= 10;                      // Remove last digit
    }

    // Display the reversed number
    printf("Reversed number: %d\n", reverse);

    return 0;
}
