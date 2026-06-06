//wap to print the multiplication table of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The multiplication table of %d is:\n",n);
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}