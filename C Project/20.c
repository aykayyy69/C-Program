#include <stdio.h>

int main()  
{  
    int n, i, j, temp, arr[50];  

    printf("Enter number of elements: ");  
    scanf("%d", &n);  

    printf("Enter %d elements: ", n);  
    for (i = 0; i < n; i++)  
        scanf("%d", &arr[i]);  

    // Sorting in ascending order
    for (i = 0; i < n - 1; i++)  
    {  
        for (j = i + 1; j < n; j++)  
        {  
            if (arr[i] > arr[j])  
            {  
                temp = arr[i];  
                arr[i] = arr[j];  
                arr[j] = temp;  
            }  
        }  
    }  

    printf("Sorted elements: ");  
    for (i = 0; i < n; i++)  
        printf("%d ", arr[i]);  

    return 0;  
}  
