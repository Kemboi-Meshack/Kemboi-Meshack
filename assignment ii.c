#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineAmount = 0, fineRate;

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    // Calculate the days overdue
    daysOverdue = returnDate - dueDate;

    // Determine the fine rate based on days overdue
    if (daysOverdue <= 7 && daysOverdue > 0) {
        fineRate = 20;
    } else if (daysOverdue > 7 && daysOverdue <= 14) {
        fineRate = 50;
    } else if (daysOverdue > 14) {
        fineRate = 100;
    } else {
        fineRate = 0; // No fine if returned on or before the due date
    }

    // Calculate fine amount
    fineAmount = fineRate * daysOverdue;

    // Display results
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %.2f\n", fineRate);
    printf("Fine Amount: Ksh. %.2f\n", fineAmount);

    return 0;
}