//wap to second largest element.
#include <stdio.h>
int main() {
    int arr[100], n, i, largest, secondLargest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (n < 2) {
        printf("Not enough elements to find the second largest.\n");
        return 0;
    }
    
    largest = secondLargest = arr[0];
    
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    if (largest == secondLargest) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }
    
    return 0;
}