//wap to find nth term of fibonacci series.
#include<stdio.h>
int main()
{
    int n, i, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the position of the term to find : ");
    scanf("%d", &n);
    for(i = 1; i < n; ++i)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("The %dth term of the Fibonacci series is %d", n, t1);
    return 0;
}