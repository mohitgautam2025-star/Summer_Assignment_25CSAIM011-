// wap to create employee management system.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice;
    printf("Employee Management System\n");
    printf("1. Add Employee Record\n");
    printf("2. View Employee Records\n");
    printf("3. Update Employee Record\n");
    printf("4. Delete Employee Record\n");
    printf("5. Exit\n");
    
    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                // Code to add employee record
                printf("Adding employee record...\n");
                break;
            case 2:
                // Code to view employee records
                printf("Viewing employee records...\n");
                break;
            case 3:
                // Code to update employee record
                printf("Updating employee record...\n");
                break;
            case 4:
                // Code to delete employee record
                printf("Deleting employee record...\n");
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