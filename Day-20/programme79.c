//wap to find row-wise sum.
#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n], rowSum[m];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Calculating row-wise sum
    for (i = 0; i < m; i++) {
        rowSum[i] = 0; // Initialize row sum to zero
        for (j = 0; j < n; j++) {
            rowSum[i] += A[i][j];
        }
    }

    printf("Row-wise sums are:\n");
    for (i = 0; i < m; i++) {
        printf("Sum of row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}