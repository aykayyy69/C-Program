#include <stdio.h>

// Structure definition for student
struct Student {
    int stdno;
    char name[50];
    float mark;
};

int main() {
    FILE *fp;
    int n, i;
    struct Student s;

    // Opening file in write mode
    fp = fopen("students.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Taking input for students
    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for Student %d\n", i + 1);
        
        printf("Student No: ");
        scanf("%d", &s.stdno);

        fflush(stdin); // Clear input buffer before reading string

        printf("Name: ");
        scanf(" %[^\n]s", s.name); // Reads full name with spaces

        printf("Marks: ");
        scanf("%f", &s.mark);

        // Writing structure data to file
        fwrite(&s, sizeof(struct Student), 1, fp);
    }
    
    fclose(fp); // Closing the file after writing

    // Opening file in read mode
    fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Displaying student records from file
    printf("\nStudent Records:\n");
    printf("-----------------------------------\n");
    printf("Std No\tName\t\tMarks\n");
    printf("-----------------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("%d\t%s\t\t%.2f\n", s.stdno, s.name, s.mark);
    }

    fclose(fp); // Closing the file after reading

    return 0;
}
