//wap to find diagonal sum.
#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int sum = 0;
    // Finding the sum of the main diagonal
    for (i = 0; i < m; i++) {
        sum += A[i][i];
    }

    printf("The sum of the main diagonal is: %d\n", sum);

    return 0;
}
