//wap to write function to find maximum.
#include<stdio.h>
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int x, y, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    result = max(x, y);
    printf("Maximum = %d", result);
    return 0;
}