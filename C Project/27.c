#include <stdio.h>
#include <string.h>

int main() 
{
    int n, i, j;
    char names[100][50], temp[50];

    // Input number of names
    printf("Enter the number of names: ");
    scanf("%d", &n);

    // Input names
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%s", names[i]); // Read each name
    }

    // Sorting names using Bubble Sort
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (strcmp(names[i], names[j]) > 0) // Compare strings
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Display sorted names
    printf("Names in alphabetical order:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
