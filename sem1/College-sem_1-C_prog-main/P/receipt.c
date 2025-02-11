#include <stdio.h>

// Function to generate a receipt
void receipt(const char *name, const char *movieTitle, const char *showtime, int seats, int cost, int totalCost) {
    printf("\n------ Receipt ------\n");
    printf("Customer Name: %s\n", name);
    printf("Movie: %s\n", movieTitle);
    printf("Showtime: %s\n", showtime);
    printf("Number of Seats: %d\n", seats);
    printf("Ticket Cost: $%d\n", cost);
    printf("Total Cost: $%d\n", totalCost);
    printf("---------------------\n");
}
