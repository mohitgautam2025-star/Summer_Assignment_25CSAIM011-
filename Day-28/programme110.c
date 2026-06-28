// wap to create bank account system.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice;
    printf("Bank Account System\n");
    printf("1. Create Account\n");
    printf("2. View Account Details\n");
    printf("3. Update Account Details\n");
    printf("4. Delete Account\n");
    printf("5. Exit\n");
    
    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                // Code to create account
                printf("Creating account...\n");
                break;
            case 2:
                // Code to view account details
                printf("Viewing account details...\n");
                break;
            case 3:
                // Code to update account details
                printf("Updating account details...\n");
                break;
            case 4:
                // Code to delete account
                printf("Deleting account...\n");
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