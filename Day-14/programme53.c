//wap to linear search.
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, i;
    
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            break;
        }
    }
    
    if (i == n) {
        printf("Element not found\n");
    }
    
    return 0;
}