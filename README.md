#include <stdio.h>

int main() {
    int age;
    float income;

    // Input for customer's age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Input for customer's annual income
    printf("Enter your annual income (in Sh): ");
    scanf("%f", &income);

    // Conditional statement to check if the customer qualifies for a loan
    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}

