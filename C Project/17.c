#include <stdio.h>

int main() {
    int choice, num, i, sum, rev, temp;

    do {
        printf("\nMenu:");
        printf("\n1. Check if a number is Odd or Even");
        printf("\n2. Display sum of first n natural numbers");
        printf("\n3. Check if a number is Palindrome");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Check Odd or Even
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num % 2 == 0)
                    printf("%d is Even.\n", num);
                else
                    printf("%d is Odd.\n", num);
                break;

            case 2: // Sum of first n natural numbers
                printf("Enter a number: ");
                scanf("%d", &num);
                sum = num * (num + 1) / 2; // Formula for sum of first n natural numbers
                printf("Sum of first %d natural numbers is %d.\n", num, sum);
                break;

            case 3: // Check if Palindrome
                printf("Enter a number: ");
                scanf("%d", &num);
                temp = num;
                rev = 0;
                while (temp > 0) {
                    rev = rev * 10 + temp % 10;
                    temp /= 10;
                }
                if (num == rev)
                    printf("%d is a Palindrome.\n", num);
                else
                    printf("%d is not a Palindrome.\n", num);
                break;

            case 4: // Exit
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
