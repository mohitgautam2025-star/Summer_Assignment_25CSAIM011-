// wap to check whether the given number is palindrome or not.
#include<stdio.h>
int main()
{
    int num, originalNum, remainder, reverse = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    if (reverse == originalNum)
        printf("%d is a palindrome.", originalNum);
    else
        printf("%d is not a palindrome.", originalNum);
    return 0;
}