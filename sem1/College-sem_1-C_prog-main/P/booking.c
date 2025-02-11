#include <stdio.h>
#include <string.h>

// Function to book tickets
void book(struct Movies movies[], int total_movie) {
    char name[50];
    int choice, seats;
    FILE *detailfile = fopen("detail.txt", "a");

    if (detailfile == NULL) {
        printf("Error opening file for saving customer details.\n");
        return;
    }

    displaymovie(movies, total_movie);

    printf("\nEnter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter the movie number to book tickets for: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > total_movie) {
        printf("Invalid movie choice!\n");
        fclose(detailfile);
        return;
    }

    printf("Enter the number of seats to book: ");
    scanf("%d", &seats);

    if (seats <= 0 || seats > movies[choice - 1].seats) {
        printf("Invalid number of seats or not enough seats available.\n");
        fclose(detailfile);
        return;
    }

    int totalCost = seats * movies[choice - 1].cost;

    fprintf(detailfile, "%d %.2f %s %s\n", seats, totalCost, movies[choice - 1].title, name);

    fclose(detailfile);

    receipt(name, movies[choice - 1].title, movies[choice - 1].showtime, seats, movies[choice - 1].cost, totalCost);

    movies[choice - 1].seats -= seats;

    printf("Successfully booked %d seat(s) for %s at %s.\n", seats, movies[choice - 1].title, movies[choice - 1].showtime);
}
