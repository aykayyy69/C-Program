#include <stdio.h>
#include <math.h> // For pow() function

int main() 
{
    int num, originalNum, remainder, result = 0, n = 0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (originalNum != 0) 
    {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Compute sum of each digit raised to power n
    while (originalNum != 0) 
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if it's an Armstrong number
    if (result == num) 
    {
        printf("%d is an Armstrong number.\n", num);
    } 
    else 
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
