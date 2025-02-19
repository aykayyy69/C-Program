#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100], rev[100];

    // Input string from user
    printf("Enter a string: ");
    scanf("%s", str);

    // Copy and reverse the string
    strcpy(rev, str);
    strrev(rev);

    // Check if original and reversed strings are same
    if (strcmp(str, rev) == 0) 
        printf("%s is a Palindrome.\n", str);
    else 
        printf("%s is not a Palindrome.\n", str);

    return 0;
}
