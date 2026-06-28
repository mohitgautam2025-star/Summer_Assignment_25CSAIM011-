// wap to create ticket booking system.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice;
    printf("Ticket Booking System\n");
    printf("1. Book Ticket\n");
    printf("2. View Booked Tickets\n");
    printf("3. Update Ticket Booking\n");
    printf("4. Cancel Ticket Booking\n");
    printf("5. Exit\n");
    
    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                // Code to book ticket
                printf("Booking ticket...\n");
                break;
            case 2:
                // Code to view booked tickets
                printf("Viewing booked tickets...\n");
                break;
            case 3:
                // Code to update ticket booking
                printf("Updating ticket booking...\n");
                break;
            case 4:
                // Code to cancel ticket booking
                printf("Cancelling ticket booking...\n");
                break;
            case 5:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}