// wap to create student record management system.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice;
    printf("Student Record Management System\n");
    printf("1. Add Student Record\n");
    printf("2. View Student Records\n");
    printf("3. Update Student Record\n");
    printf("4. Delete Student Record\n");
    printf("5. Exit\n");
    
    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                // Code to add student record
                printf("Adding student record...\n");
                break;
            case 2:
                // Code to view student records
                printf("Viewing student records...\n");
                break;
            case 3:
                // Code to update student record
                printf("Updating student record...\n");
                break;
            case 4:
                // Code to delete student record
                printf("Deleting student record...\n");
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
