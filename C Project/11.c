#include <stdio.h>

int main() 
{
    int num, i, isPrime = 1;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if number is less than 2
    if (num < 2) 
    {
        isPrime = 0;  // Numbers less than 2 are not prime
    } 
    else 
    {
        // Check divisibility from 2 to num/2
        for (i = 2; i <= num / 2; i++) 
        {
            if (num % i == 0) 
            {
                isPrime = 0;  // If divisible, not prime
                break;
            }
        }
    }

    // Output result
    if (isPrime) 
    {
        printf("%d is a Prime number.\n", num);
    } 
    else 
    {
        printf("%d is not a Prime number.\n", num);
    }

    return 0;
}
