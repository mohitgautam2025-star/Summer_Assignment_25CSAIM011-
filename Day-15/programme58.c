//wap to rotate array left.
#include <stdio.h>
int main() {
    int arr[100], n, d, i, j, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &d);
    
    // Rotate left
    for (i = 0; i < d; i++) {
        temp = arr[0];
        for (j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
    
    printf("The rotated array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}