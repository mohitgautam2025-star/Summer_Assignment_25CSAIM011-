// wap to create menu driven aaray operations system.
#include <stdio.h>
int main() {
    int choice, n, i;
    printf("Menu Driven Array Operations System\n");
    printf("1. Create Array\n");
    printf("2. Display Array\n");
    printf("3. Find Maximum Element\n");
    printf("4. Find Minimum Element\n");
    printf("5. Exit\n");

    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter the number of elements: ");
                scanf("%d", &n);
                int arr[n];
                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("Array elements are:\n");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                int max = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > max) {
                        max = arr[i];
                    }
                }
                printf("Maximum element is: %d\n", max);
                break;
            case 4:
                int min = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] < min) {
                        min = arr[i];
                    }
                }
                printf("Minimum element is: %d\n", min);
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

                        