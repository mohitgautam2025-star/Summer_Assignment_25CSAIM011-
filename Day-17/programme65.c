//wap to merge arrays.
#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    
    int arr1[n1];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    
    int arr2[n2];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Merge the two arrays
    int merged_array[n1 + n2];
    for (int i = 0; i < n1; i++) {
        merged_array[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged_array[n1 + i] = arr2[i];
    }
    
    // Print the merged array
    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged_array[i]);
    }
    
    return 0;
}