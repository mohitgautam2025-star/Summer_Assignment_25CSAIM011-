//wap to print armstrong numbers in a range.
#include<stdio.h>
int main()
{
    int low, high, num, originalNum, remainder, result;
    printf("Enter the range (lower and upper limits): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d and %d are: ", low, high);
    for(num = low; num <= high; ++num)
    {
        originalNum = num;
        result = 0;
        while (originalNum != 0)
        {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }
        if (result == num)
            printf("%d ", num);
    }
    return 0;
}