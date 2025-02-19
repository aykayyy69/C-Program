#include <stdio.h>

int main()  
{  
    int salary[200], i, count = 0;  

    printf("Enter salaries of 200 employees:\n");  
    for (i = 0; i < 200; i++)  
        scanf("%d", &salary[i]);  

    // Counting salaries in the range 45000 to 70000
    for (i = 0; i < 200; i++)  
    {  
        if (salary[i] >= 45000 && salary[i] <= 70000)  
            count++;  
    }  

    printf("Number of employees with salary between 45000 and 70000: %d\n", count);  

    return 0;  
}  
