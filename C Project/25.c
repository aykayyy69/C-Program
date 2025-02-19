#include <stdio.h>

int main()  
{  
    int m, n, i, j, matrix[10][10], colSum;  

    printf("Enter number of rows and columns (m n): ");  
    scanf("%d %d", &m, &n);  

    printf("Enter elements of the matrix:\n");  
    for (i = 0; i < m; i++)  
        for (j = 0; j < n; j++)  
            scanf("%d", &matrix[i][j]);  

    // Computing sum of each column  
    for (j = 0; j < n; j++)  
    {  
        colSum = 0;  
        for (i = 0; i < m; i++)  
            colSum += matrix[i][j];  

        printf("Sum of column %d: %d\n", j + 1, colSum);  
    }  

    return 0;  
}  
