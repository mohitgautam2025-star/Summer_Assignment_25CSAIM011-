//wap to find sum and average of array.
#include<stdio.h>
int main()
{
    int arr[100], n, i, sum = 0;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (float)sum / n;
    printf("The sum of the array is: %d\n", sum);
    printf("The average of the array is: %.2f", average);
    return 0;
}