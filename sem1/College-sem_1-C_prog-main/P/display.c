
#include <stdio.h>

struct  Movies{
    char title[50];
    char showtime[10];
    int seats;
    int cost;
};

// Function to display movie details
void displaymovie(struct Movies movies[], int total_movie) {
    printf("\n--- Movies and Available Seats ---\n");
    for (int i = 0; i < total_movie; i++) {
        printf("%d. %s | Showtime: %s | Available Seats: %d | Ticket Cost: %d\n",
               i + 1, movies[i].title, movies[i].showtime, movies[i].seats, movies[i].cost);
    }
}
