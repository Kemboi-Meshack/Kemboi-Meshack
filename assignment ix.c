#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int marks, i;

    file = fopen("students.txt", "w"); // Open file in write mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", name, &marks);
        fprintf(file, "Name: %s, Marks: %d\n", name, marks); // Write to file
    }

    fclose(file);
    printf("Data written to students.txt successfully.\n");

    return 0;
}