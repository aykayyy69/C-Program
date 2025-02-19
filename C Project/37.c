#include <stdio.h>
#include <string.h>

// Structure definition for employee
struct Employee {
    int id;
    char name[50];
    int age;
    float salary;
};

int main() {
    int n, i, j;
    struct Employee temp;

    // Asking for the number of employees
    printf("Enter number of employees: ");
    scanf("%d", &n);
    
    struct Employee emp[n];

    // Taking input for employees
    for(i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);
        getchar(); // Consumes newline character left in buffer

        printf("Name: ");
        scanf(" %[^\n]s", emp[i].name); // Reads full name including spaces

        printf("Age: ");
        scanf("%d", &emp[i].age);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Sorting employees by name (Bubble Sort)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(strcmp(emp[j].name, emp[j + 1].name) > 0) {
                // Swapping employee records
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }

    // Displaying sorted employee details
    printf("\nSorted Employee Details (by Name):\n");
    printf("--------------------------------------------------\n");
    printf("ID\tName\t\tAge\tSalary\n");
    printf("--------------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%d\t%.2f\n", emp[i].id, emp[i].name, emp[i].age, emp[i].salary);
    }

    return 0;
}
