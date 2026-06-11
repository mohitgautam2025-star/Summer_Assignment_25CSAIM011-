//wap to print prime numbers in a range.
#include<stdio.h>
int main()
{
    int start, end, i, j, flag;
    printf("Enter the start of the range : ");
    scanf("%d", &start);
    printf("Enter the end of the range : ");
    scanf("%d", &end);
    printf("Prime numbers in the range are : ");
    for(i=start; i<=end; i++)
    {
        flag = 0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
            printf("%d ", i);
    }
    return 0;
}