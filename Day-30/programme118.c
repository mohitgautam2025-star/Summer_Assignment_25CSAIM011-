// wap to create mini library system.
#include <stdio.h>
#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100
int main() {
    int choice;
    char titles[MAX_BOOKS][MAX_TITLE_LENGTH];
    char authors[MAX_BOOKS][MAX_AUTHOR_LENGTH];
    int bookCount = 0;

    printf("Mini Library System\n");
    printf("1. Add Book\n");
    printf("2. View Books\n");
    printf("3. Update Book\n");
    printf("4. Delete Book\n");
    printf("5. Exit\n");

    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character left by scanf

        switch(choice) {
            case 1:
                if(bookCount < MAX_BOOKS) {
                    printf("Enter book title: ");
                    fgets(titles[bookCount], MAX_TITLE_LENGTH, stdin);
                    titles[bookCount][strcspn(titles[bookCount], "\n")] = 0; // Remove newline
                    printf("Enter book author: ");
                    fgets(authors[bookCount], MAX_AUTHOR_LENGTH, stdin);
                    authors[bookCount][strcspn(authors[bookCount], "\n")] = 0; // Remove newline
                    bookCount++;
                    printf("Book added successfully!\n");
                } else {
                    printf("Maximum book limit reached!\n");
                }
                break;
            case 2:
                if(bookCount == 0) {
                    printf("No books to display.\n");
                } else {
                    for(int i = 0; i < bookCount; i++) {
                        printf("Book %d: Title: %s, Author: %s\n", i + 1, titles[i], authors[i]);
                    }
                }
                break;
            case 3:
                if(bookCount == 0) {
                    printf("No books to update.\n");
                } else {
                    int index;
                    printf("Enter book index to update (1 to %d): ", bookCount);
                    scanf("%d", &index);
                    getchar(); // Consume newline character
                    if(index > 0 && index <= bookCount) {
                        index--; // Adjust for 0-based index
                        printf("Enter new title for book %d: ", index + 1);
                        fgets(titles[index], MAX_TITLE_LENGTH, stdin);
                        titles[index][strcspn(titles[index], "\n")] = 0; // Remove newline
                        printf("Enter new author for book %d: ", index + 1);
                        fgets(authors[index], MAX_AUTHOR_LENGTH, stdin);
                        authors[index][strcspn(authors[index], "\n")] = 0; // Remove newline
                        printf("Book updated successfully!\n");
                    } else {
                        printf("Invalid book index.\n");
                    }
                }
                break;
            case 4:
                if(bookCount == 0) {
                    printf("No books to delete.\n");
                } else {
                    int index;
                    printf("Enter book index to delete (1 to %d): ", bookCount);
                    scanf("%d", &index);
                    getchar(); // Consume newline character
                    if(index > 0 && index <= bookCount) {
                        index--; // Adjust for 0-based index
                        for(int i = index; i < bookCount - 1; i++) {
                            strcpy(titles[i], titles[i + 1]);
                            strcpy(authors[i], authors[i + 1]);
                        }
                        bookCount--;
                        printf("Book deleted successfully!\n");
                    } else {
                        printf("Invalid book index.\n");
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