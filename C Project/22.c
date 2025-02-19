#include <stdio.h>

int main()  
{  
    int m, n, i, j, matrix[10][10], transpose[10][10];  

    printf("Enter number of rows and columns (m n): ");  
    scanf("%d %d", &m, &n);  

    printf("Enter elements of the matrix:\n");  
    for (i = 0; i < m; i++)  
        for (j = 0; j < n; j++)  
            scanf("%d", &matrix[i][j]);  

    // Computing transpose  
    for (i = 0; i < m; i++)  
        for (j = 0; j < n; j++)  
            transpose[j][i] = matrix[i][j];  

    printf("Transpose of the given matrix:\n");  
    for (i = 0; i < n; i++)  
    {  
        for (j = 0; j < m; j++)  
            printf("%d ", transpose[i][j]);  
        printf("\n");  
    }  

    return 0;  
}  
