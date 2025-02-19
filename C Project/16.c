#include <stdio.h>

int main() {
    int num, i, isPrime;
    
    printf("Prime numbers between 100 and 200 are:\n");
    
    for (num = 100; num <= 200; num++) {
        isPrime = 1; // Assume number is prime
        
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }
        
        if (isPrime && num > 1) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
    return 0;
}
