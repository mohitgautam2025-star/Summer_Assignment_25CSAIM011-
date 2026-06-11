//wap to find product of digits.
#include<stdio.h>
int main()
{
    int num, product = 1, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0)
    {
        remainder = num % 10;
        product *= remainder;
        num /= 10;
    }
    printf("Product of the digits is: %d", product);
    return 0;
}