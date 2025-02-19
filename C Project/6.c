#include <stdio.h>

int main()  
{  
    int a, b, c, middle;  
    printf("Enter three numbers: ");  
    scanf("%d %d %d", &a, &b, &c);  

    if ((a > b && a < c) || (a > c && a < b))  
        middle = a;  
    else if ((b > a && b < c) || (b > c && b < a))  
        middle = b;  
    else  
        middle = c;  

    printf("The middle number is: %d\n", middle);  

    return 0;  
}  
