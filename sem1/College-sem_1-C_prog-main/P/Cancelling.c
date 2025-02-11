#include <stdio.h>
#include <string.h>

// Function to cancel tickets
void cancel(struct Movies movies[], int total_movie) {
    char name[50];
    int choice, seats;
    char recorded_name[50], recorded_movie[50];
    int recorded_seats;
    float recorded_cost;
    int found = 0;

    FILE *detailfile = fopen("detail.txt", "r");
    FILE *tempfile = fopen("temp.txt", "w");

    if (detailfile == NULL || tempfile == NULL) {
        printf("Error accessing customer records.\n");
        return;
    }

    displaymovie(movies, total_movie);

    printf("\nEnter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter the movie number to cancel tickets for: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > total_movie) {
        printf("Invalid movie choice!\n");
        fclose(detailfile);
        fclose(tempfile);
        return;
    }

    printf("Enter the number of seats to cancel: ");
    scanf("%d", &seats);

    if (seats <= 0) {
        printf("Invalid number of seats to cancel.\n");
        fclose(detailfile);
        fclose(tempfile);
        return;
    }

    while (fscanf(detailfile, "%d %f %s %[^\n]", &recorded_seats, &recorded_cost, recorded_movie, recorded_name) != EOF) {
        if (strcmp(recorded_name, name) == 0 && strcmp(recorded_movie, movies[choice - 1].title) == 0) {
            if (recorded_seats == seats) {
                found = 1;
                movies[choice - 1].seats += seats;
                printf("Successfully canceled all %d seat(s) for %s.\n", seats, movies[choice - 1].title);
                printf("Customer information removed from records.\n");
                continue;
            } else if (recorded_seats > seats) {
                found = 1;
                movies[choice - 1].seats += seats;
                recorded_seats -= seats;
                printf("Successfully canceled %d seat(s) for %s. Remaining seats: %d.\n", seats, movies[choice - 1].title, recorded_seats);
            }
        }
        fprintf(tempfile, "%d %.2f %s %s\n", recorded_seats, recorded_cost, recorded_movie, recorded_name);
    }

    fclose(detailfile);
    fclose(tempfile);

    remove("detail.txt");
    rename("temp.txt", "detail.txt");

    if (!found) {
        printf("No matching booking found for the customer.\n");
    }
}
