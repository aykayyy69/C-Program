#include <stdio.h>

int main()  
{  
    int A[2][3], B[2][3], C[2][3], i, j;  

    printf("Enter elements of first 2x3 matrix:\n");  
    for (i = 0; i < 2; i++)  
        for (j = 0; j < 3; j++)  
            scanf("%d", &A[i][j]);  

    printf("Enter elements of second 2x3 matrix:\n");  
    for (i = 0; i < 2; i++)  
        for (j = 0; j < 3; j++)  
            scanf("%d", &B[i][j]);  

    // Matrix addition  
    for (i = 0; i < 2; i++)  
        for (j = 0; j < 3; j++)  
            C[i][j] = A[i][j] + B[i][j];  

    printf("Sum of the matrices:\n");  
    for (i = 0; i < 2; i++)  
    {  
        for (j = 0; j < 3; j++)  
            printf("%d ", C[i][j]);  
        printf("\n");  
    }  

    return 0;  
}  
