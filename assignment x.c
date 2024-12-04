#include <stdio.h>
#include <stdlib.h>

void writeToFile() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    char sentence[101];  // Allow space for 100 characters + null terminator
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    if (fprintf(file, "%s", sentence) < 0) {
        perror("Error writing to file");
    } else {
        printf("Sentence written to file successfully.\n");
    }

    fclose(file);
}

void readFromFile() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char content[101];
    if (fgets(content, sizeof(content), file) == NULL) {
        perror("Error reading from file or file is empty");
    } else {
        printf("Content of the file: %s\n", content);
    }

    fclose(file);
}

void appendToFile() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return;
    }

    char sentence[101];
    printf("Enter a sentence to append (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    if (fprintf(file, "%s", sentence) < 0) {
        perror("Error appending to file");
    } else {
        printf("Sentence appended to file successfully.\n");
    }

    fclose(file);
}

int main() {
    int choice;

    do {
        printf("\nSimple Text File Manager\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Consume the newline left by scanf

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
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}