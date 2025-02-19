#include <stdio.h>

int main()  
{  
    int m, n, i, j, matrix[10][10], rowSum;  

    printf("Enter number of rows and columns (m n): ");  
    scanf("%d %d", &m, &n);  

    printf("Enter elements of the matrix:\n");  
    for (i = 0; i < m; i++)  
        for (j = 0; j < n; j++)  
            scanf("%d", &matrix[i][j]);  

    // Computing sum of each row  
    for (i = 0; i < m; i++)  
    {  
        rowSum = 0;  
        for (j = 0; j < n; j++)  
            rowSum += matrix[i][j];  

        printf("Sum of row %d: %d\n", i + 1, rowSum);  
    }  

    return 0;  
}  
