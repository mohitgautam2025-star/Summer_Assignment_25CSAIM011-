// wap to recursive reverse of a number.
#include<stdio.h>
int reverse(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) * pow(10, log10(n)) + reverse(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d\n", num, reverse(num));
    return 0;
}