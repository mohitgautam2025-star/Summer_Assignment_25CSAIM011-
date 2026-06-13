//wap to count even and odd elements.
#include<stdio.h>
int main()
{
    int arr[100], n, i, evenCount = 0, oddCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    printf("The number of even elements is: %d\n", evenCount);
    printf("The number of odd elements is: %d", oddCount);
    return 0;
}