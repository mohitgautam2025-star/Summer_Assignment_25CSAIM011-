//wap to convert decimal to binary.
#include<stdio.h>
int main(){
    int decimal, binary=0, i=1, remainder;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    while(decimal!=0){
        remainder=decimal%2;
        binary=binary+remainder*i;
        decimal=decimal/2;
        i=i*10;
    }
    printf("Binary number: %d", binary);
    return 0;
}