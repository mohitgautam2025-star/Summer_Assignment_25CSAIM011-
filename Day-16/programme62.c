//wap to find maximum frequency element.
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

    // Find maximum frequency element
    int max_freq = 0;
    int max_freq_element = arr[0];

    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }
        if (freq > max_freq) {
            max_freq = freq;
            max_freq_element = arr[i];
        }
    }

    printf("The element with maximum frequency is: %d\n", max_freq_element);
    printf("Its frequency is: %d\n", max_freq);

    return 0;
}