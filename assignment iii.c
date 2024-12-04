#include <stdio.h>
#include <stdlib.h>

// Function to write a sentence to the file
void writeToFile() {
    FILE *file = fopen("data.txt", "w");  // Open file for writing (creates new file)
    if (file == NULL) {
        perror("Error opening file for writing");
        exit(1);
    }

    char sentence[101];
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);  // Read input from user

    fprintf(file, "%s", sentence);  // Write to file
    fclose(file);  // Close the file
}

// Function to read content from the file and display it
void readFromFile() {
    FILE *file = fopen("data.txt", "r");  // Open file for reading
    if (file == NULL) {
        perror("Error opening file for reading");
        exit(1);
    }

    char ch;
    printf("\nContent of data.txt:\n");
    while ((ch = fgetc(file)) != EOF) {  // Read and print file content
        putchar(ch);
    }

    fclose(file);  // Close the file
}

// Function to append a second sentence to the file
void appendToFile() {
    FILE *file = fopen("data.txt", "a");  // Open file for appending
    if (file == NULL) {
        perror("Error opening file for appending");
        exit(1);
    }

    char sentence[101];
    printf("Enter another sentence to append: ");
    fgets(sentence, sizeof(sentence), stdin);  // Read input from user

    fprintf(file, "%s", sentence);  // Append to the file
    fclose(file);  // Close the file
}

int main() {
    int choice;

    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Write a sentence to data.txt\n");
        printf("2. Read content from data.txt\n");
        printf("3. Append a sentence to data.txt\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // To consume the newline character left by scanf

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}