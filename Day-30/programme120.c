// wap to develop complete mini project using arrays, strings and functions.
#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 100
#define MAX_POSITION_LENGTH 100
int main(){
    int choice;
    char names[MAX_EMPLOYEES][MAX_NAME_LENGTH];
    char positions[MAX_EMPLOYEES][MAX_POSITION_LENGTH];
    int employeeCount = 0;

    printf("Mini Employee Management System\n");
    printf("1. Add Employee\n");
    printf("2. View Employees\n");
    printf("3. Update Employee\n");
    printf("4. Delete Employee\n");
    printf("5. Exit\n");

    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character left by scanf

        switch(choice) {
            case 1:
                if(employeeCount < MAX_EMPLOYEES) {
                    printf("Enter employee name: ");
                    fgets(names[employeeCount], MAX_NAME_LENGTH, stdin);
                    names[employeeCount][strcspn(names[employeeCount], "\n")] = 0; // Remove newline
                    printf("Enter employee position: ");
                    fgets(positions[employeeCount], MAX_POSITION_LENGTH, stdin);
                    positions[employeeCount][strcspn(positions[employeeCount], "\n")] = 0; // Remove newline
                    employeeCount++;
                    printf("Employee added successfully!\n");
                } else {
                    printf("Maximum employee limit reached!\n");
                }
                break;
            case 2:
                if(employeeCount == 0) {
                    printf("No employees to display.\n");
                } else {
                    for(int i = 0; i < employeeCount; i++) {
                        printf("Employee %d: Name: %s, Position: %s\n", i + 1, names[i], positions[i]);
                    }
                }
                break;
            case 3:
                if(employeeCount == 0) {
                    printf("No employees to update.\n");
                } else {
                    int index;
                    printf("Enter employee index to update (1 to %d): ", employeeCount);
                    scanf("%d", &index);
                    getchar(); // Consume newline character
                    if(index > 0 && index <= employeeCount) {
                        index--; // Adjust for 0-based index
                        printf("Enter new name for employee %d: ", index + 1);
                        fgets(names[index], MAX_NAME_LENGTH, stdin);
                        names[index][strcspn(names[index], "\n")] = 0; // Remove newline
                        printf("Enter new position for employee %d: ", index + 1);
                        fgets(positions[index], MAX_POSITION_LENGTH, stdin);
                        positions[index][strcspn(positions[index], "\n")] = 0; // Remove newline
                        printf("Employee updated successfully!\n");
                    } else {
                        printf("Invalid employee index.\n");
                    }
                }
                break;
            case 4:
                if(employeeCount == 0) {
                    printf("No employees to delete.\n");
                } else {
                    int index;
                    printf("Enter employee index to delete (1 to %d): ", employeeCount);
                    scanf("%d", &index);
                    getchar(); // Consume newline character
                    if(index > 0 && index <= employeeCount) {
                        index--; // Adjust for 0-based index
                        for(int i = index; i < employeeCount - 1; i++) {
                            strcpy(names[i], names[i + 1]);
                            strcpy(positions[i], positions[i + 1]);
                        }
                        employeeCount--;
                        printf("Employee deleted successfully!\n");
                    } else {
                        printf("Invalid employee index.\n");
                    }
                }
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;

}