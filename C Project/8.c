#include <stdio.h>

int main() 
{
    int num;
    
    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking the number
    if (num > 0) 
    {
        printf("The number is Positive.\n");
    } 
    else if (num < 0) 
    {
        printf("The number is Negative.\n");
    } 
    else 
    {
        printf("The number is Zero.\n");
    }

    return 0;
}
