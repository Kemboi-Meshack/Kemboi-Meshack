#include <stdio.h>

int main() {
    // Declare and initialize the 2D array
    int scores[3][4] = {
        {33, 52, 10, 12},
        {45, 98, 35, 60},
        {84, 76, 80, 42}
    };

    // Print the elements of the array using nested for loops
    printf("Elements of the scores array:\n");
    for (int i = 0; i < 3; i++) { // Loop through rows
        for (int j = 0; j < 4; j++) { // Loop through columns
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}