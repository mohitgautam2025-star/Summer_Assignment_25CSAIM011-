//wap to generate fibonacci series up to n terms.
#include<stdio.h>
int main()
int first=0,second=1,next,n;
printf("enter the number of terms:");
scanf("%d",&n);
printf("fibonacci series:");
for(int i=0;i<n;i++)
{
    if(i<=1)
        next=i;
    else
    {
        next=first+second;
        first=second;
        second=next;
    }
    printf("%d ",next);
}