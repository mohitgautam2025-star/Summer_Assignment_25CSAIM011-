// wap to create inventory management system.
#include <stdio.h>
int main() {
    int choice;
    printf("Inventory Management System\n");
    printf("1. Add Item\n");
    printf("2. View Items\n");
    printf("3. Update Item\n");
    printf("4. Delete Item\n");
    printf("5. Exit\n");

    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                // Code to add item
                printf("Adding item...\n");
                break;
            case 2:
                // Code to view items
                printf("Viewing items...\n");
                break;
            case 3:
                // Code to update item
                printf("Updating item...\n");
                break;
            case 4:
                // Code to delete item
                printf("Deleting item...\n");
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}