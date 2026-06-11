//wap to count set bits in a number.
#include<stdio.h>
int main(){
    int num, count=0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while(num){
        count += num & 1;
        num >>= 1;
    }
    printf("Number of set bits: %d", count);
    return 0;
}