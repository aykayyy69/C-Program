#include <stdio.h>
#include <math.h>

int main()  
{  
    float a, b, c, D, root1, root2, realPart, imagPart;  
    printf("Enter coefficients a, b, and c: ");  
    scanf("%f %f %f", &a, &b, &c);  

    D = b * b - 4 * a * c;  // Calculate discriminant

    if (D > 0)  
    {  
        root1 = (-b + sqrt(D)) / (2 * a);  
        root2 = (-b - sqrt(D)) / (2 * a);  
        printf("Roots are real and distinct: %.2f, %.2f\n", root1, root2);  
    }  
    else if (D == 0)  
    {  
        root1 = root2 = -b / (2 * a);  
        printf("Roots are real and equal: %.2f, %.2f\n", root1, root2);  
    }  
    else  
    {  
        realPart = -b / (2 * a);  
        imagPart = sqrt(-D) / (2 * a);  
        printf("Roots are complex and imaginary: %.2f + %.2fi, %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);  
    }  

    return 0;  
}  
