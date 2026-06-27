// wap to create marksheet generation sysytem.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice;
    printf("Marksheet Generation System\n");
    printf("1. Add Marksheet Record\n");
    printf("2. View Marksheet Records\n");
    printf("3. Update Marksheet Record\n");
    printf("4. Delete Marksheet Record\n");
    printf("5. Exit\n");
    
    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                // Code to add marksheet record
                printf("Adding marksheet record...\n");
                break;
            case 2:
                // Code to view marksheet records
                printf("Viewing marksheet records...\n");
                break;
            case 3:
                // Code to update marksheet record
                printf("Updating marksheet record...\n");
                break;
            case 4:
                // Code to delete marksheet record
                printf("Deleting marksheet record...\n");
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