#include <stdio.h>

int main() 
{
    int n, i;

    // Input from user
    printf("Enter the number of even numbers to display: ");
    scanf("%d", &n);

    printf("First %d even numbers:\n", n);

    // Loop to print first n even numbers
    for (i = 1; i <= n; i++) 
    {
        printf("%d ", 2 * i);
    }

    printf("\n");
    return 0;
}
