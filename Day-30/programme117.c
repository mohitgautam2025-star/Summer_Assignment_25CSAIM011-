// wap to create student record system using arrays and strings.
#include <stdio.h>
#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 100
#define MAX_EMAIL_LENGTH 100
int main() {
    int choice;
    char names[MAX_STUDENTS][MAX_NAME_LENGTH];
    char emails[MAX_STUDENTS][MAX_EMAIL_LENGTH];
    int studentCount = 0;

    printf("Student Record System\n");
    printf("1. Add Student\n");
    printf("2. View Students\n");
    printf("3. Update Student\n");
    printf("4. Delete Student\n");
    printf("5. Exit\n");

    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character left by scanf

        switch(choice) {
            case 1:
                if(studentCount < MAX_STUDENTS) {
                    printf("Enter student name: ");
                    fgets(names[studentCount], MAX_NAME_LENGTH, stdin);
                    names[studentCount][strcspn(names[studentCount], "\n")] = 0; // Remove newline
                    printf("Enter student email: ");
                    fgets(emails[studentCount], MAX_EMAIL_LENGTH, stdin);
                    emails[studentCount][strcspn(emails[studentCount], "\n")] = 0; // Remove newline
                    studentCount++;
                    printf("Student added successfully!\n");
                } else {
                    printf("Maximum student limit reached!\n");
                }
                break;
            case 2:
                if(studentCount == 0) {
                    printf("No students to display.\n");
                } else {
                    for(int i = 0; i < studentCount; i++) {
                        printf("Student %d: Name: %s, Email: %s\n", i + 1, names[i], emails[i]);
                    }
                }
                break;
            case 3:
                if(studentCount == 0) {
                    printf("No students to update.\n");
                } else {
                    int index;
                    printf("Enter student index to update (1 to %d): ", studentCount);
                    scanf("%d", &index);
                    getchar(); // Consume newline character
                    if(index > 0 && index <= studentCount) {
                        index--; // Adjust for 0-based index
                        printf("Enter new name for student %d: ", index + 1);
                        fgets(names[index], MAX_NAME_LENGTH, stdin);
                        names[index][strcspn(names[index], "\n")] = 0; // Remove newline
                        printf("Enter new email for student %d: ", index + 1);
                        fgets(emails[index], MAX_EMAIL_LENGTH, stdin);
                        emails[index][strcspn(emails[index], "\n")] = 0; // Remove newline
                        printf("Student updated successfully!\n");
                    } else {
                        printf("Invalid student index.\n");
                    }
                }
                break;
            case 4:
                if(studentCount == 0) {
                    printf("No students to delete.\n");
                } else {
                    int index;
                    printf("Enter student index to delete (1 to %d): ", studentCount);
                    scanf("%d", &index);
                    getchar(); // Consume newline character
                    if(index > 0 && index <= studentCount) {
                        index--; // Adjust for 0-based index
                        for(int i = index; i < studentCount - 1; i++) {
                            strcpy(names[i], names[i + 1]);
                            strcpy(emails[i], emails[i + 1]);
                        }
                        studentCount--;
                        printf("Student deleted successfully!\n");
                    } else {
                        printf("Invalid student index.\n");
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