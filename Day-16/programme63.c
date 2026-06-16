//wap to find pair with given sum.
#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the target sum: ");
    scanf("%d", &sum);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find pair with given sum
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair with sum %d is: (%d, %d)\n", sum, arr[i], arr[j]);
            }
        }
    }

    return 0;
}