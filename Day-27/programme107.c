// wap to create salary management system.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice;
    printf("Salary Management System\n");
    printf("1. Add Salary Record\n");
    printf("2. View Salary Records\n");
    printf("3. Update Salary Record\n");
    printf("4. Delete Salary Record\n");
    printf("5. Exit\n");
    
    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                // Code to add salary record
                printf("Adding salary record...\n");
                break;
            case 2:
                // Code to view salary records
                printf("Viewing salary records...\n");
                break;
            case 3:
                // Code to update salary record
                printf("Updating salary record...\n");
                break;
            case 4:
                // Code to delete salary record
                printf("Deleting salary record...\n");
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