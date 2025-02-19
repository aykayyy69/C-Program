#include <stdio.h>

int main()  
{  
    float b, h, A;  
    printf("Enter base and height of the triangle: ");  
    scanf("%f %f", &b, &h);  
    A = 0.5 * b * h;  
    printf("Area of the triangle = %.2f\n", A);  
    return 0;  
}  
