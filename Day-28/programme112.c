// wap to create contact management system.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice;
    printf("Contact Management System\n");
    printf("1. Add Contact\n");
    printf("2. View Contacts\n");
    printf("3. Update Contact\n");
    printf("4. Delete Contact\n");
    printf("5. Exit\n");
    
    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                // Code to add contact
                printf("Adding contact...\n");
                break;
            case 2:
                // Code to view contacts
                printf("Viewing contacts...\n");
                break;
            case 3:
                // Code to update contact
                printf("Updating contact...\n");
                break;
            case 4:
                // Code to delete contact
                printf("Deleting contact...\n");
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