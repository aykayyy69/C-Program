#include <stdio.h>

int main() {
    int n, i;

    // Asking user for the number of employees
    printf("Enter number of employees: ");
    scanf("%d", &n);

    int id[n];
    char name[n][50], designation[n][50];
    float salary[n];

    // Taking input for employees
    for(i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &id[i]);
        getchar();  // To consume the newline character left by scanf

        printf("Name: ");
        scanf(" %[^\n]s", name[i]);  // Reads full name with spaces

        printf("Designation: ");
        scanf(" %[^\n]s", designation[i]);  // Reads full designation with spaces

        printf("Salary: ");
        scanf("%f", &salary[i]);
    }

    // Displaying the entered employee details
    printf("\nEmployee Details:\n");
    printf("-------------------------------------------------------------\n");
    printf("ID\tName\t\tDesignation\t\tSalary\n");
    printf("-------------------------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n", id[i], name[i], designation[i], salary[i]);
    }

    return 0;
}
