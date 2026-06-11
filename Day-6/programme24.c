//wap to find x^n without pow function.
#include<stdio.h>
int main(){
    int x, n, result=1;
    printf("Enter base (x) and exponent (n): ");
    scanf("%d %d", &x, &n);
    for(int i=0; i<n; i++){
        result *= x;
    }
    printf("%d^%d = %d", x, n, result);
    return 0;
}