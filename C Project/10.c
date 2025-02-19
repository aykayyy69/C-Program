#include <stdio.h>

int main() 
{
    int a = 1, d = 4, term, i;

    printf("First 10 terms of the series: ");
    
    for (i = 1; i <= 10; i++) 
    {
        term = a + (i - 1) * d;
        printf("%d ", term);
    }

    printf("\n");
    return 0;
}
