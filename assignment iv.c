#include <stdio.h>

int main() {
    // Declaring and initializing a 2D array 'scores' with 2 rows and 2 columns
    int scores[2][2] = {
        {92, 35},
        {84, 72}
    };

    // Print the elements of the 2D array using a nested for loop
    printf("The elements of the scores array are:\n");
    for (int i = 0; i < 2; i++) {  // Outer loop for rows
        for (int j = 0; j < 2; j++) {  // Inner loop for columns
            printf("scores[%d][%d] = %d\n", i, j, scores[i][j]);
        }
    }

    return 0;
}