#include <stdio.h>

int main()  
{  
    int num;  
    printf("Enter a number: ");  
    scanf("%d", &num);  

    if (num % 5 == 0 && num % 7 != 0)  
        printf("The number %d is divisible by 5 but not by 7.\n", num);  
    else  
        printf("The number %d does not satisfy the condition.\n", num);  

    return 0;  
}  
