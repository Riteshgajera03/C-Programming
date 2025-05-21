#include<stdio.h>
#include <conio.h>
#include <string.h>

#define TICKET_PRICE 250

int main() {
    int movieChoice, timeChoice, ticketCount;
    char name[50];
    char movies[3][30] = {"Avengers: Endgame", "Inception", "Interstellar"};
    char times[3][20] = {"10:00 AM", "2:00 PM", "6:00 PM"};

    printf("=== Welcome to Movie Ticket Booking System ===\n\n");

    // User details
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;  // Remove trailing newline

    // Movie selection
    printf("\nAvailable Movies:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, movies[i]);
    }

    printf("Choose a movie (1-3): ");
    scanf("%d", &movieChoice);

    if (movieChoice < 1 || movieChoice > 3) {
        printf("Invalid movie choice!\n");
        return 1;
    }

    // Time slot selection
    printf("\nAvailable Time Slots:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, times[i]);
    }

    printf("Choose a time slot (1-3): ");
    scanf("%d", &timeChoice);

    if (timeChoice < 1 || timeChoice > 3) {
        printf("Invalid time slot!\n");
        return 1;
    }

    // Number of tickets
    printf("\nEnter number of tickets: ");
    scanf("%d", &ticketCount);

    if (ticketCount < 1) {
        printf("You must book at least one ticket.\n");
        return 1;
    }

    // Calculate total
    int totalCost = ticketCount * TICKET_PRICE;

    // Booking summary
    printf("\n=== Booking Confirmation ===\n");
    printf("Name: %s\n", name);
    printf("Movie: %s\n", movies[movieChoice - 1]);
    printf("Time: %s\n", times[timeChoice - 1]);
    printf("Tickets: %d\n", ticketCount);
    printf("Total Amount: ₹%d\n", totalCost);
    printf("Status: Booking Confirmed ✅\n");

    printf("\nThank you for booking with us, %s! Enjoy your movie!\n", name);

    return 0;
}
