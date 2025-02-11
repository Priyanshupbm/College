
#include <stdio.h>
#include <stdlib.h>
#include "display.c"
#include "booking.c"
#include "cancelling.c"
#include "receipt.c"

struct Movies movies[5];

// Function to initialize movie details
void in_movie() {
    movies[0] = (struct Movies){"Kanguva", "12:00 PM", 50, 10};
    movies[1] = (struct Movies){"Baahubali ", "03:00 PM", 30, 12};
    movies[2] = (struct Movies){"Pushpa", "06:00 PM", 20, 15};
}

int main() {
    int choice;

    // Initialize movie details
    in_movie();

    while (1) {
        // Display menu
        printf("\n--- Online Movie Ticket Booking System ---\n");
        printf("1. Display Movies and Seats\n");
        printf("2. Book a Ticket\n");
        printf("3. Cancel a Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displaymovie(movies, 3);  // Display movie details
                break;
            case 2:
                book(movies, 3);  // Book a ticket
                break;
            case 3:
                cancel(movies, 3);  // Cancel a ticket
                break;
            case 4:
                printf("Thank you for using the system!\n");  // Exit message
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");  // Invalid choice
        }
    }
    return 0;
}
