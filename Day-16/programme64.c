//wap to remove duplicates from array.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates from the array
    int unique_arr[n];
    int unique_count = 0;

    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        for (int j = 0; j < unique_count; j++) {
            if (arr[i] == unique_arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            unique_arr[unique_count++] = arr[i];
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", unique_arr[i]);
    }
    
    return 0;
}