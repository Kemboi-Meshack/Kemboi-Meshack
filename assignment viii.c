#include <stdio.h>

// Function to check if a number is even or odd
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
}

// Main function to test the checkEvenOdd function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    checkEvenOdd(num);

    return 0;
}