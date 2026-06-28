// wap to create library management system.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice;
    printf("Library Management System\n");
    printf("1. Add Book Record\n");
    printf("2. View Book Records\n");
    printf("3. Update Book Record\n");
    printf("4. Delete Book Record\n");
    printf("5. Exit\n");
    
    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                // Code to add book record
                printf("Adding book record...\n");
                break;
            case 2:
                // Code to view book records
                printf("Viewing book records...\n");
                break;
            case 3:
                // Code to update book record
                printf("Updating book record...\n");
                break;
            case 4:
                // Code to delete book record
                printf("Deleting book record...\n");
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