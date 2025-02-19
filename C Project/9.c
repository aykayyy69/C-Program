#include <stdio.h>

int main() 
{
    int n, first = 0, second = 1, next, i;
    
    // Input from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d", first, second);

    for (i = 3; i <= n; i++) 
    {
        next = first + second;
        printf(" %d", next);
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
